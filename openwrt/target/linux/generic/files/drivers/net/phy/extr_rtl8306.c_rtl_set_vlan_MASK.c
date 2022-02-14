
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int i; } ;
struct switch_val {int port_vlan; TYPE_1__ value; } ;
struct switch_dev {int cpu_port; } ;
struct switch_attr {int dummy; } ;
struct rtl_priv {scalar_t__ do_cpu; } ;
struct rtl_phyregs {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (struct switch_dev*,int ,struct rtl_phyregs*) ;
 int FUNC_2 (struct switch_dev*,int ,struct rtl_phyregs*) ;
 int FUNC_3 (struct switch_dev*,int ,int) ;
 struct rtl_priv* FUNC_4 (struct switch_dev*) ;

__attribute__((used)) static int
FUNC_5(struct switch_dev *VAR_10, const struct switch_attr *VAR_11, struct switch_val *VAR_12)
{
 struct rtl_priv *VAR_13 = FUNC_4(VAR_10);
 struct rtl_phyregs VAR_14;
 int VAR_15 = VAR_12->value.i;
 int VAR_16;

 FUNC_3(VAR_10, VAR_4, VAR_15 && VAR_13->do_cpu);
 FUNC_3(VAR_10, VAR_3, VAR_15 && VAR_13->do_cpu);
 FUNC_3(VAR_10, VAR_2, VAR_15 && VAR_13->do_cpu);
 FUNC_3(VAR_10, VAR_7, VAR_15);
 if (VAR_15)
  FUNC_3(VAR_10, VAR_6, VAR_15);

 for (VAR_16 = 0; VAR_16 < VAR_1; VAR_16++) {
  if (VAR_16 > 3)
   FUNC_2(VAR_10, VAR_12->port_vlan, &VAR_14);
  FUNC_3(VAR_10, FUNC_0(VAR_16, VAR_0), 1);
  FUNC_3(VAR_10, FUNC_0(VAR_16, VAR_9), (VAR_15 ? (VAR_16 == VAR_10->cpu_port ? 0 : 1) : 1));
  FUNC_3(VAR_10, FUNC_0(VAR_16, VAR_8), (VAR_15 ? (VAR_16 == VAR_10->cpu_port ? 2 : 1) : 3));
  if (VAR_16 > 3)
   FUNC_1(VAR_10, VAR_12->port_vlan, &VAR_14);
 }
 FUNC_3(VAR_10, VAR_5, VAR_15);

 return 0;
}
