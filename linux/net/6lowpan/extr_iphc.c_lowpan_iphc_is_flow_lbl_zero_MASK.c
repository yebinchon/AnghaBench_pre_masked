
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ipv6hdr {int* flow_lbl; } ;



__attribute__((used)) static inline bool FUNC_0(const struct ipv6hdr *VAR_0)
{
 return ((!(VAR_0->flow_lbl[0] & 0x0f)) &&
  !VAR_0->flow_lbl[1] && !VAR_0->flow_lbl[2]);
}
