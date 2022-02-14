
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct ext2fs_rb_private {int root; int * wcursor; int * rcursor; } ;
typedef TYPE_1__* ext2fs_generic_bitmap_64 ;
typedef int errcode_t ;
typedef scalar_t__ __u64 ;
struct TYPE_3__ {scalar_t__ end; scalar_t__ start; scalar_t__ real_end; scalar_t__ private; } ;


 int FUNC_0 (scalar_t__,scalar_t__,struct ext2fs_rb_private*) ;
 int FUNC_1 (scalar_t__,int *) ;

__attribute__((used)) static errcode_t FUNC_2(ext2fs_generic_bitmap_64 VAR_0,
    __u64 VAR_1, __u64 VAR_2)
{
 struct ext2fs_rb_private *VAR_3;

 VAR_3 = (struct ext2fs_rb_private *) VAR_0->private;
 VAR_3->rcursor = ((void*)0);
 VAR_3->wcursor = ((void*)0);

 FUNC_1(((VAR_1 < VAR_0->end) ? VAR_1 : VAR_0->end) - VAR_0->start,
      &VAR_3->root);

 VAR_0->end = VAR_1;
 VAR_0->real_end = VAR_2;

 if (VAR_0->end < VAR_0->real_end)
  FUNC_0(VAR_0->end + 1 - VAR_0->start,
     VAR_0->real_end - VAR_0->end, VAR_3);
 return 0;

}
