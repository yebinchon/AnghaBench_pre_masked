
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {char* s; } ;
struct switch_val {int len; TYPE_2__ value; int port_vlan; } ;
struct switch_dev {int dummy; } ;
struct switch_attr {int dummy; } ;
struct rtl8366_vlan_4k {int vid; int member; int untag; int fid; } ;
struct rtl8366_smi {char* buf; int num_ports; TYPE_1__* ops; } ;
struct TYPE_3__ {int (* get_vlan_4k ) (struct rtl8366_smi*,int ,struct rtl8366_vlan_4k*) ;int (* is_vlan_valid ) (struct rtl8366_smi*,int ) ;} ;


 int VAR_0 ;
 int FUNC_0 (char*,char,int) ;
 int FUNC_1 (char*,int,char*,int,...) ;
 int FUNC_2 (struct rtl8366_smi*,int ) ;
 int FUNC_3 (struct rtl8366_smi*,int ,struct rtl8366_vlan_4k*) ;
 struct rtl8366_smi* FUNC_4 (struct switch_dev*) ;

int FUNC_5(struct switch_dev *VAR_1,
        const struct switch_attr *VAR_2,
        struct switch_val *VAR_3)
{
 int VAR_4;
 u32 VAR_5 = 0;
 struct rtl8366_vlan_4k VAR_6;
 struct rtl8366_smi *VAR_7 = FUNC_4(VAR_1);
 char *VAR_8 = VAR_7->buf;
 int VAR_9;

 if (!VAR_7->ops->is_vlan_valid(VAR_7, VAR_3->port_vlan))
  return -VAR_0;

 FUNC_0(VAR_8, '\0', sizeof(VAR_7->buf));

 VAR_9 = VAR_7->ops->get_vlan_4k(VAR_7, VAR_3->port_vlan, &VAR_6);
 if (VAR_9)
  return VAR_9;

 VAR_5 += FUNC_1(VAR_8 + VAR_5, sizeof(VAR_7->buf) - VAR_5,
   "VLAN %d: Ports: '", VAR_6.vid);

 for (VAR_4 = 0; VAR_4 < VAR_7->num_ports; VAR_4++) {
  if (!(VAR_6.member & (1 << VAR_4)))
   continue;

  VAR_5 += FUNC_1(VAR_8 + VAR_5, sizeof(VAR_7->buf) - VAR_5, "%d%s", VAR_4,
    (VAR_6.untag & (1 << VAR_4)) ? "" : "t");
 }

 VAR_5 += FUNC_1(VAR_8 + VAR_5, sizeof(VAR_7->buf) - VAR_5,
   "', members=%04x, untag=%04x, fid=%u",
   VAR_6.member, VAR_6.untag, VAR_6.fid);

 VAR_3->value.s = VAR_8;
 VAR_3->len = VAR_5;

 return 0;
}
