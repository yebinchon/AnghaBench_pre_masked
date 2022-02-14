
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int* bitsnum; int sign; } ;
typedef TYPE_2__ VARIANT_DI ;
struct TYPE_7__ {scalar_t__ m_lo; scalar_t__ m_hi; int exp_bias; int sign; } ;
struct TYPE_9__ {double d; TYPE_1__ i; } ;
typedef TYPE_3__ R8_FIELDS ;
typedef int HRESULT ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*,int,int ) ;

__attribute__((used)) static HRESULT FUNC_2(double VAR_4, VARIANT_DI * VAR_5)
{
    HRESULT VAR_6 = VAR_2;
    R8_FIELDS VAR_7;

    VAR_7.d = VAR_4;


    if (VAR_7.i.m_lo == 0 && VAR_7.i.m_hi == 0 && VAR_7.i.exp_bias == 0) {

        FUNC_0(VAR_5);
    } else if (VAR_7.i.m_lo == 0 && VAR_7.i.m_hi == 0 && VAR_7.i.exp_bias == 0x7FF) {

        VAR_6 = VAR_1;
    } else if (VAR_7.i.exp_bias == 0x7FF) {

        VAR_6 = VAR_0;
    } else {
        int VAR_8;
        FUNC_0(VAR_5);

        VAR_8 = VAR_7.i.exp_bias - 1023;
        VAR_5->sign = VAR_7.i.sign;


        VAR_5->bitsnum[0] = VAR_7.i.m_lo;
        VAR_5->bitsnum[1] = VAR_7.i.m_hi;
        VAR_5->bitsnum[1] &= 0x000FFFFF;
        if (VAR_7.i.exp_bias == 0) {

            VAR_8++;
        } else {

            VAR_5->bitsnum[1] |= 0x00100000;
        }




        VAR_8 -= 52;

        VAR_6 = FUNC_1(VAR_5, VAR_8, VAR_3);
    }

    return VAR_6;
}
