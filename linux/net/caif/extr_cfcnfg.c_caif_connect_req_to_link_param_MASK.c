
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_9__ ;
typedef struct TYPE_23__ TYPE_8__ ;
typedef struct TYPE_22__ TYPE_7__ ;
typedef struct TYPE_21__ TYPE_6__ ;
typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;
typedef struct TYPE_15__ TYPE_12__ ;
typedef struct TYPE_14__ TYPE_11__ ;
typedef struct TYPE_13__ TYPE_10__ ;


struct dev_info {int id; } ;
struct TYPE_23__ {int paramlen; int params; int name; } ;
struct TYPE_19__ {int volume; } ;
struct TYPE_18__ {int connid; } ;
struct TYPE_24__ {TYPE_8__ utility; TYPE_4__ rfm; TYPE_3__ datagram; } ;
struct cfctrl_link_param {int phyid; int endpoint; int chtype; void* linktype; TYPE_9__ u; scalar_t__ priority; } ;
struct cfcnfg {int dummy; } ;
struct TYPE_13__ {int service; int type; } ;
struct TYPE_21__ {int service; } ;
struct TYPE_20__ {int volume; int connection_id; } ;
struct TYPE_17__ {int connection_id; } ;
struct TYPE_16__ {int type; } ;
struct TYPE_14__ {TYPE_10__ dbg; TYPE_6__ util; TYPE_5__ rfm; TYPE_2__ dgm; TYPE_1__ at; } ;
struct TYPE_15__ {TYPE_11__ u; } ;
struct TYPE_22__ {int size; int data; } ;
struct caif_connect_request {scalar_t__ ifindex; int link_selector; int protocol; TYPE_12__ sockaddr; TYPE_7__ param; scalar_t__ priority; } ;
typedef enum cfcnfg_phy_preference { ____Placeholder_cfcnfg_phy_preference } cfcnfg_phy_preference ;
 scalar_t__ VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct cfcnfg*,scalar_t__) ;
 struct dev_info* FUNC_2 (struct cfcnfg*,int) ;
 int FUNC_3 (int ,int ,int) ;
 int FUNC_4 (struct cfctrl_link_param*,int ,int) ;
 int FUNC_5 (int ,int ,int) ;

__attribute__((used)) static int FUNC_6(struct cfcnfg *VAR_10,
       struct caif_connect_request *VAR_11,
       struct cfctrl_link_param *VAR_12)
{
 struct dev_info *VAR_13;
 enum cfcnfg_phy_preference VAR_14;
 int VAR_15;

 FUNC_4(VAR_12, 0, sizeof(*VAR_12));

 VAR_12->priority = VAR_0 - VAR_11->priority + 1;

 if (VAR_11->ifindex != 0) {
  VAR_15 = FUNC_1(VAR_10, VAR_11->ifindex);
  if (VAR_15 < 0)
   return VAR_15;
  VAR_12->phyid = VAR_15;
 } else {
  switch (VAR_11->link_selector) {
  case 129:
   VAR_14 = VAR_6;
   break;
  case 128:
   VAR_14 = VAR_7;
   break;
  default:
   return -VAR_8;
  }
  VAR_13 = FUNC_2(VAR_10, VAR_14);
  if (VAR_13 == ((void*)0))
   return -VAR_9;
  VAR_12->phyid = VAR_13->id;
 }
 switch (VAR_11->protocol) {
 case 135:
  VAR_12->linktype = VAR_5;
  VAR_12->endpoint = (VAR_11->sockaddr.u.at.type >> 2) & 0x3;
  VAR_12->chtype = VAR_11->sockaddr.u.at.type & 0x3;
  break;
 case 134:
  VAR_12->linktype = VAR_1;
  VAR_12->chtype = 0x00;
  VAR_12->u.datagram.connid = VAR_11->sockaddr.u.dgm.connection_id;
  break;
 case 133:
  VAR_12->linktype = VAR_1;
  VAR_12->chtype = 0x03;
  VAR_12->endpoint = 0x00;
  VAR_12->u.datagram.connid = VAR_11->sockaddr.u.dgm.connection_id;
  break;
 case 131:
  VAR_12->linktype = VAR_3;
  VAR_12->u.datagram.connid = VAR_11->sockaddr.u.rfm.connection_id;
  FUNC_5(VAR_12->u.rfm.volume, VAR_11->sockaddr.u.rfm.volume,
   sizeof(VAR_12->u.rfm.volume));
  break;
 case 130:
  VAR_12->linktype = VAR_4;
  VAR_12->endpoint = 0x00;
  VAR_12->chtype = 0x00;
  FUNC_5(VAR_12->u.utility.name, VAR_11->sockaddr.u.util.service,
   sizeof(VAR_12->u.utility.name));
  FUNC_0(sizeof(VAR_12->u.utility.name) > 10);
  VAR_12->u.utility.paramlen = VAR_11->param.size;
  if (VAR_12->u.utility.paramlen > sizeof(VAR_12->u.utility.params))
   VAR_12->u.utility.paramlen = sizeof(VAR_12->u.utility.params);

  FUNC_3(VAR_12->u.utility.params, VAR_11->param.data,
         VAR_12->u.utility.paramlen);

  break;
 case 132:
  VAR_12->linktype = VAR_2;
  VAR_12->endpoint = VAR_11->sockaddr.u.dbg.service;
  VAR_12->chtype = VAR_11->sockaddr.u.dbg.type;
  break;
 default:
  return -VAR_8;
 }
 return 0;
}
