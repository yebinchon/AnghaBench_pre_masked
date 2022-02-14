
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned long winerr; int doserr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* VAR_3 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (char*,unsigned long,...) ;
 int VAR_4 ;
 int FUNC_2 (int ,char*,unsigned long,...) ;
 int FUNC_3 (TYPE_1__*) ;
 int VAR_5 ;

void
FUNC_4(unsigned long VAR_6)
{
 int VAR_7;

 if (VAR_6 == 0)
 {
  VAR_4 = 0;
  return;
 }

 for (VAR_7 = 0; VAR_7 < FUNC_3(VAR_3); VAR_7++)
 {
  if (VAR_3[VAR_7].winerr == VAR_6)
  {
   int VAR_8 = VAR_3[VAR_7].doserr;


   FUNC_0(VAR_0,
     (FUNC_1("mapped win32 error code %lu to %d",
          VAR_6, VAR_8)));



   VAR_4 = VAR_8;
   return;
  }
 }


 FUNC_0(VAR_2,
   (FUNC_1("unrecognized win32 error code: %lu",
        VAR_6)));




 VAR_4 = VAR_1;
 return;
}
