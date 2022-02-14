
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_8__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int uint32_t ;
typedef int avl ;
struct TYPE_14__ {int mutex; } ;
struct TYPE_13__ {char const* name; int events; TYPE_2__* first; int metrics; int index; int default_options; } ;
struct TYPE_11__ {TYPE_8__* ext; } ;
struct TYPE_12__ {struct TYPE_12__* next; scalar_t__ name; TYPE_1__ histogram; int options; scalar_t__ type; int hash; } ;
typedef scalar_t__ STATSD_METRIC_TYPE ;
typedef int STATSD_METRIC_HISTOGRAM_EXTENSIONS ;
typedef TYPE_2__ STATSD_METRIC ;
typedef TYPE_3__ STATSD_INDEX ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *,int *) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (TYPE_3__*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_8__* FUNC_3 (int,int) ;
 int FUNC_4 (int ,char*,char const*,char const*) ;
 int FUNC_5 (void*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (char const*) ;
 TYPE_2__* FUNC_8 (TYPE_3__*,char const*,int ) ;
 scalar_t__ FUNC_9 (char const*) ;
 scalar_t__ FUNC_10 (int) ;

__attribute__((used)) static inline STATSD_METRIC *FUNC_11(STATSD_INDEX *VAR_3, const char *VAR_4, STATSD_METRIC_TYPE VAR_5) {
    FUNC_4(VAR_0, "searching for metric '%s' under '%s'", VAR_4, VAR_3->name);

    uint32_t VAR_6 = FUNC_7(VAR_4);

    STATSD_METRIC *VAR_7 = FUNC_8(VAR_3, VAR_4, VAR_6);
    if(FUNC_10(!VAR_7)) {
        FUNC_4(VAR_0, "Creating new %s metric '%s'", VAR_3->name, VAR_4);

        VAR_7 = (STATSD_METRIC *)FUNC_3(sizeof(STATSD_METRIC), 1);
        VAR_7->name = FUNC_9(VAR_4);
        VAR_7->hash = VAR_6;
        VAR_7->type = VAR_5;
        VAR_7->options = VAR_3->default_options;

        if(VAR_5 == VAR_1 || VAR_5 == VAR_2) {
            VAR_7->histogram.ext = FUNC_3(sizeof(STATSD_METRIC_HISTOGRAM_EXTENSIONS), 1);
            FUNC_6(&VAR_7->histogram.ext->mutex);
        }
        STATSD_METRIC *VAR_8 = (STATSD_METRIC *)FUNC_0(&VAR_3->index, (avl *)VAR_7);
        if(FUNC_10(VAR_8 != VAR_7)) {
            FUNC_5((void *)VAR_7->histogram.ext);
            FUNC_5((void *)VAR_7->name);
            FUNC_5((void *)VAR_7);
            VAR_7 = VAR_8;
        }
        else {
            FUNC_1(VAR_3);
            VAR_3->metrics++;
            VAR_7->next = VAR_3->first;
            VAR_3->first = VAR_7;
            FUNC_2(VAR_3);
        }
    }

    VAR_3->events++;
    return VAR_7;
}
