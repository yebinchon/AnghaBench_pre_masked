
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rb_root {int dummy; } ;
struct buffer_head {int dummy; } ;
struct block_device {struct rb_root bd_bh_root; } ;
typedef int sector_t ;


 struct buffer_head* FUNC_0 (struct rb_root*,int ) ;

__attribute__((used)) static struct buffer_head *FUNC_1(struct block_device *VAR_0,
                     sector_t VAR_1)
{
    struct rb_root *VAR_2;
    VAR_2 = &VAR_0->bd_bh_root;
    return FUNC_0(VAR_2, VAR_1);
}
