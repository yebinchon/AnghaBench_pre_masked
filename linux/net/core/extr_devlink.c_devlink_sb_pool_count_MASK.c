
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct devlink_sb {scalar_t__ egress_pools_count; scalar_t__ ingress_pools_count; } ;



__attribute__((used)) static u16 FUNC_0(struct devlink_sb *VAR_0)
{
 return VAR_0->ingress_pools_count + VAR_0->egress_pools_count;
}
