
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net {int dummy; } ;
struct ebt_table_info {int nentries; int entries_size; struct ebt_table_info* entries; int counters; int * chainstack; } ;
struct ebt_table {int (* check ) (struct ebt_table_info*,int ) ;int lock; struct ebt_table_info* private; int me; } ;
struct ebt_replace {int num_counters; int nentries; int name; int counters; int valid_hooks; } ;
struct ebt_counter {int nentries; int entries_size; struct ebt_counter* entries; int counters; int * chainstack; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ebt_table_info*,int ,int ,struct net*,int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 () ;
 scalar_t__ VAR_6 ;
 int FUNC_2 (int ,int ,int ,char*,int ,int ,int ) ;
 scalar_t__ FUNC_3 (int ,struct ebt_table_info*,int) ;
 int VAR_7 ;
 int FUNC_4 (struct ebt_table_info*) ;
 int VAR_8 ;
 int FUNC_5 (struct ebt_replace*,struct ebt_table_info*) ;
 struct ebt_table* FUNC_6 (struct net*,int ,int*,int *) ;
 int FUNC_7 (int ,struct ebt_table_info*,int) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (char*) ;
 int FUNC_11 (struct ebt_table_info*,int ) ;
 int FUNC_12 (struct net*,int ,struct ebt_table_info*) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (struct ebt_table_info*) ;
 struct ebt_table_info* FUNC_15 (unsigned long) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (int *) ;

__attribute__((used)) static int FUNC_18(struct net *VAR_9, struct ebt_replace *VAR_10,
         struct ebt_table_info *VAR_11)
{
 int VAR_12;
 struct ebt_counter *VAR_13 = ((void*)0);

 struct ebt_table_info *VAR_14;
 struct ebt_table *VAR_15;




 if (VAR_10->num_counters) {
  unsigned long VAR_16 = VAR_10->num_counters * sizeof(*VAR_13);
  VAR_13 = FUNC_15(VAR_16);
  if (!VAR_13)
   return -VAR_4;
 }

 VAR_11->chainstack = ((void*)0);
 VAR_12 = FUNC_5(VAR_10, VAR_11);
 if (VAR_12 != 0)
  goto free_counterstmp;

 VAR_12 = FUNC_12(VAR_9, VAR_10->name, VAR_11);

 if (VAR_12 != 0)
  goto free_counterstmp;

 VAR_15 = FUNC_6(VAR_9, VAR_10->name, &VAR_12, &VAR_8);
 if (!VAR_15) {
  VAR_12 = -VAR_3;
  goto free_iterate;
 }


 if (VAR_15->check && (VAR_12 = VAR_15->check(VAR_11, VAR_10->valid_hooks)))
  goto free_unlock;

 if (VAR_10->num_counters && VAR_10->num_counters != VAR_15->private->nentries) {
  VAR_12 = -VAR_2;
  goto free_unlock;
 }


 VAR_14 = VAR_15->private;

 if (!VAR_14->nentries && VAR_11->nentries && !FUNC_13(VAR_15->me)) {
  VAR_12 = -VAR_3;
  goto free_unlock;
 } else if (VAR_14->nentries && !VAR_11->nentries)
  FUNC_8(VAR_15->me);

 FUNC_16(&VAR_15->lock);
 if (VAR_10->num_counters)
  FUNC_7(VAR_15->private->counters, VAR_13,
     VAR_15->private->nentries);

 VAR_15->private = VAR_11;
 FUNC_17(&VAR_15->lock);
 FUNC_9(&VAR_8);





 if (VAR_10->num_counters &&
    FUNC_3(VAR_10->counters, VAR_13,
    VAR_10->num_counters * sizeof(struct ebt_counter))) {

  FUNC_10("ebtables: counters copy to user failed while replacing table\n");
 }


 FUNC_0(VAR_14->entries, VAR_14->entries_size,
     VAR_7, VAR_9, ((void*)0));

 FUNC_14(VAR_14->entries);
 FUNC_4(VAR_14);
 FUNC_14(VAR_14);
 FUNC_14(VAR_13);
 return VAR_12;

free_unlock:
 FUNC_9(&VAR_8);
free_iterate:
 FUNC_0(VAR_11->entries, VAR_11->entries_size,
     VAR_7, VAR_9, ((void*)0));
free_counterstmp:
 FUNC_14(VAR_13);

 FUNC_4(VAR_11);
 return VAR_12;
}
