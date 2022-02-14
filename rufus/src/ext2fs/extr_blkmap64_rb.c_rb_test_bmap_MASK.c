
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct ext2fs_rb_private {int dummy; } ;
typedef TYPE_1__* ext2fs_generic_bitmap_64 ;
typedef int __u64 ;
struct TYPE_3__ {scalar_t__ start; scalar_t__ private; } ;


 int FUNC_0 (struct ext2fs_rb_private*,int ) ;

__attribute__((used)) inline
static int FUNC_1(ext2fs_generic_bitmap_64 VAR_0, __u64 VAR_1)
{
 struct ext2fs_rb_private *VAR_2;

 VAR_2 = (struct ext2fs_rb_private *) VAR_0->private;
 VAR_1 -= VAR_0->start;

 return FUNC_0(VAR_2, VAR_1);
}
