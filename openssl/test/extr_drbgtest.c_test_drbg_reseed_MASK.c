
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_7__ ;
typedef struct TYPE_10__ TYPE_6__ ;
typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ time_t ;
typedef int buf ;
struct TYPE_11__ {int reseed_count; } ;
struct TYPE_10__ {int reseed_count; } ;
struct TYPE_9__ {int reseed_count; } ;
struct TYPE_8__ {int reseed_prop_counter; int state; scalar_t__ reseed_time; } ;
typedef TYPE_1__ RAND_DRBG ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (unsigned char*,int) ;
 int FUNC_2 (unsigned char*,int) ;
 int FUNC_3 (int,int) ;
 int FUNC_4 (int,int) ;
 int FUNC_5 (int,int ) ;
 int FUNC_6 (scalar_t__,scalar_t__) ;
 int FUNC_7 (scalar_t__,scalar_t__) ;
 TYPE_7__ VAR_2 ;
 TYPE_6__ VAR_3 ;
 TYPE_5__ VAR_4 ;
 scalar_t__ FUNC_8 (int *) ;

__attribute__((used)) static int FUNC_9(int VAR_5,
                            RAND_DRBG *VAR_6,
                            RAND_DRBG *VAR_7,
                            RAND_DRBG *VAR_8,
                            int VAR_9,
                            int VAR_10,
                            int VAR_11,
                            time_t VAR_12
                           )
{
    unsigned char VAR_13[32];
    time_t VAR_14, VAR_15;
    int VAR_16 = (VAR_5 ? VAR_1 : VAR_0);






    if (!FUNC_5(VAR_6->reseed_prop_counter, 0)
        || !FUNC_5(VAR_7->reseed_prop_counter, 0)
        || !FUNC_5(VAR_8->reseed_prop_counter, 0))
        return 0;


    if (!FUNC_4(VAR_7->reseed_prop_counter, VAR_6->reseed_prop_counter)
        || !FUNC_4(VAR_8->reseed_prop_counter, VAR_6->reseed_prop_counter))
        return 0;





    if (VAR_12 == 0)
        VAR_12 = FUNC_8(((void*)0));


    VAR_14 = VAR_9 == 1 ? VAR_12 : 0;
    if (!FUNC_3(FUNC_1(VAR_13, sizeof(VAR_13)), VAR_5)
        || !FUNC_3(FUNC_2(VAR_13, sizeof(VAR_13)), VAR_5))
        return 0;
    VAR_15 = FUNC_8(((void*)0));







    if (!FUNC_3(VAR_6->state, VAR_16)
        || !FUNC_3(VAR_7->state, VAR_16)
        || !FUNC_3(VAR_8->state, VAR_16))
        return 0;

    if (VAR_9 >= 0) {

        if (!FUNC_3(VAR_2.reseed_count, VAR_9))
            return 0;
    }

    if (VAR_10 >= 0) {

        if (!FUNC_3(VAR_4.reseed_count, VAR_10))
            return 0;
    }

    if (VAR_11 >= 0) {

        if (!FUNC_3(VAR_3.reseed_count, VAR_11))
            return 0;
    }

    if (VAR_5 == 1) {

        if (!FUNC_3(VAR_7->reseed_prop_counter, VAR_6->reseed_prop_counter)
            || !FUNC_3(VAR_8->reseed_prop_counter, VAR_6->reseed_prop_counter))
            return 0;


        if (!FUNC_7(VAR_14, VAR_6->reseed_time)
            || !FUNC_7(VAR_6->reseed_time, VAR_15))
            return 0;


        if (!FUNC_6(VAR_7->reseed_time, VAR_6->reseed_time)
            || !FUNC_6(VAR_8->reseed_time, VAR_6->reseed_time))
            return 0;
    } else {
        FUNC_0();
    }

    return 1;
}
