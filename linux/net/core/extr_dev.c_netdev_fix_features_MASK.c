
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int gso_partial_features; } ;
typedef int netdev_features_t ;


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
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_0 (struct net_device*,char*) ;
 int FUNC_1 (struct net_device*,char*) ;

__attribute__((used)) static netdev_features_t FUNC_2(struct net_device *VAR_15,
 netdev_features_t VAR_16)
{

 if ((VAR_16 & VAR_4) &&
     (VAR_16 & (VAR_6|VAR_5))) {
  FUNC_1(VAR_15, "mixed HW and IP checksum settings.\n");
  VAR_16 &= ~(VAR_6|VAR_5);
 }


 if ((VAR_16 & VAR_0) && !(VAR_16 & VAR_10)) {
  FUNC_0(VAR_15, "Dropping TSO features since no SG feature.\n");
  VAR_16 &= ~VAR_0;
 }

 if ((VAR_16 & VAR_11) && !(VAR_16 & VAR_4) &&
     !(VAR_16 & VAR_6)) {
  FUNC_0(VAR_15, "Dropping TSO features since no CSUM feature.\n");
  VAR_16 &= ~VAR_11;
  VAR_16 &= ~VAR_13;
 }

 if ((VAR_16 & VAR_12) && !(VAR_16 & VAR_4) &&
      !(VAR_16 & VAR_5)) {
  FUNC_0(VAR_15, "Dropping TSO6 features since no CSUM feature.\n");
  VAR_16 &= ~VAR_12;
 }


 if ((VAR_16 & VAR_14) && !(VAR_16 & VAR_11))
  VAR_16 &= ~VAR_14;


 if ((VAR_16 & VAR_0) == VAR_13)
  VAR_16 &= ~VAR_13;


 if ((VAR_16 & VAR_2) && !(VAR_16 & VAR_10)) {
  FUNC_0(VAR_15, "Dropping NETIF_F_GSO since no SG feature.\n");
  VAR_16 &= ~VAR_2;
 }


 if ((VAR_16 & VAR_15->gso_partial_features) &&
     !(VAR_16 & VAR_3)) {
  FUNC_0(VAR_15,
      "Dropping partially supported GSO features since no GSO partial.\n");
  VAR_16 &= ~VAR_15->gso_partial_features;
 }

 if (!(VAR_16 & VAR_8)) {





  if (VAR_16 & VAR_1) {
   FUNC_0(VAR_15, "Dropping NETIF_F_GRO_HW since no RXCSUM feature.\n");
   VAR_16 &= ~VAR_1;
  }
 }


 if (VAR_16 & VAR_9) {
  if (VAR_16 & VAR_7) {
   FUNC_0(VAR_15, "Dropping LRO feature since RX-FCS is requested.\n");
   VAR_16 &= ~VAR_7;
  }

  if (VAR_16 & VAR_1) {
   FUNC_0(VAR_15, "Dropping HW-GRO feature since RX-FCS is requested.\n");
   VAR_16 &= ~VAR_1;
  }
 }

 return VAR_16;
}
