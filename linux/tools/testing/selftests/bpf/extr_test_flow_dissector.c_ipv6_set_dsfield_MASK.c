
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
typedef int uint16_t ;
struct ipv6hdr {int dummy; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;

__attribute__((used)) static void FUNC_2(struct ipv6hdr *VAR_0, uint8_t VAR_1)
{
 uint16_t VAR_2, *VAR_3 = (uint16_t *)VAR_0;

 VAR_2 = FUNC_1(*VAR_3);
 VAR_2 &= 0xF00F;
 VAR_2 |= ((uint16_t) VAR_1) << 4;
 *VAR_3 = FUNC_0(VAR_2);
}
