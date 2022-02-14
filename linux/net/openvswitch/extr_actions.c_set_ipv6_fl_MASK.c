
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct ipv6hdr {int * flow_lbl; } ;


 int FUNC_0 (int ,int ,int ) ;

__attribute__((used)) static void FUNC_1(struct ipv6hdr *VAR_0, u32 VAR_1, u32 VAR_2)
{

 FUNC_0(VAR_0->flow_lbl[0], (u8)(VAR_1 >> 16), (u8)(VAR_2 >> 16));
 FUNC_0(VAR_0->flow_lbl[1], (u8)(VAR_1 >> 8), (u8)(VAR_2 >> 8));
 FUNC_0(VAR_0->flow_lbl[2], (u8)VAR_1, (u8)VAR_2);
}
