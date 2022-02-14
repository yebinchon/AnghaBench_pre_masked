
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct switchdev_trans {int dummy; } ;
struct dsa_switch {TYPE_1__* ops; } ;
struct dsa_port {int index; scalar_t__ stp_state; struct dsa_switch* ds; } ;
struct TYPE_2__ {int (* port_fast_age ) (struct dsa_switch*,int) ;int (* port_stp_state_set ) (struct dsa_switch*,int,scalar_t__) ;} ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct dsa_switch*,int,scalar_t__) ;
 int FUNC_1 (struct dsa_switch*,int) ;
 scalar_t__ FUNC_2 (struct switchdev_trans*) ;

int FUNC_3(struct dsa_port *VAR_6, u8 VAR_7,
         struct switchdev_trans *VAR_8)
{
 struct dsa_switch *VAR_9 = VAR_6->ds;
 int VAR_10 = VAR_6->index;

 if (FUNC_2(VAR_8))
  return VAR_9->ops->port_stp_state_set ? 0 : -VAR_5;

 if (VAR_9->ops->port_stp_state_set)
  VAR_9->ops->port_stp_state_set(VAR_9, VAR_10, VAR_7);

 if (VAR_9->ops->port_fast_age) {





  if ((VAR_6->stp_state == VAR_3 ||
       VAR_6->stp_state == VAR_2) &&
      (VAR_7 == VAR_1 ||
       VAR_7 == VAR_0 ||
       VAR_7 == VAR_4))
   VAR_9->ops->port_fast_age(VAR_9, VAR_10);
 }

 VAR_6->stp_state = VAR_7;

 return 0;
}
