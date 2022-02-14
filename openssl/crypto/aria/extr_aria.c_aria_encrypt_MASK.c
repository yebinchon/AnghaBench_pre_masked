
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct TYPE_6__ {int rounds; TYPE_1__* rd_key; } ;
struct TYPE_5__ {int* u; } ;
typedef TYPE_1__ ARIA_u128 ;
typedef TYPE_2__ ARIA_KEY ;


 int FUNC_0 (TYPE_1__ const*,int,int,int,int) ;
 int FUNC_1 (int,int,int,int) ;
 int FUNC_2 (int,int,int,int) ;
 int FUNC_3 (unsigned char const*,int) ;
 size_t FUNC_4 (int,int) ;
 int FUNC_5 (int ,int ,int ,int ) ;
 int FUNC_6 (unsigned char*,int,int) ;
 scalar_t__* VAR_0 ;
 scalar_t__* VAR_1 ;
 scalar_t__* VAR_2 ;
 int* VAR_3 ;

void FUNC_7(const unsigned char *VAR_4, unsigned char *VAR_5,
                  const ARIA_KEY *VAR_6)
{
    register uint32_t VAR_7, VAR_8, VAR_9, VAR_10;
    int VAR_11;
    const ARIA_u128 *VAR_12;

    if (VAR_4 == ((void*)0) || VAR_5 == ((void*)0) || VAR_6 == ((void*)0)) {
        return;
    }

    VAR_12 = VAR_6->rd_key;
    VAR_11 = VAR_6->rounds;

    if (VAR_11 != 12 && VAR_11 != 14 && VAR_11 != 16) {
        return;
    }

    VAR_7 = FUNC_3(VAR_4, 0);
    VAR_8 = FUNC_3(VAR_4, 1);
    VAR_9 = FUNC_3(VAR_4, 2);
    VAR_10 = FUNC_3(VAR_4, 3);

    FUNC_0(VAR_12, VAR_7, VAR_8, VAR_9, VAR_10);
    VAR_12++;

    FUNC_2(VAR_7, VAR_8, VAR_9, VAR_10);
    FUNC_0(VAR_12, VAR_7, VAR_8, VAR_9, VAR_10);
    VAR_12++;

    while(VAR_11 -= 2){
        FUNC_1(VAR_7, VAR_8, VAR_9, VAR_10);
        FUNC_0(VAR_12, VAR_7, VAR_8, VAR_9, VAR_10);
        VAR_12++;

        FUNC_2(VAR_7, VAR_8, VAR_9, VAR_10);
        FUNC_0(VAR_12, VAR_7, VAR_8, VAR_9, VAR_10);
        VAR_12++;
    }

    VAR_7 = VAR_12->u[0] ^ FUNC_5(
        (uint8_t)(VAR_2[FUNC_4(VAR_7, 0)] ),
        (uint8_t)(VAR_3[FUNC_4(VAR_7, 1)] >> 8),
        (uint8_t)(VAR_0[FUNC_4(VAR_7, 2)] ),
        (uint8_t)(VAR_1[FUNC_4(VAR_7, 3)] ));
    VAR_8 = VAR_12->u[1] ^ FUNC_5(
        (uint8_t)(VAR_2[FUNC_4(VAR_8, 0)] ),
        (uint8_t)(VAR_3[FUNC_4(VAR_8, 1)] >> 8),
        (uint8_t)(VAR_0[FUNC_4(VAR_8, 2)] ),
        (uint8_t)(VAR_1[FUNC_4(VAR_8, 3)] ));
    VAR_9 = VAR_12->u[2] ^ FUNC_5(
        (uint8_t)(VAR_2[FUNC_4(VAR_9, 0)] ),
        (uint8_t)(VAR_3[FUNC_4(VAR_9, 1)] >> 8),
        (uint8_t)(VAR_0[FUNC_4(VAR_9, 2)] ),
        (uint8_t)(VAR_1[FUNC_4(VAR_9, 3)] ));
    VAR_10 = VAR_12->u[3] ^ FUNC_5(
        (uint8_t)(VAR_2[FUNC_4(VAR_10, 0)] ),
        (uint8_t)(VAR_3[FUNC_4(VAR_10, 1)] >> 8),
        (uint8_t)(VAR_0[FUNC_4(VAR_10, 2)] ),
        (uint8_t)(VAR_1[FUNC_4(VAR_10, 3)] ));

    FUNC_6(VAR_5, 0, VAR_7);
    FUNC_6(VAR_5, 1, VAR_8);
    FUNC_6(VAR_5, 2, VAR_9);
    FUNC_6(VAR_5, 3, VAR_10);
}
