
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned int range; unsigned int iterations; double critical; } ;
typedef size_t BIGNUM ;


 int FUNC_0 (size_t*) ;
 scalar_t__ FUNC_1 (size_t*) ;
 size_t* FUNC_2 () ;
 int FUNC_3 (size_t*,size_t*) ;
 int FUNC_4 (size_t*,unsigned int const) ;
 int FUNC_5 (size_t*) ;
 size_t* FUNC_6 (int) ;
 int FUNC_7 (char*,double,double const) ;
 int FUNC_8 (char*,size_t,unsigned int const,unsigned int const) ;
 int FUNC_9 (size_t*) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (unsigned int,unsigned int const) ;
 TYPE_1__* VAR_0 ;

__attribute__((used)) static int FUNC_12(size_t VAR_1)
{
    const unsigned int VAR_2 = VAR_0[VAR_1].range;
    const unsigned int VAR_3 = VAR_0[VAR_1].iterations;
    const double VAR_4 = VAR_0[VAR_1].critical;
    const double VAR_5 = VAR_3 / (double)VAR_2;
    double VAR_6 = 0;
    BIGNUM *VAR_7 = ((void*)0), *VAR_8 = ((void*)0);
    size_t *VAR_9;
    unsigned int VAR_10, VAR_11;
    int VAR_12 = 0;

    if (!FUNC_9(VAR_9 = FUNC_6(sizeof(*VAR_9) * VAR_2))
        || !FUNC_9(VAR_7 = FUNC_2())
        || !FUNC_9(VAR_8 = FUNC_2())
        || !FUNC_10(FUNC_4(VAR_7, VAR_2)))
        goto err;
    for (VAR_10 = 0; VAR_10 < VAR_3; VAR_10++) {
        if (!FUNC_10(FUNC_3(VAR_8, VAR_7))
            || !FUNC_11(VAR_11 = (unsigned int)FUNC_1(VAR_8), VAR_2))
            goto err;
        VAR_9[VAR_11]++;
    }

    for (VAR_10 = 0; VAR_10 < VAR_2; VAR_10++) {
        const double VAR_13 = VAR_9[VAR_10] - VAR_5;
        VAR_6 += VAR_13 * VAR_13;
    }
    VAR_6 /= VAR_5;

    if (VAR_6 > VAR_4) {
        FUNC_7("Chi^2 test negative %.4f > %4.f", VAR_6, VAR_4);
        FUNC_8("test case %zu  range %u  iterations %u", VAR_1 + 1, VAR_2,
                  VAR_3);
        goto err;
    }

    VAR_12 = 1;
err:
    FUNC_0(VAR_7);
    FUNC_0(VAR_8);
    FUNC_5(VAR_9);
    return VAR_12;
}
