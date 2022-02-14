
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct ext2_struct_u32_list {int dummy; } ;
typedef TYPE_1__* ext2_u32_list ;
typedef scalar_t__ errcode_t ;
typedef int blk_t ;
typedef int __u32 ;
struct TYPE_8__ {int size; int num; struct TYPE_8__* list; int magic; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__**) ;
 scalar_t__ FUNC_1 (int,int,TYPE_1__**) ;
 scalar_t__ FUNC_2 (int,TYPE_1__**) ;
 int FUNC_3 (TYPE_1__*,int *,int) ;
 int FUNC_4 (TYPE_1__*,int ,int) ;

__attribute__((used)) static errcode_t FUNC_5(int VAR_1, int VAR_2, __u32 *VAR_3,
          ext2_u32_list *VAR_4)
{
 ext2_u32_list VAR_5;
 errcode_t VAR_6;

 VAR_6 = FUNC_2(sizeof(struct ext2_struct_u32_list), &VAR_5);
 if (VAR_6)
  return VAR_6;
 FUNC_4(VAR_5, 0, sizeof(struct ext2_struct_u32_list));
 VAR_5->magic = VAR_0;
 VAR_5->size = VAR_1 ? VAR_1 : 10;
 VAR_5->num = VAR_2;
 VAR_6 = FUNC_1(VAR_5->size, sizeof(blk_t), &VAR_5->list);
 if (VAR_6) {
  FUNC_0(&VAR_5);
  return VAR_6;
 }
 if (VAR_3)
  FUNC_3(VAR_5->list, VAR_3, VAR_5->size * sizeof(blk_t));
 else
  FUNC_4(VAR_5->list, 0, VAR_5->size * sizeof(blk_t));
 *VAR_4 = VAR_5;
 return 0;
}
