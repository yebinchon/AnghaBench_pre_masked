
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,char*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int ,int) ;
 int VAR_7 ;

void
FUNC_5(int VAR_8)
{
 VAR_4 = VAR_8;
 if (VAR_8 == VAR_1) {
  if (VAR_6 == 1) {
   (void) FUNC_2(VAR_7, "Unexpected broken pipe.\n");
   VAR_6 = 0;
  } else {
   FUNC_0("RESTORE");
   FUNC_1(1);
  }
 } else if (VAR_8 == VAR_0) {
  if (VAR_6 == 0)
   VAR_3 = 1;
 }
 if (VAR_5 > 0) {



  FUNC_3(VAR_2, 1);

 }
}
