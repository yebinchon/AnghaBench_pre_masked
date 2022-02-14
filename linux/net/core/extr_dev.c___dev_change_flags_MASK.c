
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct netlink_ext_ack {int dummy; } ;
struct net_device {unsigned int flags; unsigned int gflags; } ;


 int FUNC_0 () ;
 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 unsigned int VAR_10 ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*,struct netlink_ext_ack*) ;
 int FUNC_3 (struct net_device*,int,int) ;
 scalar_t__ FUNC_4 (struct net_device*,int,int) ;
 int FUNC_5 (struct net_device*,unsigned int) ;
 int FUNC_6 (struct net_device*) ;

int FUNC_7(struct net_device *VAR_11, unsigned int VAR_12,
         struct netlink_ext_ack *VAR_13)
{
 unsigned int VAR_14 = VAR_11->flags;
 int VAR_15;

 FUNC_0();





 VAR_11->flags = (VAR_12 & (VAR_2 | VAR_6 | VAR_5 |
          VAR_3 | VAR_4 | VAR_7 |
          VAR_1)) |
       (VAR_11->flags & (VAR_9 | VAR_10 | VAR_8 |
        VAR_0));





 if ((VAR_14 ^ VAR_12) & VAR_4)
  FUNC_5(VAR_11, VAR_4);

 FUNC_6(VAR_11);







 VAR_15 = 0;
 if ((VAR_14 ^ VAR_12) & VAR_9) {
  if (VAR_14 & VAR_9)
   FUNC_1(VAR_11);
  else
   VAR_15 = FUNC_2(VAR_11, VAR_13);
 }

 if ((VAR_12 ^ VAR_11->gflags) & VAR_8) {
  int VAR_16 = (VAR_12 & VAR_8) ? 1 : -1;
  unsigned int VAR_17 = VAR_11->flags;

  VAR_11->gflags ^= VAR_8;

  if (FUNC_4(VAR_11, VAR_16, 0) >= 0)
   if (VAR_11->flags != VAR_17)
    FUNC_6(VAR_11);
 }





 if ((VAR_12 ^ VAR_11->gflags) & VAR_0) {
  int VAR_18 = (VAR_12 & VAR_0) ? 1 : -1;

  VAR_11->gflags ^= VAR_0;
  FUNC_3(VAR_11, VAR_18, 0);
 }

 return VAR_15;
}
