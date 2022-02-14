
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct in6_addr {int* s6_addr; } ;
struct TYPE_2__ {int s_addr; } ;
union in_addr_union {struct in6_addr in6; TYPE_1__ in; } ;
typedef int uint8_t ;
typedef int uint32_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (union in_addr_union*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int) ;

int FUNC_3(int VAR_3, union in_addr_union *VAR_4, unsigned VAR_5) {
        FUNC_0(VAR_4);




        if (VAR_5 <= 0)
                return 0;

        if (VAR_3 == VAR_0) {
                uint32_t VAR_6, VAR_7;

                if (VAR_5 > 32)
                        VAR_5 = 32;

                VAR_6 = FUNC_1(VAR_4->in.s_addr);
                VAR_7 = VAR_6 + (1UL << (32 - VAR_5));
                if (VAR_7 < VAR_6)
                        return 0;
                VAR_7 &= 0xFFFFFFFFUL << (32 - VAR_5);

                VAR_4->in.s_addr = FUNC_2(VAR_7);
                return 1;
        }

        if (VAR_3 == VAR_1) {
                struct in6_addr VAR_8 = {}, VAR_9;
                uint8_t VAR_10 = 0;
                unsigned VAR_11;

                if (VAR_5 > 128)
                        VAR_5 = 128;


                VAR_8.s6_addr[(VAR_5-1) / 8] = 1 << (7 - (VAR_5-1) % 8);

                for (VAR_11 = 16; VAR_11 > 0; VAR_11--) {
                        unsigned VAR_12 = VAR_11 - 1;

                        VAR_9.s6_addr[VAR_12] = VAR_4->in6.s6_addr[VAR_12] + VAR_8.s6_addr[VAR_12] + VAR_10;
                        VAR_10 = (VAR_9.s6_addr[VAR_12] < VAR_4->in6.s6_addr[VAR_12]);
                }

                if (VAR_10)
                        return 0;

                VAR_4->in6 = VAR_9;
                return 1;
        }

        return -VAR_2;
}
