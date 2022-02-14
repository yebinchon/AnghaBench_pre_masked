
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct table_instance {int dummy; } ;
struct flow_table {int ufid_ti; int ti; } ;


 struct table_instance* FUNC_0 (int ) ;
 int FUNC_1 (struct table_instance*,struct table_instance*,int) ;

void FUNC_2(struct flow_table *VAR_0)
{
 struct table_instance *VAR_1 = FUNC_0(VAR_0->ti);
 struct table_instance *VAR_2 = FUNC_0(VAR_0->ufid_ti);

 FUNC_1(VAR_1, VAR_2, 0);
}
