
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct switch_dev {int ports; int vlans; } ;
struct mvsw61xx_state {int mirror_rx; int source_port; int monitor_port; int mirror_tx; TYPE_1__* ports; scalar_t__ vlan_enabled; int registered; } ;
struct TYPE_2__ {int mask; int qmode; int pvid; int fdb; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_2 (int ,int) ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 struct mvsw61xx_state* FUNC_3 (struct switch_dev*) ;
 int FUNC_4 (struct switch_dev*,int) ;
 int FUNC_5 (struct switch_dev*) ;
 int FUNC_6 (struct switch_dev*,int ) ;
 int FUNC_7 (struct switch_dev*,int ,int) ;

__attribute__((used)) static int FUNC_8(struct switch_dev *VAR_23)
{
 struct mvsw61xx_state *VAR_24 = FUNC_3(VAR_23);
 int VAR_25;
 u16 VAR_26;

 if (!VAR_24->registered)
  return -VAR_2;
 VAR_26 = FUNC_6(VAR_23, FUNC_0(VAR_20));

 if (VAR_24->vlan_enabled)
  VAR_26 |= VAR_7;
 else
  VAR_26 &= ~VAR_7;

 FUNC_7(VAR_23, FUNC_0(VAR_20), VAR_26);
 for (VAR_25 = 0; VAR_25 < VAR_23->ports; VAR_25++) {
  VAR_24->ports[VAR_25].mask = 0;
  VAR_24->ports[VAR_25].qmode = VAR_4;
 }

 for (VAR_25 = 0; VAR_25 < VAR_23->vlans; VAR_25++)
  FUNC_4(VAR_23, VAR_25);

 for (VAR_25 = 0; VAR_25 < VAR_23->ports; VAR_25++) {
  VAR_26 = FUNC_6(VAR_23, FUNC_2(VAR_21, VAR_25)) & ~VAR_19;
  VAR_26 |= VAR_24->ports[VAR_25].pvid;
  FUNC_7(VAR_23, FUNC_2(VAR_21, VAR_25), VAR_26);

  VAR_24->ports[VAR_25].mask &= ~(1 << VAR_25);


  VAR_26 = FUNC_6(VAR_23, FUNC_2(VAR_0, VAR_25)) & ~VAR_8;
  VAR_26 |= (VAR_24->ports[VAR_25].fdb >> VAR_9) &
   VAR_8;
  FUNC_7(VAR_23, FUNC_2(VAR_0, VAR_25), VAR_26);

  VAR_26 = ((VAR_24->ports[VAR_25].fdb & 0xf) << VAR_10) |
   VAR_24->ports[VAR_25].mask;
  FUNC_7(VAR_23, FUNC_2(VAR_22, VAR_25), VAR_26);

  VAR_26 = FUNC_6(VAR_23, FUNC_2(VAR_1, VAR_25)) &
   ~VAR_5;
  VAR_26 |= VAR_24->ports[VAR_25].qmode << VAR_6;
  FUNC_7(VAR_23, FUNC_2(VAR_1, VAR_25), VAR_26);
 }

 FUNC_5(VAR_23);



 for (VAR_25 = 0; VAR_25 < VAR_23->ports; VAR_25++) {
  VAR_26 = FUNC_6(VAR_23, FUNC_2(VAR_1, VAR_25));
  VAR_26 &= ~(VAR_13 | VAR_17);
  FUNC_7(VAR_23, FUNC_2(VAR_1, VAR_25), VAR_26);
 }
 VAR_26 = FUNC_6(VAR_23, FUNC_1(VAR_3));
 VAR_26 |= VAR_11 | VAR_15;
 FUNC_7(VAR_23, FUNC_1(VAR_3), VAR_26);


 if (VAR_24->mirror_rx) {

  VAR_26 = FUNC_6(VAR_23, FUNC_2(VAR_1, VAR_24->source_port)) & ~VAR_13;
  VAR_26 |= VAR_24->mirror_rx << VAR_14;
  FUNC_7(VAR_23, FUNC_2(VAR_1, VAR_24->source_port), VAR_26);

  VAR_26 = FUNC_6(VAR_23, FUNC_1(VAR_3)) & ~VAR_11;
  VAR_26 |= VAR_24->monitor_port << VAR_12;
  FUNC_7(VAR_23, FUNC_1(VAR_3), VAR_26);
 }

 if (VAR_24->mirror_tx) {

  VAR_26 = FUNC_6(VAR_23, FUNC_2(VAR_1, VAR_24->source_port)) & ~VAR_17;
  VAR_26 |= VAR_24->mirror_tx << VAR_18;
  FUNC_7(VAR_23, FUNC_2(VAR_1, VAR_24->source_port), VAR_26);

  VAR_26 = FUNC_6(VAR_23, FUNC_1(VAR_3)) & ~VAR_15;
  VAR_26 |= VAR_24->monitor_port << VAR_16;
  FUNC_7(VAR_23, FUNC_1(VAR_3), VAR_26);
 }

 return 0;
}
