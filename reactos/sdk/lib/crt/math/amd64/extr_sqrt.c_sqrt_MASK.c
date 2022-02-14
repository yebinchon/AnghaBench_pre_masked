
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


typedef int __m128i ;
struct TYPE_8__ {double* m128d_f64; } ;
typedef TYPE_1__ __m128d ;


 unsigned long long FUNC_0 (int ) ;
 TYPE_1__ FUNC_1 (double) ;
 TYPE_1__ FUNC_2 (TYPE_1__) ;
 TYPE_1__ FUNC_3 (TYPE_1__,TYPE_1__) ;

double
FUNC_4 (
    double VAR_0)
{
    register union
    {
        __m128d x128d;
        __m128i x128i;
    } VAR_1 ;
    register union
    {
        unsigned long long ullx;
        double dbl;
    } VAR_2;
    VAR_1.x128d = FUNC_1(VAR_0);


    VAR_2 = FUNC_0(VAR_1.x128i);


    if (VAR_2 & 0x8000000000000000ULL)
    {

        if (VAR_2 != 0x8000000000000000ULL)
        {

            VAR_2 = 0xfff8000000000000ULL;
        }


        return VAR_2;
    }



    if (VAR_2 > 0x7FF0000000000000ULL)
    {

        VAR_2 |= 0x8000000000000ULL;
        return VAR_2;
    }
    VAR_1.x128d = FUNC_3(VAR_1.x128d, VAR_1.x128d);


    return VAR_1.x128d.m128d_f64[0];
}
