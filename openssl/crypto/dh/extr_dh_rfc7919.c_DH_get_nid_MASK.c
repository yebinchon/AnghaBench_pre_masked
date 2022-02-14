
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * q; int * p; int g; } ;
typedef TYPE_1__ DH ;
typedef int BIGNUM ;


 int FUNC_0 (int *,int *) ;
 int * FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;

int FUNC_5(const DH *VAR_11)
{
    int VAR_12;

    if (FUNC_3(VAR_11->g) != 2)
        return VAR_5;
    if (!FUNC_0(VAR_11->p, &VAR_6))
        VAR_12 = VAR_0;
    else if (!FUNC_0(VAR_11->p, &VAR_7))
        VAR_12 = VAR_1;
    else if (!FUNC_0(VAR_11->p, &VAR_8))
        VAR_12 = VAR_2;
    else if (!FUNC_0(VAR_11->p, &VAR_9))
        VAR_12 = VAR_3;
    else if (!FUNC_0(VAR_11->p, &VAR_10))
        VAR_12 = VAR_4;
    else
        return VAR_5;
    if (VAR_11->q != ((void*)0)) {
        BIGNUM *VAR_13 = FUNC_1(VAR_11->p);


        if (VAR_13 == ((void*)0) || !FUNC_4(VAR_13, VAR_13) || !FUNC_0(VAR_11->q, VAR_13))
            VAR_12 = VAR_5;
        FUNC_2(VAR_13);
    }
    return VAR_12;
}
