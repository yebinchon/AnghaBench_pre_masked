
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct stp_proto {int dummy; } ;
struct sk_buff {unsigned char* data; } ;
struct net_device {int dummy; } ;
struct net_bridge_port {scalar_t__ state; int flags; scalar_t__ port_no; struct net_bridge* br; TYPE_2__* dev; } ;
struct net_bridge {scalar_t__ stp_enabled; int lock; int group_addr; TYPE_1__* dev; } ;
struct TYPE_9__ {unsigned char* prio; unsigned char* addr; } ;
struct TYPE_8__ {unsigned char* prio; unsigned char* addr; } ;
struct br_config_bpdu {int topology_change; int topology_change_ack; unsigned char root_path_cost; unsigned char port_id; scalar_t__ message_age; scalar_t__ max_age; void* forward_delay; void* hello_time; TYPE_4__ bridge_id; TYPE_3__ root; } ;
struct TYPE_10__ {int h_source; int h_dest; } ;
struct TYPE_7__ {int name; } ;
struct TYPE_6__ {int flags; } ;


 unsigned char const VAR_0 ;
 unsigned char const VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 void* FUNC_0 (unsigned char const*) ;
 int FUNC_1 (struct net_bridge*,char*,unsigned int,int ,...) ;
 struct net_bridge_port* FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_bridge_port*,struct br_config_bpdu*) ;
 int FUNC_4 (struct net_bridge_port*) ;
 int FUNC_5 (struct net_bridge_port*) ;
 TYPE_5__* FUNC_6 (struct sk_buff*) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (struct sk_buff*) ;
 scalar_t__ FUNC_9 () ;
 int FUNC_10 (struct sk_buff*,int) ;
 unsigned char* FUNC_11 (struct sk_buff*,int) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;

void FUNC_14(const struct stp_proto *VAR_6, struct sk_buff *VAR_7,
  struct net_device *VAR_8)
{
 struct net_bridge_port *VAR_9;
 struct net_bridge *VAR_10;
 const unsigned char *VAR_11;

 if (!FUNC_10(VAR_7, 4))
  goto err;


 VAR_11 = VAR_7->data;
 if (VAR_11[0] != 0 || VAR_11[1] != 0 || VAR_11[2] != 0)
  goto err;

 VAR_9 = FUNC_2(VAR_8);
 if (!VAR_9)
  goto err;

 VAR_10 = VAR_9->br;
 FUNC_12(&VAR_10->lock);

 if (VAR_10->stp_enabled != VAR_3)
  goto out;

 if (!(VAR_10->dev->flags & VAR_5))
  goto out;

 if (VAR_9->state == VAR_4)
  goto out;

 if (!FUNC_7(FUNC_6(VAR_7)->h_dest, VAR_10->group_addr))
  goto out;

 if (VAR_9->flags & VAR_2) {
  FUNC_1(VAR_10, "BPDU received on blocked port %u(%s)\n",
     (unsigned int) VAR_9->port_no, VAR_9->dev->name);
  FUNC_5(VAR_9);
  goto out;
 }

 VAR_11 = FUNC_11(VAR_7, 3);

 if (VAR_11[0] == VAR_0) {
  struct br_config_bpdu VAR_12;

  if (!FUNC_10(VAR_7, 32))
   goto out;

  VAR_11 = VAR_7->data;
  VAR_12.topology_change = (VAR_11[1] & 0x01) ? 1 : 0;
  VAR_12.topology_change_ack = (VAR_11[1] & 0x80) ? 1 : 0;

  VAR_12.root.prio[0] = VAR_11[2];
  VAR_12.root.prio[1] = VAR_11[3];
  VAR_12.root.addr[0] = VAR_11[4];
  VAR_12.root.addr[1] = VAR_11[5];
  VAR_12.root.addr[2] = VAR_11[6];
  VAR_12.root.addr[3] = VAR_11[7];
  VAR_12.root.addr[4] = VAR_11[8];
  VAR_12.root.addr[5] = VAR_11[9];
  VAR_12.root_path_cost =
   (VAR_11[10] << 24) |
   (VAR_11[11] << 16) |
   (VAR_11[12] << 8) |
   VAR_11[13];
  VAR_12.bridge_id.prio[0] = VAR_11[14];
  VAR_12.bridge_id.prio[1] = VAR_11[15];
  VAR_12.bridge_id.addr[0] = VAR_11[16];
  VAR_12.bridge_id.addr[1] = VAR_11[17];
  VAR_12.bridge_id.addr[2] = VAR_11[18];
  VAR_12.bridge_id.addr[3] = VAR_11[19];
  VAR_12.bridge_id.addr[4] = VAR_11[20];
  VAR_12.bridge_id.addr[5] = VAR_11[21];
  VAR_12.port_id = (VAR_11[22] << 8) | VAR_11[23];

  VAR_12.message_age = FUNC_0(VAR_11+24);
  VAR_12.max_age = FUNC_0(VAR_11+26);
  VAR_12.hello_time = FUNC_0(VAR_11+28);
  VAR_12.forward_delay = FUNC_0(VAR_11+30);

  if (VAR_12.message_age > VAR_12.max_age) {
   if (FUNC_9())
    FUNC_1(VAR_9->br,
       "port %u config from %pM"
       " (message_age %ul > max_age %ul)\n",
       VAR_9->port_no,
       FUNC_6(VAR_7)->h_source,
       VAR_12.message_age, VAR_12.max_age);
   goto out;
  }

  FUNC_3(VAR_9, &VAR_12);
 } else if (VAR_11[0] == VAR_1) {
  FUNC_4(VAR_9);
 }
 out:
 FUNC_13(&VAR_10->lock);
 err:
 FUNC_8(VAR_7);
}
