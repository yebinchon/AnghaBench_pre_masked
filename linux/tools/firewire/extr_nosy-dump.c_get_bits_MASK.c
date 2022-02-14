
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint32_t ;
struct link_packet {int dummy; } ;



__attribute__((used)) static unsigned int
FUNC_0(struct link_packet *VAR_0, int VAR_1, int VAR_2)
{
 uint32_t *VAR_3 = (uint32_t *) VAR_0;
 uint32_t VAR_4, VAR_5, VAR_6;

 VAR_4 = VAR_1 / 32 + 1;
 VAR_5 = 32 - (VAR_1 & 31) - VAR_2;
 VAR_6 = VAR_2 == 32 ? ~0 : (1 << VAR_2) - 1;

 return (VAR_3[VAR_4] >> VAR_5) & VAR_6;
}
