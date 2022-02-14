
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {scalar_t__ type; } ;
struct TYPE_2__ {scalar_t__ addr_gen_mode; } ;
struct inet6_dev {TYPE_1__ cnf; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_0 () ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ FUNC_1 (struct inet6_dev*) ;
 struct inet6_dev* FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct inet6_dev*,int) ;

__attribute__((used)) static void FUNC_4(struct net_device *VAR_14)
{
 struct inet6_dev *VAR_15;

 FUNC_0();

 if ((VAR_14->type != VAR_2) &&
     (VAR_14->type != VAR_3) &&
     (VAR_14->type != VAR_1) &&
     (VAR_14->type != VAR_5) &&
     (VAR_14->type != VAR_4) &&
     (VAR_14->type != VAR_11) &&
     (VAR_14->type != VAR_0) &&
     (VAR_14->type != VAR_6) &&
     (VAR_14->type != VAR_7) &&
     (VAR_14->type != VAR_10) &&
     (VAR_14->type != VAR_8) &&
     (VAR_14->type != VAR_9)) {

  return;
 }

 VAR_15 = FUNC_2(VAR_14);
 if (FUNC_1(VAR_15))
  return;


 if (VAR_14->type == VAR_8 &&
     VAR_15->cnf.addr_gen_mode == VAR_12)
  VAR_15->cnf.addr_gen_mode = VAR_13;

 FUNC_3(VAR_15, 0);
}
