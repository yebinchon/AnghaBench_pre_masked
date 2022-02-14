
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_6__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_11__ {scalar_t__ histogram_increase_step; } ;
struct TYPE_9__ {TYPE_1__* ext; } ;
struct TYPE_10__ {int reset; int count; int events; TYPE_2__ histogram; } ;
struct TYPE_8__ {int used; int size; double* values; int mutex; } ;
typedef TYPE_3__ STATSD_METRIC ;
typedef double LONG_DOUBLE ;


 int FUNC_0 (char*,char const*) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (double,double) ;
 int FUNC_3 (double,double) ;
 long long FUNC_4 (double) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 double* FUNC_7 (double*,int) ;
 TYPE_6__ VAR_0 ;
 double FUNC_8 (char const*,double) ;
 double FUNC_9 (char const*) ;
 int FUNC_10 (TYPE_3__*) ;
 scalar_t__ FUNC_11 (int) ;
 int FUNC_12 (char const*) ;

__attribute__((used)) static inline void FUNC_13(STATSD_METRIC *VAR_1, const char *VAR_2, const char *VAR_3, const char *VAR_4) {
    if(!FUNC_1(VAR_1)) return;

    if(FUNC_11(!VAR_2 || !*VAR_2)) {
        FUNC_0("STATSD: metric of type %s, with empty value is ignored.", VAR_4);
        return;
    }

    if(FUNC_11(VAR_1->reset)) {
        VAR_1->histogram.ext->used = 0;
        FUNC_10(VAR_1);
    }

    if(FUNC_11(FUNC_12(VAR_2))) {

    }
    else {
        LONG_DOUBLE VAR_5 = FUNC_8(VAR_2, 1.0);
        LONG_DOUBLE VAR_6 = FUNC_9(VAR_3);
        if(FUNC_11(FUNC_3(VAR_6, 0.01))) VAR_6 = 0.01;
        if(FUNC_11(FUNC_2(VAR_6, 1.0))) VAR_6 = 1.0;

        long long VAR_7 = FUNC_4(1.0 / VAR_6);
        while(VAR_7-- > 0) {

            if(FUNC_11(VAR_1->histogram.ext->used == VAR_1->histogram.ext->size)) {
                FUNC_5(&VAR_1->histogram.ext->mutex);
                VAR_1->histogram.ext->size += VAR_0.histogram_increase_step;
                VAR_1->histogram.ext->values = FUNC_7(VAR_1->histogram.ext->values, sizeof(LONG_DOUBLE) * VAR_1->histogram.ext->size);
                FUNC_6(&VAR_1->histogram.ext->mutex);
            }

            VAR_1->histogram.ext->values[VAR_1->histogram.ext->used++] = VAR_5;
        }

        VAR_1->events++;
        VAR_1->count++;
    }
}
