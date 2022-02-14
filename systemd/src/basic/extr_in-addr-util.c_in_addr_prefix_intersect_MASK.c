
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int* s6_addr; } ;
struct TYPE_3__ {int s_addr; } ;
union in_addr_union {TYPE_2__ in6; TYPE_1__ in; } ;
typedef int uint8_t ;
typedef int uint32_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int FUNC_0 (unsigned int,unsigned int) ;
 int FUNC_1 (union in_addr_union const*) ;
 int FUNC_2 (int) ;

int FUNC_3(
                int VAR_3,
                const union in_addr_union *VAR_4,
                unsigned VAR_5,
                const union in_addr_union *VAR_6,
                unsigned VAR_7) {

        unsigned VAR_8;

        FUNC_1(VAR_4);
        FUNC_1(VAR_6);




        VAR_8 = FUNC_0(VAR_5, VAR_7);

        if (VAR_3 == VAR_0) {
                uint32_t VAR_9, VAR_10;

                VAR_9 = FUNC_2(VAR_4->in.s_addr ^ VAR_6->in.s_addr);
                VAR_10 = (VAR_8 == 0) ? 0 : 0xFFFFFFFFUL << (32 - VAR_8);

                return (VAR_9 & VAR_10) == 0;
        }

        if (VAR_3 == VAR_1) {
                unsigned VAR_11;

                if (VAR_8 > 128)
                        VAR_8 = 128;

                for (VAR_11 = 0; VAR_11 < 16; VAR_11++) {
                        uint8_t VAR_12, VAR_13;

                        VAR_12 = VAR_4->in6.s6_addr[VAR_11] ^ VAR_6->in6.s6_addr[VAR_11];

                        if (VAR_8 < 8)
                                VAR_13 = 0xFF << (8 - VAR_8);
                        else
                                VAR_13 = 0xFF;

                        if ((VAR_12 & VAR_13) != 0)
                                return 0;

                        if (VAR_8 > 8)
                                VAR_8 -= 8;
                        else
                                VAR_8 = 0;
                }

                return 1;
        }

        return -VAR_2;
}
