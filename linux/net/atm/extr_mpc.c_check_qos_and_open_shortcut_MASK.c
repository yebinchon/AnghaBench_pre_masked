
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_26__ TYPE_9__ ;
typedef struct TYPE_25__ TYPE_8__ ;
typedef struct TYPE_24__ TYPE_7__ ;
typedef struct TYPE_23__ TYPE_6__ ;
typedef struct TYPE_22__ TYPE_5__ ;
typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;
typedef struct TYPE_17__ TYPE_14__ ;
typedef struct TYPE_16__ TYPE_10__ ;


struct mpoa_client {TYPE_8__* dev; TYPE_6__* eg_ops; } ;
struct TYPE_24__ {int traffic_class; } ;
struct TYPE_17__ {TYPE_7__ txtp; } ;
struct TYPE_18__ {int in_dst_ip; } ;
struct TYPE_19__ {TYPE_1__ in_info; } ;
struct k_message {TYPE_14__ qos; int type; TYPE_2__ content; } ;
struct atm_qos {int dummy; } ;
struct atm_mpoa_qos {TYPE_14__ qos; } ;
struct TYPE_26__ {TYPE_5__* shortcut; } ;
typedef TYPE_9__ in_cache_entry ;
struct TYPE_16__ {TYPE_5__* shortcut; } ;
typedef TYPE_10__ eg_cache_entry ;
typedef int __be32 ;
struct TYPE_25__ {int name; } ;
struct TYPE_23__ {int (* put ) (TYPE_10__*) ;TYPE_10__* (* get_by_src_ip ) (int ,struct mpoa_client*) ;} ;
struct TYPE_20__ {int traffic_class; scalar_t__ max_pcr; } ;
struct TYPE_21__ {TYPE_3__ txtp; } ;
struct TYPE_22__ {TYPE_4__ qos; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct atm_mpoa_qos* FUNC_0 (int ) ;
 int FUNC_1 (char*,int ,int *) ;
 int FUNC_2 (TYPE_14__*,int ,int) ;
 int FUNC_3 (struct k_message*,struct mpoa_client*) ;
 int FUNC_4 (char*,int ) ;
 TYPE_10__* FUNC_5 (int ,struct mpoa_client*) ;
 int FUNC_6 (TYPE_10__*) ;
 int FUNC_7 (TYPE_10__*) ;

__attribute__((used)) static void FUNC_8(struct k_message *VAR_3,
     struct mpoa_client *VAR_4,
     in_cache_entry *VAR_5)
{
 __be32 VAR_6 = VAR_3->content.in_info.in_dst_ip;
 struct atm_mpoa_qos *VAR_7 = FUNC_0(VAR_6);
 eg_cache_entry *VAR_8 = VAR_4->eg_ops->get_by_src_ip(VAR_6, VAR_4);

 if (VAR_8 && VAR_8->shortcut) {
  if (VAR_8->shortcut->qos.txtp.traffic_class &
      VAR_3->qos.txtp.traffic_class &
      (VAR_7 ? VAR_7->qos.txtp.traffic_class : VAR_1 | VAR_0)) {
   if (VAR_8->shortcut->qos.txtp.traffic_class == VAR_1)
    VAR_5->shortcut = VAR_8->shortcut;
   else if (VAR_8->shortcut->qos.txtp.max_pcr > 0)
    VAR_5->shortcut = VAR_8->shortcut;
  }
  if (VAR_5->shortcut) {
   FUNC_1("(%s) using egress SVC to reach %pI4\n",
    VAR_4->dev->name, &VAR_6);
   VAR_4->eg_ops->put(VAR_8);
   return;
  }
 }
 if (VAR_8 != ((void*)0))
  VAR_4->eg_ops->put(VAR_8);


 VAR_3->type = VAR_2;
 if (VAR_7 &&
     (VAR_7->qos.txtp.traffic_class == VAR_3->qos.txtp.traffic_class)) {
  VAR_3->qos = VAR_7->qos;
  FUNC_4("(%s) trying to get a CBR shortcut\n",
   VAR_4->dev->name);
 } else
  FUNC_2(&VAR_3->qos, 0, sizeof(struct atm_qos));
 FUNC_3(VAR_3, VAR_4);
}
