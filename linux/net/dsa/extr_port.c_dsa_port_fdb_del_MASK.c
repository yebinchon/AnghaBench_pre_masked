
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct dsa_port {int index; TYPE_1__* ds; } ;
struct dsa_notifier_fdb_info {unsigned char const* addr; int vid; int port; int sw_index; } ;
struct TYPE_2__ {int index; } ;


 int VAR_0 ;
 int FUNC_0 (struct dsa_port*,int ,struct dsa_notifier_fdb_info*) ;

int FUNC_1(struct dsa_port *VAR_1, const unsigned char *VAR_2,
       u16 VAR_3)
{
 struct dsa_notifier_fdb_info VAR_4 = {
  .sw_index = VAR_1->ds->index,
  .port = VAR_1->index,
  .addr = VAR_2,
  .vid = VAR_3,

 };

 return FUNC_0(VAR_1, VAR_0, &VAR_4);
}
