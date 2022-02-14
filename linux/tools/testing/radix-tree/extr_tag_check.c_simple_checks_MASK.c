
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int *,unsigned long,int) ;
 int FUNC_2 (int *) ;
 int VAR_1 ;
 int FUNC_3 (int,char*,int ) ;
 int FUNC_4 () ;
 int VAR_2 ;
 int FUNC_5 (int *,int) ;

void FUNC_6(void)
{
 unsigned long VAR_3;
 FUNC_0(VAR_2, VAR_0);

 for (VAR_3 = 0; VAR_3 < 10000; VAR_3++) {
  FUNC_1(&VAR_2, VAR_3, 0);
  FUNC_1(&VAR_2, VAR_3, 1);
 }
 FUNC_5(&VAR_2, 0);
 FUNC_5(&VAR_2, 1);
 FUNC_3(2, "before item_kill_tree: %d allocated\n", VAR_1);
 FUNC_2(&VAR_2);
 FUNC_4();
 FUNC_3(2, "after item_kill_tree: %d allocated\n", VAR_1);
}
