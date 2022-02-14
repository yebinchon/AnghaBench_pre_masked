
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct switch_port_link {int aneg; int link; int duplex; int tx_flow; int rx_flow; int speed; int eee; } ;
struct ar8xxx_priv {int (* get_port_link ) (int) ;TYPE_1__* chip; } ;
struct TYPE_2__ {int (* read_port_status ) (struct ar8xxx_priv*,int) ;int (* read_port_eee_status ) (struct ar8xxx_priv*,int) ;} ;





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
 int FUNC_0 (struct switch_port_link*,char,int) ;
 int FUNC_1 (struct ar8xxx_priv*,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct ar8xxx_priv*,int) ;

__attribute__((used)) static void
FUNC_4(struct ar8xxx_priv *VAR_11, int VAR_12,
        struct switch_port_link *VAR_13)
{
 u32 VAR_14;
 u32 VAR_15;

 FUNC_0(VAR_13, '\0', sizeof(*VAR_13));

 VAR_14 = VAR_11->chip->read_port_status(VAR_11, VAR_12);

 VAR_13->aneg = !!(VAR_14 & VAR_1);
 if (VAR_13->aneg) {
  VAR_13->link = !!(VAR_14 & VAR_2);
 } else {
  VAR_13->link = 1;

  if (VAR_11->get_port_link) {
   int VAR_16;

   VAR_16 = VAR_11->get_port_link(VAR_12);
   if (VAR_16 >= 0)
    VAR_13->link = !!VAR_16;
  }
 }

 if (!VAR_13->link)
  return;

 VAR_13->duplex = !!(VAR_14 & VAR_0);
 VAR_13->tx_flow = !!(VAR_14 & VAR_6);
 VAR_13->rx_flow = !!(VAR_14 & VAR_3);

 if (VAR_13->aneg && VAR_13->duplex && VAR_11->chip->read_port_eee_status)
  VAR_13->eee = VAR_11->chip->read_port_eee_status(VAR_11, VAR_12);

 VAR_15 = (VAR_14 & VAR_4) >>
   VAR_5;

 switch (VAR_15) {
 case 128:
  VAR_13->speed = VAR_7;
  break;
 case 129:
  VAR_13->speed = VAR_8;
  break;
 case 130:
  VAR_13->speed = VAR_9;
  break;
 default:
  VAR_13->speed = VAR_10;
  break;
 }
}
