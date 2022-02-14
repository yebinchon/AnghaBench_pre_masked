
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct in6_addr {scalar_t__* s6_addr; } ;


 scalar_t__ VAR_0 ;

struct in6_addr
FUNC_0( struct in6_addr VAR_1, uint32_t VAR_2 )
{
    int VAR_3;

    for (VAR_3 = 15; VAR_3>=0 && VAR_2 > 0; VAR_3--)
    {
        register int VAR_4;
        register uint32_t VAR_5;

        VAR_5 = (unsigned char) VAR_1.s6_addr[VAR_3];
        VAR_1.s6_addr[VAR_3] = (VAR_5+VAR_2) & VAR_0;




        VAR_4 = ((VAR_5 & 0xff) + (VAR_2 & 0xff)) >> 8;
        VAR_2 = (VAR_2>>8) + VAR_4;
    }
    return VAR_1;
}
