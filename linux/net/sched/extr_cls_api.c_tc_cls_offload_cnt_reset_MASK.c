
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct tcf_proto {int lock; } ;
struct tcf_block {int cb_lock; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct tcf_block*,scalar_t__*) ;

__attribute__((used)) static void
FUNC_4(struct tcf_block *VAR_0, struct tcf_proto *VAR_1,
    u32 *VAR_2, u32 *VAR_3)
{
 FUNC_0(&VAR_0->cb_lock);

 FUNC_1(&VAR_1->lock);
 FUNC_3(VAR_0, VAR_3);
 *VAR_2 = 0;
 FUNC_2(&VAR_1->lock);
}
