
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
typedef int uint16_t ;
struct udphdr {int len; } ;
struct ip6_hdr {int ip6_src; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int VAR_3 ;
 int FUNC_1 (int *,int,int) ;
 scalar_t__ VAR_4 ;

__attribute__((used)) static uint16_t FUNC_2(struct ip6_hdr *VAR_5, struct udphdr *VAR_6)
{
 uint32_t VAR_7 = 0;
 uint16_t VAR_8;

 VAR_7 = FUNC_1((uint8_t *)&VAR_5->ip6_src, 2 * sizeof(VAR_5->ip6_src),
    VAR_1);
 VAR_7 = FUNC_1((uint8_t *)&VAR_6->len, sizeof(VAR_6->len), VAR_7);
 VAR_7 = FUNC_1((uint8_t *)VAR_6, VAR_2, VAR_7);
 VAR_7 = FUNC_1((uint8_t *)VAR_4, VAR_3, VAR_7);
 VAR_8 = 0xffff & ~VAR_7;
 if (VAR_8)
  return FUNC_0(VAR_8);
 else
  return VAR_0;
}
