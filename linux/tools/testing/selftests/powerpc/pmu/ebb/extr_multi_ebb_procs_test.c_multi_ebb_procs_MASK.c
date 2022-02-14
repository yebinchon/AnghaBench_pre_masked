
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ pid_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 () ;
 int FUNC_7 (scalar_t__,int ) ;
 int FUNC_8 () ;
 int FUNC_9 (int) ;
 int FUNC_10 (scalar_t__) ;

int FUNC_11(void)
{
 pid_t VAR_2[VAR_0];
 int VAR_3, VAR_4, VAR_5;

 FUNC_1(!FUNC_4());

 VAR_3 = FUNC_8();
 FUNC_0(VAR_3 < 0);
 FUNC_0(FUNC_2(VAR_3));

 for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++) {
  VAR_2[VAR_5] = FUNC_6();
  if (VAR_2[VAR_5] == 0)
   FUNC_5(FUNC_3());
 }


 FUNC_9(10);

 VAR_4 = 0;
 for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++) {

  FUNC_7(VAR_2[VAR_5], VAR_1);

  VAR_4 |= FUNC_10(VAR_2[VAR_5]);
 }

 return VAR_4;
}
