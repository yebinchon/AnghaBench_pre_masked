
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int unknown_types; int timers; int sets; int histograms; int meters; int counters; int gauges; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,char*,char const*,char const*,char const*,char const*,char const*) ;
 int FUNC_1 (char*,char const*,char const*,char const*) ;
 TYPE_1__ VAR_7 ;
 int FUNC_2 (int *,char const*,int ) ;
 int FUNC_3 (int ,char const*,char const*) ;
 int FUNC_4 (int ,char const*,char const*) ;
 int FUNC_5 (int ,char const*,char const*) ;
 int FUNC_6 (int ,char const*,char const*) ;
 int FUNC_7 (int ,char const*) ;
 int FUNC_8 (int ,char const*,char const*) ;
 scalar_t__ FUNC_9 (int) ;

__attribute__((used)) static void FUNC_10(const char *VAR_8, const char *VAR_9, const char *VAR_10, const char *VAR_11, const char *VAR_12) {
    (void)VAR_12;

    FUNC_0(VAR_0, "STATSD: raw metric '%s', value '%s', type '%s', sampling '%s', tags '%s'", VAR_8?VAR_8:"(null)", VAR_9?VAR_9:"(null)", VAR_10?VAR_10:"(null)", VAR_11?VAR_11:"(null)", VAR_12?VAR_12:"(null)");

    if(FUNC_9(!VAR_8 || !*VAR_8)) return;
    if(FUNC_9(!VAR_10 || !*VAR_10)) VAR_10 = "m";

    char VAR_13 = VAR_10[0], VAR_14 = VAR_10[1];

    if(FUNC_9(VAR_13 == 'g' && VAR_14 == '\0')) {
        FUNC_4(
                FUNC_2(&VAR_7.gauges, VAR_8, VAR_2),
                VAR_9, VAR_11);
    }
    else if(FUNC_9((VAR_13 == 'c' || VAR_13 == 'C') && VAR_14 == '\0')) {


        FUNC_3(
                FUNC_2(&VAR_7.counters, VAR_8, VAR_1),
                VAR_9, VAR_11);
    }
    else if(FUNC_9(VAR_13 == 'm' && VAR_14 == '\0')) {
        FUNC_6(
                FUNC_2(&VAR_7.meters, VAR_8, VAR_4),
                VAR_9, VAR_11);
    }
    else if(FUNC_9(VAR_13 == 'h' && VAR_14 == '\0')) {
        FUNC_5(
                FUNC_2(&VAR_7.histograms, VAR_8, VAR_3),
                VAR_9, VAR_11);
    }
    else if(FUNC_9(VAR_13 == 's' && VAR_14 == '\0')) {
        FUNC_7(
                FUNC_2(&VAR_7.sets, VAR_8, VAR_5),
                VAR_9);
    }
    else if(FUNC_9(VAR_13 == 'm' && VAR_14 == 's' && VAR_10[2] == '\0')) {
        FUNC_8(
                FUNC_2(&VAR_7.timers, VAR_8, VAR_6),
                VAR_9, VAR_11);
    }
    else {
        VAR_7.unknown_types++;
        FUNC_1("STATSD: metric '%s' with value '%s' is sent with unknown metric type '%s'", VAR_8, VAR_9?VAR_9:"", VAR_10);
    }
}
