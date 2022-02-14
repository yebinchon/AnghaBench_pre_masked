
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct udphdr {scalar_t__ len; } ;


 int VAR_0 ;
 int FUNC_0 (void const*,unsigned long,unsigned long) ;
 unsigned long FUNC_1 (int ) ;
 int FUNC_2 (scalar_t__) ;

__attribute__((used)) static uint16_t FUNC_3(const struct udphdr *VAR_1, int VAR_2)
{
 unsigned long VAR_3, VAR_4;
 const void *VAR_5 = VAR_1;

 VAR_3 = FUNC_1(VAR_0);
 VAR_3 += VAR_1->len;


 VAR_5 -= VAR_2 * 2;
 VAR_4 = FUNC_2(VAR_1->len) + VAR_2 * 2;

 return FUNC_0(VAR_5, VAR_4 >> 1, VAR_3);
}
