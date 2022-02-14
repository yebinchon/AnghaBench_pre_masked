
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcf_proto {int deleting; int lock; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct tcf_proto *VAR_0)
{
 FUNC_0(&VAR_0->lock);
 VAR_0->deleting = 1;
 FUNC_1(&VAR_0->lock);
}
