
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct net_device {int name; } ;
struct mpoa_client {TYPE_4__* eg_ops; TYPE_3__* dev; TYPE_2__* in_ops; } ;
struct atm_vcc {int dummy; } ;
struct TYPE_11__ {int in_dst_ip; } ;
struct TYPE_15__ {int * shortcut; TYPE_1__ ctrl_info; } ;
typedef TYPE_5__ in_cache_entry ;
struct TYPE_16__ {int * shortcut; } ;
typedef TYPE_6__ eg_cache_entry ;
struct TYPE_14__ {int (* put ) (TYPE_6__*) ;TYPE_6__* (* get_by_vcc ) (struct atm_vcc*,struct mpoa_client*) ;} ;
struct TYPE_13__ {int name; } ;
struct TYPE_12__ {int (* put ) (TYPE_5__*) ;TYPE_5__* (* get_by_vcc ) (struct atm_vcc*,struct mpoa_client*) ;} ;


 int FUNC_0 (char*,int ,...) ;
 struct mpoa_client* FUNC_1 (struct net_device*) ;
 int FUNC_2 (char*,int ) ;
 TYPE_5__* FUNC_3 (struct atm_vcc*,struct mpoa_client*) ;
 int FUNC_4 (TYPE_5__*) ;
 TYPE_6__* FUNC_5 (struct atm_vcc*,struct mpoa_client*) ;
 int FUNC_6 (TYPE_6__*) ;

__attribute__((used)) static void FUNC_7(struct atm_vcc *VAR_0, struct net_device *VAR_1)
{
 struct mpoa_client *VAR_2;
 in_cache_entry *VAR_3;
 eg_cache_entry *VAR_4;

 VAR_2 = FUNC_1(VAR_1);
 if (VAR_2 == ((void*)0)) {
  FUNC_2("(%s) close for unknown MPC\n", VAR_1->name);
  return;
 }

 FUNC_0("(%s)\n", VAR_1->name);
 VAR_3 = VAR_2->in_ops->get_by_vcc(VAR_0, VAR_2);
 if (VAR_3) {
  FUNC_0("(%s) ingress SVC closed ip = %pI4\n",
   VAR_2->dev->name, &VAR_3->ctrl_info.in_dst_ip);
  VAR_3->shortcut = ((void*)0);
  VAR_2->in_ops->put(VAR_3);
 }
 VAR_4 = VAR_2->eg_ops->get_by_vcc(VAR_0, VAR_2);
 if (VAR_4) {
  FUNC_0("(%s) egress SVC closed\n", VAR_2->dev->name);
  VAR_4->shortcut = ((void*)0);
  VAR_2->eg_ops->put(VAR_4);
 }

 if (VAR_3 == ((void*)0) && VAR_4 == ((void*)0))
  FUNC_0("(%s) unused vcc closed\n", VAR_1->name);
}
