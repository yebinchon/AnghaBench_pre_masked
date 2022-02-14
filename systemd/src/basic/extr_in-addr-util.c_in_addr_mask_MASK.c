
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int* s6_addr; } ;
struct TYPE_4__ {int s_addr; } ;
union in_addr_union {TYPE_1__ in6; TYPE_2__ in; } ;
typedef int uint8_t ;
struct in_addr {int s_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (union in_addr_union*) ;
 int FUNC_1 (struct in_addr*,unsigned char) ;

int FUNC_2(int VAR_4, union in_addr_union *VAR_5, unsigned char VAR_6) {
        FUNC_0(VAR_5);

        if (VAR_4 == VAR_0) {
                struct in_addr VAR_7;

                if (!FUNC_1(&VAR_7, VAR_6))
                        return -VAR_3;

                VAR_5->in.s_addr &= VAR_7.s_addr;
                return 0;
        }

        if (VAR_4 == VAR_1) {
                unsigned VAR_8;

                for (VAR_8 = 0; VAR_8 < 16; VAR_8++) {
                        uint8_t VAR_9;

                        if (VAR_6 >= 8) {
                                VAR_9 = 0xFF;
                                VAR_6 -= 8;
                        } else {
                                VAR_9 = 0xFF << (8 - VAR_6);
                                VAR_6 = 0;
                        }

                        VAR_5->in6.s6_addr[VAR_8] &= VAR_9;
                }

                return 0;
        }

        return -VAR_2;
}
