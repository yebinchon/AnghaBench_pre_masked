
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct llist_head {int dummy; } ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_3 (struct llist_head*) ;
 int VAR_1 ;
 int FUNC_4 () ;
 struct llist_head* FUNC_5 (int *) ;

bool FUNC_6(void)
{
 struct llist_head *VAR_2, *VAR_3;

 VAR_2 = FUNC_5(&VAR_1);
 VAR_3 = FUNC_5(&VAR_0);

 if (FUNC_3(VAR_2) || FUNC_1())
  if (FUNC_3(VAR_3))
   return 0;


 FUNC_0(FUNC_2(FUNC_4()));

 return 1;
}
