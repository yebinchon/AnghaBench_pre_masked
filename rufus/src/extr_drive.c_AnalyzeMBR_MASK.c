
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
 TYPE_2__* VAR_3 ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (char*,char const*,char const*,...) ;

BOOL FUNC_5(HANDLE VAR_4, const char* VAR_5, BOOL VAR_6)
{
 const char* VAR_7 = "Master Boot Record";
 FAKE_FD VAR_8 = { 0 };
 FILE* VAR_9 = (FILE*)&VAR_8;
 int VAR_10;

 VAR_8._handle = (char*)VAR_4;
 FUNC_2(VAR_1.SectorSize);

 if (!FUNC_1(VAR_9)) {
  FUNC_4("%s does not have an x86 %s", VAR_5, VAR_7);
  return VAR_0;
 }
 for (VAR_10=0; VAR_10<FUNC_0(VAR_3); VAR_10++) {
  if (VAR_3[VAR_10].fn(VAR_9)) {
   FUNC_4("%s has a %s %s", VAR_5, VAR_3[VAR_10].str, VAR_7);
   return VAR_2;
  }
 }

 FUNC_4("%s has an unknown %s", VAR_5, VAR_7);
 return VAR_2;
}
