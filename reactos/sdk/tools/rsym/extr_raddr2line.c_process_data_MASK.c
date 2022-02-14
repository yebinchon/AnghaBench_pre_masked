
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int ULONG ;
struct TYPE_11__ {scalar_t__ e_magic; long e_lfanew; } ;
struct TYPE_10__ {int SizeOfOptionalHeader; } ;
struct TYPE_9__ {size_t ImageBase; } ;
struct TYPE_8__ {int PointerToRawData; } ;
typedef TYPE_1__* PIMAGE_SECTION_HEADER ;
typedef TYPE_2__* PIMAGE_OPTIONAL_HEADER ;
typedef TYPE_3__* PIMAGE_FILE_HEADER ;
typedef TYPE_4__* PIMAGE_DOS_HEADER ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,size_t) ;
 TYPE_1__* FUNC_1 (TYPE_3__*,TYPE_1__*) ;
 size_t FUNC_2 (size_t,size_t) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*) ;
 int VAR_1 ;

int
FUNC_6 ( const void* VAR_2, size_t VAR_3 )
{
 PIMAGE_DOS_HEADER VAR_4;
 PIMAGE_FILE_HEADER VAR_5;
 PIMAGE_OPTIONAL_HEADER VAR_6;
 PIMAGE_SECTION_HEADER VAR_7;
 PIMAGE_SECTION_HEADER VAR_8;
 size_t VAR_9;
 int VAR_10;


 VAR_4 = (PIMAGE_DOS_HEADER)VAR_2;
 if (VAR_4->e_magic != VAR_0 || VAR_4->e_lfanew == 0L)
 {
  FUNC_4("Input file is not a PE image.\n");
  return 1;
 }



 VAR_5 = (PIMAGE_FILE_HEADER)((char *)VAR_2 + VAR_4->e_lfanew + sizeof(ULONG));


 VAR_6 = (PIMAGE_OPTIONAL_HEADER)(VAR_5 + 1);
 VAR_9 = VAR_6->ImageBase;


 VAR_7 = (PIMAGE_SECTION_HEADER)((char *) VAR_6 + VAR_5->SizeOfOptionalHeader);


 VAR_3 = FUNC_2 ( VAR_9, VAR_3 );


 VAR_8 = FUNC_1 (
  VAR_5, VAR_7 );
 if ( !VAR_8 )
 {
  FUNC_3 ( VAR_1, "Couldn't find rossym section in executable\n" );
  return 1;
 }
 VAR_10 = FUNC_0 ( (char*)VAR_2 + VAR_8->PointerToRawData,
  VAR_3 );
 if ( VAR_10 )
  FUNC_5 ( "??:0\n" );
 return VAR_10;
}
