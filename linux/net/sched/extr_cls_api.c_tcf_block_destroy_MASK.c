
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcf_block {int proto_destroy_lock; int lock; } ;


 int FUNC_0 (struct tcf_block*,int ) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_2(struct tcf_block *VAR_1)
{
 FUNC_1(&VAR_1->lock);
 FUNC_1(&VAR_1->proto_destroy_lock);
 FUNC_0(VAR_1, VAR_0);
}
