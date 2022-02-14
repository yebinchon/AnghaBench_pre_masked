
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct role_trans {struct role_trans* next; struct ocontext* head; struct role_trans* fstype; } ;
struct role_allow {struct role_allow* next; struct ocontext* head; struct role_allow* fstype; } ;
struct TYPE_4__ {int nprim; } ;
struct policydb {int permissive_map; int policycaps; int filename_trans_ttypes; int * type_attr_map_array; TYPE_2__ p_types; int range_tr; int filename_trans; struct role_trans* role_allow; struct role_trans* role_tr; struct role_trans* genfs; struct ocontext** ocontexts; int te_avtab; int * type_val_to_struct; struct role_trans* user_val_to_struct; struct role_trans* role_val_to_struct; struct role_trans* class_val_to_struct; int ** sym_val_to_name; TYPE_1__* symtab; } ;
struct ocontext {struct ocontext* next; } ;
struct genfs {struct genfs* next; struct ocontext* head; struct genfs* fstype; } ;
struct TYPE_3__ {int table; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct policydb*) ;
 int FUNC_2 () ;
 int * VAR_3 ;
 int FUNC_3 (int *) ;
 int VAR_4 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ,int *) ;
 int FUNC_6 (struct role_trans*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct ocontext*,int) ;
 int VAR_5 ;

void FUNC_9(struct policydb *VAR_6)
{
 struct ocontext *VAR_7, *VAR_8;
 struct genfs *VAR_9, *VAR_10;
 int VAR_11;
 struct role_allow *VAR_12, *VAR_13 = ((void*)0);
 struct role_trans *VAR_14, *VAR_15 = ((void*)0);

 for (VAR_11 = 0; VAR_11 < VAR_2; VAR_11++) {
  FUNC_2();
  FUNC_5(VAR_6->symtab[VAR_11].table, VAR_3[VAR_11], ((void*)0));
  FUNC_4(VAR_6->symtab[VAR_11].table);
 }

 for (VAR_11 = 0; VAR_11 < VAR_2; VAR_11++)
  FUNC_7(VAR_6->sym_val_to_name[VAR_11]);

 FUNC_6(VAR_6->class_val_to_struct);
 FUNC_6(VAR_6->role_val_to_struct);
 FUNC_6(VAR_6->user_val_to_struct);
 FUNC_7(VAR_6->type_val_to_struct);

 FUNC_0(&VAR_6->te_avtab);

 for (VAR_11 = 0; VAR_11 < VAR_1; VAR_11++) {
  FUNC_2();
  VAR_7 = VAR_6->ocontexts[VAR_11];
  while (VAR_7) {
   VAR_8 = VAR_7;
   VAR_7 = VAR_7->next;
   FUNC_8(VAR_8, VAR_11);
  }
  VAR_6->ocontexts[VAR_11] = ((void*)0);
 }

 VAR_9 = VAR_6->genfs;
 while (VAR_9) {
  FUNC_2();
  FUNC_6(VAR_9->fstype);
  VAR_7 = VAR_9->head;
  while (VAR_7) {
   VAR_8 = VAR_7;
   VAR_7 = VAR_7->next;
   FUNC_8(VAR_8, VAR_0);
  }
  VAR_10 = VAR_9;
  VAR_9 = VAR_9->next;
  FUNC_6(VAR_10);
 }
 VAR_6->genfs = ((void*)0);

 FUNC_1(VAR_6);

 for (VAR_14 = VAR_6->role_tr; VAR_14; VAR_14 = VAR_14->next) {
  FUNC_2();
  FUNC_6(VAR_15);
  VAR_15 = VAR_14;
 }
 FUNC_6(VAR_15);

 for (VAR_12 = VAR_6->role_allow; VAR_12; VAR_12 = VAR_12->next) {
  FUNC_2();
  FUNC_6(VAR_13);
  VAR_13 = VAR_12;
 }
 FUNC_6(VAR_13);

 FUNC_5(VAR_6->filename_trans, VAR_4, ((void*)0));
 FUNC_4(VAR_6->filename_trans);

 FUNC_5(VAR_6->range_tr, VAR_5, ((void*)0));
 FUNC_4(VAR_6->range_tr);

 if (VAR_6->type_attr_map_array) {
  for (VAR_11 = 0; VAR_11 < VAR_6->p_types.nprim; VAR_11++)
   FUNC_3(&VAR_6->type_attr_map_array[VAR_11]);
  FUNC_7(VAR_6->type_attr_map_array);
 }

 FUNC_3(&VAR_6->filename_trans_ttypes);
 FUNC_3(&VAR_6->policycaps);
 FUNC_3(&VAR_6->permissive_map);
}
