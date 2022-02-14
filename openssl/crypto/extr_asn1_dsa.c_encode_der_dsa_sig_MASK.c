
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WPACKET ;
typedef int BIGNUM ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,size_t*) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,int const*) ;
 int FUNC_9 (int *,size_t) ;

int FUNC_10(WPACKET *VAR_1, const BIGNUM *VAR_2, const BIGNUM *VAR_3)
{
    WPACKET VAR_4, *VAR_5;
    size_t VAR_6;
    int VAR_7 = FUNC_5(VAR_1);

    if (!FUNC_7(VAR_1))
        return 0;

    if (!VAR_7) {
        if (!FUNC_4(&VAR_4, 0))
            return 0;
        VAR_5 = &VAR_4;
    } else {

        VAR_5 = VAR_1;
    }


    if (!FUNC_8(VAR_5, VAR_2)
            || !FUNC_8(VAR_5, VAR_3)
            || !FUNC_3(VAR_5, &VAR_6)
            || (!VAR_7 && !FUNC_2(VAR_5))) {
        if (!VAR_7)
            FUNC_0(VAR_5);
        return 0;
    }


    if (!FUNC_6(VAR_1, VAR_0)
            || !FUNC_9(VAR_1, VAR_6)




            || (!VAR_7 && !FUNC_8(VAR_1, VAR_2))
            || (!VAR_7 && !FUNC_8(VAR_1, VAR_3))
            || !FUNC_1(VAR_1))
        return 0;

    return 1;
}
