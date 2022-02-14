
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtnl_link {int dummy; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct rtnl_link**,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (struct rtnl_link**) ;
 int FUNC_3 (struct rtnl_link*,int ) ;
 int VAR_2 ;
 int FUNC_4 (struct rtnl_link*,int *) ;
 int FUNC_5 () ;
 struct rtnl_link*** VAR_3 ;
 int FUNC_6 () ;
 int FUNC_7 () ;

void FUNC_8(int VAR_4)
{
 struct rtnl_link **VAR_5, *VAR_6;
 int VAR_7;

 FUNC_0(VAR_4 < 0 || VAR_4 > VAR_1);

 FUNC_5();
 VAR_5 = VAR_3[VAR_4];
 if (!VAR_5) {
  FUNC_6();
  return;
 }
 FUNC_1(VAR_3[VAR_4], ((void*)0));
 for (VAR_7 = 0; VAR_7 < VAR_0; VAR_7++) {
  VAR_6 = VAR_5[VAR_7];
  if (!VAR_6)
   continue;

  FUNC_4(VAR_5[VAR_7], ((void*)0));
  FUNC_3(VAR_6, VAR_2);
 }
 FUNC_6();

 FUNC_7();

 FUNC_2(VAR_5);
}
