
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int SectorSize; } ;
struct TYPE_6__ {int str; scalar_t__ (* fn ) (int *) ;} ;
struct TYPE_5__ {char* _handle; int member_0; } ;
typedef scalar_t__ HANDLE ;
typedef int FILE ;
typedef TYPE_1__ FAKE_FD ;
typedef int BOOL ;


 int FUNC_0 (TYPE_2__*) ;
 int VAR_0 ;
 TYPE_3__ VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 TYPE_2__* VAR_3 ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (char*,char const*,...) ;

BOOL FUNC_7(HANDLE VAR_4)
{
 const char* VAR_5 = "Partition Boot Record";
 FAKE_FD VAR_6 = { 0 };
 FILE* VAR_7 = (FILE*)&VAR_6;
 int VAR_8;

 VAR_6._handle = (char*)VAR_4;
 FUNC_4(VAR_1.SectorSize);

 if (!FUNC_1(VAR_7)) {
  FUNC_6("Volume does not have an x86 %s", VAR_5);
  return VAR_0;
 }

 if (FUNC_2(VAR_7) || FUNC_3(VAR_7)) {
  for (VAR_8=0; VAR_8<FUNC_0(VAR_3); VAR_8++) {
   if (VAR_3[VAR_8].fn(VAR_7)) {
    FUNC_6("Drive has a %s %s", VAR_3[VAR_8].str, VAR_5);
    return VAR_2;
   }
  }
  FUNC_6("Volume has an unknown FAT16 or FAT32 %s", VAR_5);
 } else {
  FUNC_6("Volume has an unknown %s", VAR_5);
 }
 return VAR_2;
}
