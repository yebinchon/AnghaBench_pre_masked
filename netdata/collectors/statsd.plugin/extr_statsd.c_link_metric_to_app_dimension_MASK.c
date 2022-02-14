
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_8__ ;
typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_19__ {int decimal_detail; } ;
struct TYPE_18__ {int name; } ;
struct TYPE_17__ {char* id; int dimensions_linked_count; scalar_t__ st; } ;
struct TYPE_16__ {int value_type; int algorithm; int name; int divisor; scalar_t__ rd; int multiplier; int * value_ptr; } ;
struct TYPE_14__ {TYPE_1__* ext; } ;
struct TYPE_15__ {scalar_t__ type; int name; int options; int last; TYPE_2__ histogram; int events; } ;
struct TYPE_13__ {int last_stddev; int last_percentile; int last_median; int last_max; int last_min; int last_sum; } ;
typedef TYPE_3__ STATSD_METRIC ;
typedef TYPE_4__ STATSD_APP_CHART_DIM ;
typedef TYPE_5__ STATSD_APP_CHART ;
typedef TYPE_6__ STATSD_APP ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (int ,char*,int ,scalar_t__,int ,char*,int ,int ) ;
 int FUNC_1 (char*,int ,char*,int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (scalar_t__,scalar_t__,int ) ;
 int FUNC_4 (scalar_t__,scalar_t__,int ) ;
 int FUNC_5 (scalar_t__,scalar_t__,int ) ;
 TYPE_8__ VAR_7 ;
 int FUNC_6 (TYPE_3__*) ;
 scalar_t__ FUNC_7 (int) ;

__attribute__((used)) static inline void FUNC_8(STATSD_APP *VAR_8, STATSD_METRIC *VAR_9, STATSD_APP_CHART *VAR_10, STATSD_APP_CHART_DIM *VAR_11) {
    if(VAR_11->value_type == 135) {
        VAR_11->value_ptr = &VAR_9->events;
        VAR_11->algorithm = VAR_2;
    }
    else if(VAR_9->type == VAR_5 || VAR_9->type == VAR_6) {
        VAR_11->algorithm = VAR_1;
        VAR_11->divisor *= VAR_7.decimal_detail;

        switch(VAR_11->value_type) {
            case 135:

                break;

            case 134:
            case 136:
                VAR_11->value_ptr = &VAR_9->last;
                break;

            case 128:
                VAR_11->value_ptr = &VAR_9->histogram.ext->last_sum;
                break;

            case 131:
                VAR_11->value_ptr = &VAR_9->histogram.ext->last_min;
                break;

            case 133:
                VAR_11->value_ptr = &VAR_9->histogram.ext->last_max;
                break;

            case 132:
                VAR_11->value_ptr = &VAR_9->histogram.ext->last_median;
                break;

            case 130:
                VAR_11->value_ptr = &VAR_9->histogram.ext->last_percentile;
                break;

            case 129:
                VAR_11->value_ptr = &VAR_9->histogram.ext->last_stddev;
                break;
        }
    }
    else {
        if (VAR_11->value_type != 134)
            FUNC_1("STATSD: unsupported value type for dimension '%s' of chart '%s' of app '%s' on metric '%s'", VAR_11->name, VAR_10->id, VAR_8->name, VAR_9->name);

        VAR_11->value_ptr = &VAR_9->last;
        VAR_11->algorithm = FUNC_6(VAR_9);

        if(VAR_9->type == VAR_4)
            VAR_11->divisor *= VAR_7.decimal_detail;
    }

    if(FUNC_7(VAR_10->st && VAR_11->rd)) {
        FUNC_3(VAR_10->st, VAR_11->rd, VAR_11->algorithm);
        FUNC_5(VAR_10->st, VAR_11->rd, VAR_11->multiplier);
        FUNC_4(VAR_10->st, VAR_11->rd, VAR_11->divisor);
    }

    VAR_10->dimensions_linked_count++;
    VAR_9->options |= VAR_3;
    FUNC_0(VAR_0, "metric '%s' of type %u linked with app '%s', chart '%s', dimension '%s', algorithm '%s'", VAR_9->name, VAR_9->type, VAR_8->name, VAR_10->id, VAR_11->name, FUNC_2(VAR_11->algorithm));
}
