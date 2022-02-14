
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct crush_bucket_tree {int num_nodes; int * node_weights; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (void**) ;
 int FUNC_1 (void**,void*,int,int ) ;
 int FUNC_2 (void**,void*,int,int ) ;
 int FUNC_3 (char*,void*,void*) ;
 int * FUNC_4 (int,int,int ) ;

__attribute__((used)) static int FUNC_5(void **VAR_4, void *VAR_5,
        struct crush_bucket_tree *VAR_6)
{
 int VAR_7;
 FUNC_3("crush_decode_tree_bucket %p to %p\n", *VAR_4, VAR_5);
 FUNC_1(VAR_4, VAR_5, VAR_6->num_nodes, VAR_3);
 VAR_6->node_weights = FUNC_4(VAR_6->num_nodes, sizeof(u32), VAR_2);
 if (VAR_6->node_weights == ((void*)0))
  return -VAR_1;
 FUNC_2(VAR_4, VAR_5, VAR_6->num_nodes * sizeof(u32), VAR_3);
 for (VAR_7 = 0; VAR_7 < VAR_6->num_nodes; VAR_7++)
  VAR_6->node_weights[VAR_7] = FUNC_0(VAR_4);
 return 0;
bad:
 return -VAR_0;
}
