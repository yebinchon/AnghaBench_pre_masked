
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct page {int inuse; int objects; scalar_t__ frozen; struct kmem_cache_node* freelist; } ;
struct kmem_cache_node {int dummy; } ;
struct TYPE_8__ {int size; struct kmem_cache_node** node; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct kmem_cache_node*,struct page*,int ) ;
 struct kmem_cache_node* FUNC_2 (TYPE_1__*,struct kmem_cache_node*) ;
 int FUNC_3 (TYPE_1__*,int,int ) ;
 int FUNC_4 (struct kmem_cache_node*) ;
 int FUNC_5 (TYPE_1__*,struct kmem_cache_node*,int ) ;
 int FUNC_6 (TYPE_1__*,struct kmem_cache_node*) ;
 struct kmem_cache_node* FUNC_7 (TYPE_1__*,struct kmem_cache_node*,int,int ) ;
 TYPE_1__* VAR_4 ;
 struct page* FUNC_8 (TYPE_1__*,int ,int) ;
 int FUNC_9 (struct page*) ;
 int FUNC_10 (char*,...) ;

__attribute__((used)) static void FUNC_11(int VAR_5)
{
 struct page *VAR_6;
 struct kmem_cache_node *VAR_7;

 FUNC_0(VAR_4->size < sizeof(struct kmem_cache_node));

 VAR_6 = FUNC_8(VAR_4, VAR_2, VAR_5);

 FUNC_0(!VAR_6);
 if (FUNC_9(VAR_6) != VAR_5) {
  FUNC_10("SLUB: Unable to allocate memory from node %d\n", VAR_5);
  FUNC_10("SLUB: Allocating a useless per node structure in order to be able to continue\n");
 }

 VAR_7 = VAR_6->freelist;
 FUNC_0(!VAR_7);




 VAR_7 = FUNC_7(VAR_4, VAR_7, sizeof(struct kmem_cache_node),
        VAR_1);
 VAR_6->freelist = FUNC_2(VAR_4, VAR_7);
 VAR_6->inuse = 1;
 VAR_6->frozen = 0;
 VAR_4->node[VAR_5] = VAR_7;
 FUNC_4(VAR_7);
 FUNC_3(VAR_4, VAR_5, VAR_6->objects);





 FUNC_1(VAR_7, VAR_6, VAR_0);
}
