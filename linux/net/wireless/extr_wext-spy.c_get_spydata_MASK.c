
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {TYPE_1__* wireless_data; } ;
struct iw_spy_data {int dummy; } ;
struct TYPE_2__ {struct iw_spy_data* spy_data; } ;



__attribute__((used)) static inline struct iw_spy_data *FUNC_0(struct net_device *VAR_0)
{

 if (VAR_0->wireless_data)
  return VAR_0->wireless_data->spy_data;
 return ((void*)0);
}
