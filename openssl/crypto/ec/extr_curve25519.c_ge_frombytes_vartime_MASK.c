
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_3__ {int Y; int X; int T; int Z; } ;
typedef TYPE_1__ ge_p3 ;
typedef int fe ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ,int const*) ;
 int const FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int ,int ,int ) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (int ,int ,int ) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_10(ge_p3 *VAR_2, const uint8_t *VAR_3)
{
    fe VAR_4;
    fe VAR_5;
    fe VAR_6;
    fe VAR_7;
    fe VAR_8;

    FUNC_2(VAR_2->Y, VAR_3);
    FUNC_0(VAR_2->Z);
    FUNC_8(VAR_4, VAR_2->Y);
    FUNC_5(VAR_5, VAR_4, VAR_0);
    FUNC_9(VAR_4, VAR_4, VAR_2->Z);
    FUNC_1(VAR_5, VAR_5, VAR_2->Z);

    FUNC_8(VAR_6, VAR_5);
    FUNC_5(VAR_6, VAR_6, VAR_5);
    FUNC_8(VAR_2->X, VAR_6);
    FUNC_5(VAR_2->X, VAR_2->X, VAR_5);
    FUNC_5(VAR_2->X, VAR_2->X, VAR_4);

    FUNC_7(VAR_2->X, VAR_2->X);
    FUNC_5(VAR_2->X, VAR_2->X, VAR_6);
    FUNC_5(VAR_2->X, VAR_2->X, VAR_4);

    FUNC_8(VAR_7, VAR_2->X);
    FUNC_5(VAR_7, VAR_7, VAR_5);
    FUNC_9(VAR_8, VAR_7, VAR_4);
    if (FUNC_4(VAR_8)) {
        FUNC_1(VAR_8, VAR_7, VAR_4);
        if (FUNC_4(VAR_8)) {
            return -1;
        }
        FUNC_5(VAR_2->X, VAR_2->X, VAR_1);
    }

    if (FUNC_3(VAR_2->X) != (VAR_3[31] >> 7)) {
        FUNC_6(VAR_2->X, VAR_2->X);
    }

    FUNC_5(VAR_2->T, VAR_2->X, VAR_2->Y);
    return 0;
}
