
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int* items; int id; int hash; } ;
struct crush_bucket_tree {int num_nodes; int* node_weights; TYPE_1__ h; } ;
typedef int __u64 ;
typedef int __u32 ;


 scalar_t__ FUNC_0 (int ,int,int,int,int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;

__attribute__((used)) static int FUNC_4(const struct crush_bucket_tree *VAR_0,
         int VAR_1, int VAR_2)
{
 int VAR_3;
 __u32 VAR_4;
 __u64 VAR_5;


 VAR_3 = VAR_0->num_nodes >> 1;

 while (!FUNC_3(VAR_3)) {
  int VAR_6;

  VAR_4 = VAR_0->node_weights[VAR_3];
  VAR_5 = (__u64)FUNC_0(VAR_0->h.hash, VAR_1, VAR_3, VAR_2,
       VAR_0->h.id) * (__u64)VAR_4;
  VAR_5 = VAR_5 >> 32;


  VAR_6 = FUNC_1(VAR_3);
  if (VAR_5 < VAR_0->node_weights[VAR_6])
   VAR_3 = VAR_6;
  else
   VAR_3 = FUNC_2(VAR_3);
 }

 return VAR_0->h.items[VAR_3 >> 1];
}
