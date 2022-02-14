
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ida {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct ida*,int) ;
 int FUNC_1 (struct ida*,int ) ;
 int FUNC_2 (struct ida*,int,int ) ;
 int FUNC_3 (struct ida*) ;
 int FUNC_4 (struct ida*,int) ;
 int FUNC_5 (struct ida*) ;

__attribute__((used)) static void FUNC_6(struct ida *VAR_1)
{
 int VAR_2, VAR_3;

 for (VAR_2 = 0; VAR_2 < 10000; VAR_2++)
  FUNC_0(VAR_1, FUNC_1(VAR_1, VAR_0) != VAR_2);

 FUNC_4(VAR_1, 20);
 FUNC_4(VAR_1, 21);
 for (VAR_2 = 0; VAR_2 < 3; VAR_2++) {
  VAR_3 = FUNC_1(VAR_1, VAR_0);
  FUNC_0(VAR_1, VAR_3 < 0);
  if (VAR_2 == 2)
   FUNC_0(VAR_1, VAR_3 != 10000);
 }

 for (VAR_2 = 0; VAR_2 < 5000; VAR_2++)
  FUNC_4(VAR_1, VAR_2);

 FUNC_0(VAR_1, FUNC_2(VAR_1, 5000, VAR_0) != 10001);
 FUNC_3(VAR_1);

 FUNC_0(VAR_1, !FUNC_5(VAR_1));
}
