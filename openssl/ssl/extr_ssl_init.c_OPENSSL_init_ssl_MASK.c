
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int OPENSSL_INIT_SETTINGS ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int,int const*) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int ,int ) ;
 int VAR_7 ;
 int FUNC_3 (int ,int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;

int FUNC_4(uint64_t VAR_14, const OPENSSL_INIT_SETTINGS * VAR_15)
{
    static int VAR_16 = 0;

    if (VAR_13) {
        if (!VAR_16) {





            VAR_16 = 1;
            FUNC_3(VAR_7, VAR_0);
        }
        return 0;
    }

    VAR_14 |= VAR_1
         | VAR_2;

    if ((VAR_14 & VAR_5) == 0)
        VAR_14 |= VAR_3;


    if (!FUNC_0(VAR_14, VAR_15))
        return 0;

    if (!FUNC_1(&VAR_11, VAR_10))
        return 0;

    if ((VAR_14 & VAR_6)
        && !FUNC_2(&VAR_12, VAR_9,
                         VAR_8))
        return 0;

    if ((VAR_14 & VAR_4)
        && !FUNC_1(&VAR_12, VAR_8))
        return 0;

    return 1;
}
