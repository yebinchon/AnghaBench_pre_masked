
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint64_t ;
struct bb_struct_u64_list {int dummy; } ;
typedef int errcode_t ;
typedef int blk64_t ;
typedef TYPE_1__* bb_u64_list ;
struct TYPE_5__ {int size; int num; int * list; int magic; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_0 (int,int) ;
 int FUNC_1 (TYPE_1__*) ;
 int * FUNC_2 (int) ;
 int FUNC_3 (int *,int *,int) ;
 int FUNC_4 (int *,int ,int) ;

__attribute__((used)) static errcode_t FUNC_5(int VAR_2, int VAR_3, uint64_t *VAR_4, bb_u64_list *VAR_5)
{
 bb_u64_list VAR_6;

 VAR_6 = FUNC_0(1, sizeof(struct bb_struct_u64_list));
 if (VAR_6 == ((void*)0))
  return VAR_1;
 VAR_6->magic = VAR_0;
 VAR_6->size = VAR_2 ? VAR_2 : 10;
 VAR_6->num = VAR_3;
 VAR_6->list = FUNC_2(sizeof(blk64_t) * VAR_6->size);
 if (VAR_6->list == ((void*)0)) {
  FUNC_1(VAR_6);
  VAR_6 = ((void*)0);
  return VAR_1;
 }
 if (VAR_4)
  FUNC_3(VAR_6->list, VAR_4, VAR_6->size * sizeof(blk64_t));
 else
  FUNC_4(VAR_6->list, 0, VAR_6->size * sizeof(blk64_t));
 *VAR_5 = VAR_6;
 return 0;
}
