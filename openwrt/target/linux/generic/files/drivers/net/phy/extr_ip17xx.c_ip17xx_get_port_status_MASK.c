
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {char* s; } ;
struct switch_val {int port_vlan; TYPE_2__ value; } ;
struct switch_dev {int ports; } ;
struct switch_attr {int dummy; } ;
struct ip17xx_state {char* buf; TYPE_1__* regs; } ;
struct TYPE_3__ {int CPU_PORT; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct ip17xx_state* FUNC_0 (struct switch_dev*) ;
 int FUNC_1 (struct ip17xx_state*,int,int) ;
 int FUNC_2 (char*,char*,...) ;

__attribute__((used)) static int FUNC_3(struct switch_dev *VAR_2, const struct switch_attr *VAR_3, struct switch_val *VAR_4)
{
 struct ip17xx_state *VAR_5 = FUNC_0(VAR_2);
 int VAR_6, VAR_7, VAR_8;
 int VAR_9 = VAR_4->port_vlan;
 int VAR_10;
 char *VAR_11 = VAR_5->buf;

 if (VAR_9 == VAR_5->regs->CPU_PORT) {
  FUNC_2(VAR_11, "up, 100 Mbps, cpu port");
  VAR_4->value.s = VAR_11;
  return 0;
 }

 if (VAR_9 >= VAR_2->ports || VAR_9 < 0)
  return -VAR_0;

 VAR_6 = FUNC_1(VAR_5, VAR_9, 0);
 VAR_8 = FUNC_1(VAR_5, VAR_9, 1);
 VAR_7 = FUNC_1(VAR_5, VAR_9, 18);
 if (VAR_6 < 0 || VAR_8 < 0 || VAR_7 < 0)
  return -VAR_1;

 if (VAR_8 & 4)
  VAR_10 = FUNC_2(VAR_11, "up, %d Mbps, %s duplex",
   ((VAR_7 & (1<<11)) ? 100 : 10),
   ((VAR_7 & (1<<10)) ? "full" : "half"));
 else
  VAR_10 = FUNC_2(VAR_11, "down");

 if (VAR_6 & (1<<12)) {
  VAR_10 += FUNC_2(VAR_11+VAR_10, ", auto-negotiate");
  if (!(VAR_8 & (1<<5)))
   VAR_10 += FUNC_2(VAR_11+VAR_10, " (in progress)");
 } else {
  VAR_10 += FUNC_2(VAR_11+VAR_10, ", fixed speed (%d)",
   ((VAR_6 & (1<<13)) ? 100 : 10));
 }

 VAR_11[VAR_10] = '\0';
 VAR_4->value.s = VAR_11;
 return 0;
}
