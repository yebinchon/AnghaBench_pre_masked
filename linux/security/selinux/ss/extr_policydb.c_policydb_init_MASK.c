
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct policydb {TYPE_1__* symtab; void* range_tr; void* filename_trans; int permissive_map; int policycaps; int filename_trans_ttypes; int te_avtab; } ;
struct TYPE_2__ {void* table; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct policydb*) ;
 int * VAR_2 ;
 int FUNC_2 (int *) ;
 int VAR_3 ;
 int VAR_4 ;
 void* FUNC_3 (int ,int ,int) ;
 int FUNC_4 (void*) ;
 int FUNC_5 (void*,int ,int *) ;
 int FUNC_6 (struct policydb*,int ,int) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_7 (struct policydb*) ;
 int FUNC_8 (TYPE_1__*,int ) ;
 int * VAR_7 ;

__attribute__((used)) static int FUNC_9(struct policydb *VAR_8)
{
 int VAR_9, VAR_10;

 FUNC_6(VAR_8, 0, sizeof(*VAR_8));

 for (VAR_9 = 0; VAR_9 < VAR_1; VAR_9++) {
  VAR_10 = FUNC_8(&VAR_8->symtab[VAR_9], VAR_7[VAR_9]);
  if (VAR_10)
   goto out;
 }

 VAR_10 = FUNC_0(&VAR_8->te_avtab);
 if (VAR_10)
  goto out;

 VAR_10 = FUNC_7(VAR_8);
 if (VAR_10)
  goto out;

 VAR_10 = FUNC_1(VAR_8);
 if (VAR_10)
  goto out;

 VAR_8->filename_trans = FUNC_3(VAR_4, VAR_3,
        (1 << 10));
 if (!VAR_8->filename_trans) {
  VAR_10 = -VAR_0;
  goto out;
 }

 VAR_8->range_tr = FUNC_3(VAR_6, VAR_5, 256);
 if (!VAR_8->range_tr) {
  VAR_10 = -VAR_0;
  goto out;
 }

 FUNC_2(&VAR_8->filename_trans_ttypes);
 FUNC_2(&VAR_8->policycaps);
 FUNC_2(&VAR_8->permissive_map);

 return 0;
out:
 FUNC_4(VAR_8->filename_trans);
 FUNC_4(VAR_8->range_tr);
 for (VAR_9 = 0; VAR_9 < VAR_1; VAR_9++) {
  FUNC_5(VAR_8->symtab[VAR_9].table, VAR_2[VAR_9], ((void*)0));
  FUNC_4(VAR_8->symtab[VAR_9].table);
 }
 return VAR_10;
}
