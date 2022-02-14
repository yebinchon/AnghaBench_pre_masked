
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef TYPE_1__* ext2fs_generic_bitmap_64 ;
typedef TYPE_2__* ext2fs_ba_private ;
typedef scalar_t__ errcode_t ;
struct TYPE_7__ {struct TYPE_7__* bitarray; } ;
struct TYPE_6__ {int real_end; int start; void* private; } ;


 int FUNC_0 (TYPE_2__**) ;
 scalar_t__ FUNC_1 (size_t,TYPE_2__**) ;

__attribute__((used)) static errcode_t FUNC_2 (ext2fs_generic_bitmap_64 VAR_0)
{
 ext2fs_ba_private VAR_1;
 errcode_t VAR_2;
 size_t VAR_3;







 VAR_2 = FUNC_1(sizeof (ext2fs_ba_private), &VAR_1);
 if (VAR_2)
  return VAR_2;

 VAR_3 = (size_t) (((VAR_0->real_end - VAR_0->start) / 8) + 1);

 VAR_2 = FUNC_1(VAR_3, &VAR_1->bitarray);
 if (VAR_2) {
  FUNC_0(&VAR_1);
  VAR_1 = 0;
  return VAR_2;
 }
 VAR_0->private = (void *) VAR_1;
 return 0;
}
