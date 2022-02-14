
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ traffic_class; } ;
struct atm_qos {TYPE_1__ rxtp; TYPE_1__ txtp; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_1(const struct atm_qos *VAR_2)
{
 int VAR_3;

 if (!VAR_2->txtp.traffic_class && !VAR_2->rxtp.traffic_class)
  return -VAR_1;
 if (VAR_2->txtp.traffic_class != VAR_2->rxtp.traffic_class &&
     VAR_2->txtp.traffic_class && VAR_2->rxtp.traffic_class &&
     VAR_2->txtp.traffic_class != VAR_0 &&
     VAR_2->rxtp.traffic_class != VAR_0)
  return -VAR_1;
 VAR_3 = FUNC_0(&VAR_2->txtp);
 if (VAR_3)
  return VAR_3;
 return FUNC_0(&VAR_2->rxtp);
}
