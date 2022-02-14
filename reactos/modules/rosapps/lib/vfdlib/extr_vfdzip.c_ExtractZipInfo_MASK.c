
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int zip_hdr ;
struct TYPE_3__ {scalar_t__ header_signature; scalar_t__ compression_method; int general_flags; int uncompressed_size; } ;
typedef TYPE_1__ ZIP_HEADER ;
typedef int ULONG ;
typedef int HANDLE ;
typedef int DWORD ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 () ;
 int FUNC_1 (int ,TYPE_1__*,int,int*,int *) ;
 scalar_t__ FUNC_2 (int ,int ,int *,int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ,char*) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;

DWORD FUNC_5(
 HANDLE VAR_6,
 ULONG *VAR_7)
{
 ZIP_HEADER VAR_8;
 DWORD VAR_9;
 DWORD VAR_10;

 if (FUNC_2(VAR_6, 0, ((void*)0), VAR_2) != 0) {
  VAR_10 = FUNC_0();

  FUNC_4(0,
   ("SetFilePointer() - %s\n",
   FUNC_3(VAR_10)));

  return VAR_10;
 }

 if (!FUNC_1(VAR_6, &VAR_8, sizeof(VAR_8), &VAR_9, ((void*)0))) {
  VAR_10 = FUNC_0();

  FUNC_4(0,
   ("ReadFile() - %s\n",
   FUNC_3(VAR_10)));

  return VAR_10;
 }

 if (VAR_9 != sizeof(VAR_8) ||
  VAR_8.header_signature != VAR_4 ||
  VAR_8.compression_method != VAR_5 ||
  (VAR_8.general_flags & VAR_3)) {

  FUNC_4(0,
   ("[VFD] Invalid ZIP file\n"));

  return VAR_0;
 }



 *VAR_7 = VAR_8.uncompressed_size;

 return VAR_1;
}
