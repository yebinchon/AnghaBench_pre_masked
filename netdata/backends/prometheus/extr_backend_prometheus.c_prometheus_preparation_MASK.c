
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ time_t ;
struct TYPE_4__ {int hostname; } ;
typedef TYPE_1__ RRDHOST ;
typedef int PROMETHEUS_OUTPUT_OPTIONS ;
typedef int BUFFER ;
typedef int BACKEND_OPTIONS ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *,char*,int ,char*,char const*,char*,unsigned long,char*,unsigned long,unsigned long) ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_2 (char const*,TYPE_1__*,scalar_t__) ;

__attribute__((used)) static inline time_t FUNC_3(RRDHOST *VAR_5, BUFFER *VAR_6, BACKEND_OPTIONS VAR_7, const char *VAR_8, time_t VAR_9, PROMETHEUS_OUTPUT_OPTIONS VAR_10) {
    if(!VAR_8 || !*VAR_8) VAR_8 = "default";

    time_t VAR_11 = FUNC_2(VAR_8, VAR_5, VAR_9);

    int VAR_12 = 0;
    if(!VAR_11) {
        VAR_11 = VAR_9 - VAR_4;
        VAR_12 = 1;
    }

    if(VAR_11 > VAR_9) {

        VAR_11 = VAR_9 - VAR_4;
    }

    if(VAR_10 & VAR_3) {
        char *VAR_13;
        if(FUNC_0(VAR_7) == VAR_0)
            VAR_13 = "as collected";
        else if(FUNC_0(VAR_7) == VAR_1)
            VAR_13 = "average";
        else if(FUNC_0(VAR_7) == VAR_2)
            VAR_13 = "sum";
        else
            VAR_13 = "unknown";

        FUNC_1(VAR_6, "# COMMENT netdata \"%s\" to %sprometheus \"%s\", source \"%s\", last seen %lu %s, time range %lu to %lu\n\n"
                , VAR_5->hostname
                , (VAR_12)?"FIRST SEEN ":""
                , VAR_8
                , VAR_13
                , (unsigned long)((VAR_12)?0:(VAR_9 - VAR_11))
                , (VAR_12)?"never":"seconds ago"
                , (unsigned long)VAR_11, (unsigned long)VAR_9
        );
    }

    return VAR_11;
}
