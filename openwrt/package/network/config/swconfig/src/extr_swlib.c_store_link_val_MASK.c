
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct switch_port_link* link; } ;
struct switch_val {TYPE_1__ value; } ;
struct switch_port_link {int link; int duplex; int aneg; int tx_flow; int rx_flow; int eee; int speed; } ;
struct nlattr {int dummy; } ;
struct nl_msg {int dummy; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 struct switch_port_link* FUNC_0 (int) ;
 int FUNC_1 (struct nlattr*) ;
 int FUNC_2 (struct nlattr**,int ,struct nlattr*,int ) ;

__attribute__((used)) static int
FUNC_3(struct nl_msg *VAR_12, struct nlattr *VAR_13, struct switch_val *VAR_14)
{
 struct nlattr *VAR_15[VAR_0 + 1];
 struct switch_port_link *VAR_16;
 int VAR_17 = 0;

 if (!VAR_14->value.link)
  VAR_14->value.link = FUNC_0(sizeof(struct switch_port_link));

 VAR_17 = FUNC_2(VAR_15, VAR_0, VAR_13, VAR_11);
 if (VAR_17 < 0)
  goto out;

 VAR_16 = VAR_14->value.link;
 VAR_16->link = !!VAR_15[VAR_5];
 VAR_16->duplex = !!VAR_15[VAR_2];
 VAR_16->aneg = !!VAR_15[VAR_1];
 VAR_16->tx_flow = !!VAR_15[VAR_7];
 VAR_16->rx_flow = !!VAR_15[VAR_6];
 VAR_16->speed = FUNC_1(VAR_15[VAR_8]);
 VAR_16->eee = 0;
 if (VAR_15[VAR_4])
  VAR_16->eee |= VAR_10;
 if (VAR_15[VAR_3])
  VAR_16->eee |= VAR_9;

out:
 return VAR_17;
}
