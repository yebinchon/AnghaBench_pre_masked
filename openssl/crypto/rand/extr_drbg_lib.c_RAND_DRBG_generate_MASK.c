
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ time_t ;
struct TYPE_10__ {scalar_t__ state; size_t max_request; size_t max_adinlen; int fork_id; scalar_t__ reseed_interval; scalar_t__ reseed_gen_counter; scalar_t__ reseed_time_interval; scalar_t__ reseed_time; TYPE_2__* meth; TYPE_1__* parent; int reseed_prop_counter; } ;
struct TYPE_9__ {int (* generate ) (TYPE_3__*,unsigned char*,size_t,unsigned char const*,size_t) ;} ;
struct TYPE_8__ {int reseed_prop_counter; } ;
typedef TYPE_3__ RAND_DRBG ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (TYPE_3__*,unsigned char const*,size_t,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 () ;
 int FUNC_3 (TYPE_3__*,int *,int ,int ) ;
 int FUNC_4 (TYPE_3__*,unsigned char*,size_t,unsigned char const*,size_t) ;
 scalar_t__ FUNC_5 (int *) ;
 unsigned int FUNC_6 (int *) ;

int FUNC_7(RAND_DRBG *VAR_10, unsigned char *VAR_11, size_t VAR_12,
                       int VAR_13,
                       const unsigned char *VAR_14, size_t VAR_15)
{
    int VAR_16;
    int VAR_17 = 0;

    if (VAR_10->state != VAR_1) {

        FUNC_3(VAR_10, ((void*)0), 0, 0);

        if (VAR_10->state == VAR_0) {
            FUNC_1(VAR_3, VAR_6);
            return 0;
        }
        if (VAR_10->state == VAR_2) {
            FUNC_1(VAR_3, VAR_7);
            return 0;
        }
    }

    if (VAR_12 > VAR_10->max_request) {
        FUNC_1(VAR_3, VAR_8);
        return 0;
    }
    if (VAR_15 > VAR_10->max_adinlen) {
        FUNC_1(VAR_3, VAR_4);
        return 0;
    }

    VAR_16 = FUNC_2();

    if (VAR_10->fork_id != VAR_16) {
        VAR_10->fork_id = VAR_16;
        VAR_17 = 1;
    }

    if (VAR_10->reseed_interval > 0) {
        if (VAR_10->reseed_gen_counter > VAR_10->reseed_interval)
            VAR_17 = 1;
    }
    if (VAR_10->reseed_time_interval > 0) {
        time_t VAR_18 = FUNC_5(((void*)0));
        if (VAR_18 < VAR_10->reseed_time
            || VAR_18 - VAR_10->reseed_time >= VAR_10->reseed_time_interval)
            VAR_17 = 1;
    }
    if (VAR_10->parent != ((void*)0)) {
        unsigned int VAR_19 = FUNC_6(&VAR_10->reseed_prop_counter);
        if (VAR_19 > 0
                && FUNC_6(&VAR_10->parent->reseed_prop_counter)
                   != VAR_19)
            VAR_17 = 1;
    }

    if (VAR_17 || VAR_13) {
        if (!FUNC_0(VAR_10, VAR_14, VAR_15, VAR_13)) {
            FUNC_1(VAR_3, VAR_9);
            return 0;
        }
        VAR_14 = ((void*)0);
        VAR_15 = 0;
    }

    if (!VAR_10->meth->generate(VAR_10, VAR_11, VAR_12, VAR_14, VAR_15)) {
        VAR_10->state = VAR_0;
        FUNC_1(VAR_3, VAR_5);
        return 0;
    }

    VAR_10->reseed_gen_counter++;

    return 1;
}
