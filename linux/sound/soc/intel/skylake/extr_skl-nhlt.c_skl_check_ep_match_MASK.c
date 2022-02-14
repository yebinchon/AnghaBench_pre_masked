
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef scalar_t__ u32 ;
struct nhlt_endpoint {scalar_t__ virtual_bus_id; scalar_t__ linktype; scalar_t__ direction; scalar_t__ device_type; } ;
struct device {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct device*,char*,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;

__attribute__((used)) static bool FUNC_1(struct device *VAR_1, struct nhlt_endpoint *VAR_2,
  u32 VAR_3, u8 VAR_4, u8 VAR_5, u8 VAR_6)
{
 FUNC_0(VAR_1, "vbus_id=%d link_type=%d dir=%d dev_type = %d\n",
   VAR_2->virtual_bus_id, VAR_2->linktype,
   VAR_2->direction, VAR_2->device_type);

 if ((VAR_2->virtual_bus_id == VAR_3) &&
   (VAR_2->linktype == VAR_4) &&
   (VAR_2->direction == VAR_5)) {

  if (VAR_2->linktype == VAR_0)
   return 1;

  if (VAR_2->device_type == VAR_6)
   return 1;
 }

 return 0;
}
