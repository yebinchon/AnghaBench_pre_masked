
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct buffer_head {int b_rb_node; } ;
struct block_device {int bd_bh_root; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int *,int ) ;

__attribute__((used)) static void FUNC_1(struct block_device *VAR_1, struct buffer_head *VAR_2)
{
    FUNC_0(&VAR_1->bd_bh_root, &VAR_2->b_rb_node, VAR_0);
}
