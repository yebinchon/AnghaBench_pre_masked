
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dsa_switch {TYPE_1__* ops; } ;
struct dsa_port {int index; struct dsa_switch* ds; } ;
typedef int dsa_fdb_dump_cb_t ;
struct TYPE_2__ {int (* port_fdb_dump ) (struct dsa_switch*,int,int *,void*) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct dsa_switch*,int,int *,void*) ;

int FUNC_1(struct dsa_port *VAR_1, dsa_fdb_dump_cb_t *VAR_2, void *VAR_3)
{
 struct dsa_switch *VAR_4 = VAR_1->ds;
 int VAR_5 = VAR_1->index;

 if (!VAR_4->ops->port_fdb_dump)
  return -VAR_0;

 return VAR_4->ops->port_fdb_dump(VAR_4, VAR_5, VAR_2, VAR_3);
}
