
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct table_instance {int dummy; } ;
struct flow_table {scalar_t__ ufid_count; scalar_t__ count; int last_rehash; int mask_list; int ufid_ti; int ti; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;
 int FUNC_1 (struct table_instance*) ;
 int VAR_2 ;
 int FUNC_2 (int ,struct table_instance*) ;
 struct table_instance* FUNC_3 (int ) ;

int FUNC_4(struct flow_table *VAR_3)
{
 struct table_instance *VAR_4, *VAR_5;

 VAR_4 = FUNC_3(VAR_1);

 if (!VAR_4)
  return -VAR_0;

 VAR_5 = FUNC_3(VAR_1);
 if (!VAR_5)
  goto free_ti;

 FUNC_2(VAR_3->ti, VAR_4);
 FUNC_2(VAR_3->ufid_ti, VAR_5);
 FUNC_0(&VAR_3->mask_list);
 VAR_3->last_rehash = VAR_2;
 VAR_3->count = 0;
 VAR_3->ufid_count = 0;
 return 0;

free_ti:
 FUNC_1(VAR_4);
 return -VAR_0;
}
