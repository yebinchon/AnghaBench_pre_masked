
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct netlink_ext_ack {int dummy; } ;
struct TYPE_2__ {scalar_t__ size_max; scalar_t__ size_min; int size_granularity; } ;
struct devlink_resource {TYPE_1__ size_params; } ;


 int VAR_0 ;
 int FUNC_0 (struct netlink_ext_ack*,char*) ;
 int FUNC_1 (scalar_t__,int ,scalar_t__*) ;

__attribute__((used)) static int
FUNC_2(struct devlink_resource *VAR_1, u64 VAR_2,
          struct netlink_ext_ack *VAR_3)
{
 u64 VAR_4;
 int VAR_5 = 0;

 if (VAR_2 > VAR_1->size_params.size_max) {
  FUNC_0(VAR_3, "Size larger than maximum");
  VAR_5 = -VAR_0;
 }

 if (VAR_2 < VAR_1->size_params.size_min) {
  FUNC_0(VAR_3, "Size smaller than minimum");
  VAR_5 = -VAR_0;
 }

 FUNC_1(VAR_2, VAR_1->size_params.size_granularity, &VAR_4);
 if (VAR_4) {
  FUNC_0(VAR_3, "Wrong granularity");
  VAR_5 = -VAR_0;
 }

 return VAR_5;
}
