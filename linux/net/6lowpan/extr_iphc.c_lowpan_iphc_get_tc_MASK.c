
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ipv6hdr {int priority; int* flow_lbl; } ;


 int FUNC_0 (char*,int,int) ;

__attribute__((used)) static inline u8 FUNC_1(const struct ipv6hdr *VAR_0)
{
 u8 VAR_1, VAR_2;




 VAR_1 = (VAR_0->priority << 2) | ((VAR_0->flow_lbl[0] & 0xc0) >> 6);

 VAR_2 = (VAR_0->flow_lbl[0] & 0x30);

 FUNC_0("ecn 0x%02x dscp 0x%02x\n", VAR_2 >> 4, VAR_1);

 return (VAR_2 << 2) | VAR_1;
}
