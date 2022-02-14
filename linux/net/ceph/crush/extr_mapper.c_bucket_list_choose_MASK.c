
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int size; int* items; int id; int hash; } ;
struct crush_bucket_list {int* item_weights; int* sum_weights; TYPE_1__ h; } ;
typedef int __u64 ;


 int FUNC_0 (int ,int,int,int,int ) ;
 int FUNC_1 (char*,int,...) ;

__attribute__((used)) static int FUNC_2(const struct crush_bucket_list *VAR_0,
         int VAR_1, int VAR_2)
{
 int VAR_3;

 for (VAR_3 = VAR_0->h.size-1; VAR_3 >= 0; VAR_3--) {
  __u64 VAR_4 = FUNC_0(VAR_0->h.hash, VAR_1, VAR_0->h.items[VAR_3],
      VAR_2, VAR_0->h.id);
  VAR_4 &= 0xffff;
  FUNC_1("list_choose i=%d x=%d r=%d item %d weight %x "
   "sw %x rand %llx",
   VAR_3, VAR_1, VAR_2, VAR_0->h.items[VAR_3], VAR_0->item_weights[VAR_3],
   VAR_0->sum_weights[VAR_3], VAR_4);
  VAR_4 *= VAR_0->sum_weights[VAR_3];
  VAR_4 = VAR_4 >> 16;

  if (VAR_4 < VAR_0->item_weights[VAR_3]) {
   return VAR_0->h.items[VAR_3];
  }
 }

 FUNC_1("bad list sums for bucket %d\n", VAR_0->h.id);
 return VAR_0->h.items[0];
}
