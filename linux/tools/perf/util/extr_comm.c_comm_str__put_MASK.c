
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comm_str {int str; int rb_node; int refcnt; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct comm_str*) ;
 int FUNC_2 (int *,int *) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(struct comm_str *VAR_2)
{
 if (VAR_2 && FUNC_3(&VAR_2->refcnt)) {
  FUNC_0(&VAR_0);
  FUNC_2(&VAR_2->rb_node, &VAR_1);
  FUNC_4(&VAR_0);
  FUNC_5(&VAR_2->str);
  FUNC_1(VAR_2);
 }
}
