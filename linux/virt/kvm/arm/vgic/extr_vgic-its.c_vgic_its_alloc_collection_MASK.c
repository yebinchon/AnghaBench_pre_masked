
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct vgic_its {int collection_list; int baser_coll_table; } ;
struct its_collection {int coll_list; int target_addr; int collection_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct its_collection* FUNC_0 (int,int ) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (struct vgic_its*,int ,int ,int *) ;

__attribute__((used)) static int FUNC_3(struct vgic_its *VAR_4,
         struct its_collection **VAR_5,
         u32 VAR_6)
{
 struct its_collection *VAR_7;

 if (!FUNC_2(VAR_4, VAR_4->baser_coll_table, VAR_6, ((void*)0)))
  return VAR_2;

 VAR_7 = FUNC_0(sizeof(*VAR_7), VAR_3);
 if (!VAR_7)
  return -VAR_1;

 VAR_7->collection_id = VAR_6;
 VAR_7->target_addr = VAR_0;

 FUNC_1(&VAR_7->coll_list, &VAR_4->collection_list);
 *VAR_5 = VAR_7;

 return 0;
}
