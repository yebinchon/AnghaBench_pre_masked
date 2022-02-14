
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ipv6hdr {int* flow_lbl; } ;



__attribute__((used)) static inline void FUNC_0(struct ipv6hdr *VAR_0, const u8 *VAR_1)
{

 u8 VAR_2 = VAR_1[0] & 0xc0;


 VAR_0->flow_lbl[0] |= (VAR_2 >> 2);
}
