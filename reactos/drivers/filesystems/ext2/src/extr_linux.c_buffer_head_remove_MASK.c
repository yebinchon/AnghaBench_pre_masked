
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct buffer_head {int b_rb_node; } ;
struct block_device {int bd_bh_root; } ;


 int FUNC_0 (int *,int *) ;

void FUNC_1(struct block_device *VAR_0, struct buffer_head *VAR_1)
{
    FUNC_0(&VAR_1->b_rb_node, &VAR_0->bd_bh_root);
}
