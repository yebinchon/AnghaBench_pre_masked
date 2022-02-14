
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct tcpnv {scalar_t__ nv_lower_bound_rtt; scalar_t__ nv_base_rtt; } ;



inline u32 FUNC_0(struct tcpnv *VAR_0, u32 VAR_1)
{
 if (VAR_0->nv_lower_bound_rtt > 0 && VAR_1 < VAR_0->nv_lower_bound_rtt)
  return VAR_0->nv_lower_bound_rtt;
 else if (VAR_0->nv_base_rtt > 0 && VAR_1 > VAR_0->nv_base_rtt)
  return VAR_0->nv_base_rtt;
 else
  return VAR_1;
}
