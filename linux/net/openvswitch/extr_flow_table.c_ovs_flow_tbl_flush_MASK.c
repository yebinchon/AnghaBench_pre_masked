
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct table_instance {int dummy; } ;
struct flow_table {scalar_t__ ufid_count; scalar_t__ count; int last_rehash; int ufid_ti; int ti; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct table_instance*) ;
 int VAR_2 ;
 struct table_instance* FUNC_1 (int ) ;
 int FUNC_2 (int ,struct table_instance*) ;
 struct table_instance* FUNC_3 (int ) ;
 int FUNC_4 (struct table_instance*,struct table_instance*,int) ;

int FUNC_5(struct flow_table *VAR_3)
{
 struct table_instance *VAR_4, *VAR_5;
 struct table_instance *VAR_6, *VAR_7;

 VAR_5 = FUNC_3(VAR_1);
 if (!VAR_5)
  return -VAR_0;
 VAR_7 = FUNC_3(VAR_1);
 if (!VAR_7)
  goto err_free_ti;

 VAR_4 = FUNC_1(VAR_3->ti);
 VAR_6 = FUNC_1(VAR_3->ufid_ti);

 FUNC_2(VAR_3->ti, VAR_5);
 FUNC_2(VAR_3->ufid_ti, VAR_7);
 VAR_3->last_rehash = VAR_2;
 VAR_3->count = 0;
 VAR_3->ufid_count = 0;

 FUNC_4(VAR_4, VAR_6, 1);
 return 0;

err_free_ti:
 FUNC_0(VAR_5);
 return -VAR_0;
}
