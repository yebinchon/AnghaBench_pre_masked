
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int mpz_t ;
struct TYPE_4__ {int mf; } ;
typedef TYPE_1__ calc_number_t ;
struct TYPE_5__ {int size; } ;






 int VAR_0 ;
 TYPE_2__ VAR_1 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int) ;
 int FUNC_6 (int ,char*,int) ;

void FUNC_7(calc_number_t *VAR_2)
{
    mpz_t VAR_3, VAR_4;

    switch (VAR_1.size) {
    case 129:
        FUNC_6(VAR_4, "FFFFFFFFFFFFFFFF", 16);
        break;
    case 130:
        FUNC_6(VAR_4, "00000000FFFFFFFF", 16);
        break;
    case 128:
        FUNC_6(VAR_4, "000000000000FFFF", 16);
        break;
    case 131:
        FUNC_6(VAR_4, "00000000000000FF", 16);
        break;
    default:
        FUNC_5(VAR_4, -1);
    }
    FUNC_4(VAR_3);
    FUNC_0(VAR_3, VAR_2->mf, VAR_0);
    FUNC_2(VAR_3, VAR_3, VAR_4);
    FUNC_1(VAR_2->mf, VAR_3, VAR_0);
    FUNC_3(VAR_3);
    FUNC_3(VAR_4);
}
