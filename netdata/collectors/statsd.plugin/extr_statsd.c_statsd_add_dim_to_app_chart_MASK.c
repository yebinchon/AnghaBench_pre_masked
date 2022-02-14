
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {int flags; } ;
struct TYPE_8__ {int st; TYPE_1__* dimensions; } ;
struct TYPE_7__ {scalar_t__ metric_hash; char* metric; scalar_t__ value_type; TYPE_3__* rd; int flags; int algorithm; int divisor; int multiplier; int name; struct TYPE_7__* next; } ;
typedef TYPE_1__ STATSD_APP_CHART_DIM ;
typedef TYPE_2__ STATSD_APP_CHART ;
typedef int STATSD_APP ;
typedef TYPE_3__ RRDDIM ;


 int VAR_0 ;
 void* FUNC_0 (int ,char*,int ,int ,int ,int ) ;
 int FUNC_1 (char*,size_t,char*,char*,int ,...) ;
 int FUNC_2 (char*,char*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (scalar_t__) ;

__attribute__((used)) static inline RRDDIM *FUNC_5(STATSD_APP *VAR_1, STATSD_APP_CHART *VAR_2, STATSD_APP_CHART_DIM *VAR_3) {
    (void)VAR_1;



    STATSD_APP_CHART_DIM *VAR_4;
    size_t VAR_5 = 0, VAR_6 = 0;
    size_t VAR_7 = 0;

    for (VAR_4 = VAR_2->dimensions; VAR_4 && VAR_4->next; VAR_4 = VAR_4->next) {
        if (VAR_3->metric_hash == VAR_4->metric_hash && !FUNC_2(VAR_3->metric, VAR_4->metric)) {
            VAR_5++;

            if(VAR_3->value_type == VAR_4->value_type) {
                VAR_6++;
                if (VAR_4 == VAR_3)
                    VAR_7 = VAR_6;
            }
        }
    }

    if(VAR_5 > 1) {


        size_t VAR_8 = FUNC_3(VAR_3->metric) + 100;
        char VAR_9[ VAR_8 + 1 ];

        if(VAR_6 > 1) {

            FUNC_1(VAR_9, VAR_8, "%s_%s%zu", VAR_3->metric, FUNC_4(VAR_3->value_type), VAR_7);
        }
        else {

            FUNC_1(VAR_9, VAR_8, "%s_%s", VAR_3->metric, FUNC_4(VAR_3->value_type));
        }

        VAR_3->rd = FUNC_0(VAR_2->st, VAR_9, VAR_3->name, VAR_3->multiplier, VAR_3->divisor, VAR_3->algorithm);
        if(VAR_3->flags != VAR_0) VAR_3->rd->flags |= VAR_3->flags;
        return VAR_3->rd;
    }

    VAR_3->rd = FUNC_0(VAR_2->st, VAR_3->metric, VAR_3->name, VAR_3->multiplier, VAR_3->divisor, VAR_3->algorithm);
    if(VAR_3->flags != VAR_0) VAR_3->rd->flags |= VAR_3->flags;
    return VAR_3->rd;
}
