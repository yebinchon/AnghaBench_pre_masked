
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_15__ {int rrd_history_entries; int rrd_memory_mode; } ;
struct TYPE_14__ {TYPE_3__* apps; } ;
struct TYPE_13__ {int rrd_history_entries; int * dict; int rrd_memory_mode; int default_options; void* metrics; void* name; TYPE_2__* charts; void* source; struct TYPE_13__* next; } ;
struct TYPE_12__ {void* id; int chart_type; void* priority; void* units; void* context; void* family; void* title; void* name; void* source; struct TYPE_12__* next; } ;
struct TYPE_11__ {char* metric; void* metric_pattern; } ;
typedef TYPE_1__ STATSD_APP_CHART_DIM ;
typedef TYPE_2__ STATSD_APP_CHART ;
typedef TYPE_3__ STATSD_APP ;
typedef int RRDDIM_FLAGS ;
typedef int FILE ;
typedef int DICTIONARY ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 TYPE_1__* FUNC_0 (TYPE_3__*,TYPE_2__*,char*,char*,int,int,int ,int ) ;
 void* FUNC_1 (char*) ;
 void* FUNC_2 (int,int) ;
 int FUNC_3 (int ,char*,...) ;
 int * FUNC_4 (int ) ;
 char* FUNC_5 (int *,char*) ;
 int FUNC_6 (int *,char*,char*,scalar_t__) ;
 char* FUNC_7 (char*) ;
 int FUNC_8 (char*,...) ;
 int FUNC_9 (int *) ;
 int * FUNC_10 (char*,int,int *) ;
 int * FUNC_11 (char const*,char*) ;
 int FUNC_12 (char*) ;
 TYPE_7__* VAR_13 ;
 char* FUNC_13 (int) ;
 int FUNC_14 (char*) ;
 int FUNC_15 (char*) ;
 int FUNC_16 (char*,char**,int) ;
 int FUNC_17 (char*) ;
 int FUNC_18 (char*) ;
 void* FUNC_19 (char*,int *,int ) ;
 int FUNC_20 (void*) ;
 int FUNC_21 (char*,int ,char*,size_t,char const*) ;
 TYPE_6__ VAR_14 ;
 int FUNC_22 (char*) ;
 char* FUNC_23 (char*,char) ;
 scalar_t__ FUNC_24 (char*,char*) ;
 void* FUNC_25 (char const*) ;
 char* FUNC_26 (char*,char*) ;
 int FUNC_27 (char*,size_t,char const*) ;
 scalar_t__ FUNC_28 (char*) ;
 scalar_t__ FUNC_29 (char*,char*,int) ;
 int * FUNC_30 (char*,char*) ;
 char* FUNC_31 (char*) ;
 scalar_t__ FUNC_32 (int *) ;

__attribute__((used)) static int FUNC_33(const char *VAR_15, STATSD_APP *VAR_16, STATSD_APP_CHART *VAR_17, DICTIONARY *VAR_18) {
    FUNC_3(VAR_2, "STATSD configuration reading file '%s'", VAR_15);

    char *VAR_19 = FUNC_13(VAR_10 + 1);

    FILE *VAR_20 = FUNC_11(VAR_15, "r");
    if(!VAR_20) {
        FUNC_8("STATSD: cannot open file '%s'.", VAR_15);
        FUNC_12(VAR_19);
        return -1;
    }

    size_t VAR_21 = 0;
    char *VAR_22;
    while(FUNC_10(VAR_19, VAR_10, VAR_20) != ((void*)0)) {
        VAR_19[VAR_10] = '\0';
        VAR_21++;

        VAR_22 = FUNC_31(VAR_19);
        if (!VAR_22 || *VAR_22 == '#') {
            FUNC_3(VAR_2, "STATSD: ignoring line %zu of file '%s', it is empty.", VAR_21, VAR_15);
            continue;
        }

        FUNC_3(VAR_2, "STATSD: processing line %zu of file '%s': %s", VAR_21, VAR_15, VAR_19);

        if(*VAR_22 == 'i' && FUNC_29(VAR_22, "include", 7) == 0) {
            VAR_22 = FUNC_31(&VAR_22[7]);
            if(VAR_22 && *VAR_22) {
                char *VAR_23;
                if(*VAR_22 == '/')
                    VAR_23 = FUNC_25(VAR_22);
                else {


                    char *VAR_24 = FUNC_25(VAR_15);
                    char *VAR_25 = FUNC_7(VAR_24);
                    VAR_23 = FUNC_26(VAR_25, VAR_22);
                    FUNC_12(VAR_24);
                }
                FUNC_33(VAR_23, VAR_16, VAR_17, VAR_18);
                FUNC_12(VAR_23);
            }
            else
                FUNC_8("STATSD: ignoring line %zu of file '%s', include filename is empty", VAR_21, VAR_15);

            continue;
        }

        int VAR_26 = (int) FUNC_28(VAR_22);
        if (*VAR_22 == '[' && VAR_22[VAR_26 - 1] == ']') {

            VAR_22[VAR_26 - 1] = '\0';
            VAR_22++;

            if (!FUNC_24(VAR_22, "app")) {

                VAR_16 = FUNC_2(sizeof(STATSD_APP), 1);
                VAR_16->name = FUNC_25("unnamed");
                VAR_16->rrd_memory_mode = VAR_13->rrd_memory_mode;
                VAR_16->rrd_history_entries = VAR_13->rrd_history_entries;

                VAR_16->next = VAR_14.apps;
                VAR_14.apps = VAR_16;
                VAR_17 = ((void*)0);
                VAR_18 = ((void*)0);

                {
                    char VAR_27[VAR_3 + 1];
                    FUNC_21(VAR_27, VAR_3, "%zu@%s", VAR_21, VAR_15);
                    VAR_16->source = FUNC_25(VAR_27);
                }
            }
            else if(VAR_16) {
                if(!FUNC_24(VAR_22, "dictionary")) {
                    if(!VAR_16->dict)
                        VAR_16->dict = FUNC_4(VAR_0);

                    VAR_18 = VAR_16->dict;
                }
                else {
                    VAR_18 = ((void*)0);


                    VAR_17 = FUNC_2(sizeof(STATSD_APP_CHART), 1);
                    FUNC_14(VAR_22);
                    VAR_17->id = FUNC_25(VAR_22);
                    VAR_17->name = FUNC_25(VAR_22);
                    VAR_17->title = FUNC_25("Statsd chart");
                    VAR_17->context = FUNC_25(VAR_22);
                    VAR_17->family = FUNC_25("overview");
                    VAR_17->units = FUNC_25("value");
                    VAR_17->priority = VAR_4;
                    VAR_17->chart_type = VAR_8;

                    VAR_17->next = VAR_16->charts;
                    VAR_16->charts = VAR_17;

                    {
                        char VAR_28[VAR_3 + 1];
                        FUNC_21(VAR_28, VAR_3, "%zu@%s", VAR_21, VAR_15);
                        VAR_17->source = FUNC_25(VAR_28);
                    }
                }
            }
            else
                FUNC_8("STATSD: ignoring line %zu ('%s') of file '%s', [app] is not defined.", VAR_21, VAR_22, VAR_15);

            continue;
        }

        if(!VAR_16) {
            FUNC_8("STATSD: ignoring line %zu ('%s') of file '%s', it is outside all sections.", VAR_21, VAR_22, VAR_15);
            continue;
        }

        char *VAR_29 = VAR_22;
        char *VAR_30 = FUNC_23(VAR_22, '=');
        if(!VAR_30) {
            FUNC_8("STATSD: ignoring line %zu ('%s') of file '%s', there is no = in it.", VAR_21, VAR_22, VAR_15);
            continue;
        }
        *VAR_30 = '\0';
        VAR_30++;

        VAR_29 = FUNC_31(VAR_29);
        VAR_30 = FUNC_31(VAR_30);

        if(!VAR_29 || *VAR_29 == '#') {
            FUNC_8("STATSD: ignoring line %zu of file '%s', name is empty.", VAR_21, VAR_15);
            continue;
        }
        if(!VAR_30) {
            FUNC_3(VAR_1, "STATSD: ignoring line %zu of file '%s', value is empty.", VAR_21, VAR_15);
            continue;
        }

        if(FUNC_32(VAR_18)) {


            FUNC_6(VAR_18, VAR_29, VAR_30, FUNC_28(VAR_30) + 1);
        }
        else if(!VAR_17) {


            if(!FUNC_24(VAR_29, "name")) {
                FUNC_12((void *)VAR_16->name);
                FUNC_15(VAR_30);
                VAR_16->name = FUNC_25(VAR_30);
            }
            else if (!FUNC_24(VAR_29, "metrics")) {
                FUNC_20(VAR_16->metrics);
                VAR_16->metrics = FUNC_19(VAR_30, ((void*)0), VAR_9);
            }
            else if (!FUNC_24(VAR_29, "private charts")) {
                if (!FUNC_24(VAR_30, "yes") || !FUNC_24(VAR_30, "on"))
                    VAR_16->default_options |= VAR_11;
                else
                    VAR_16->default_options &= ~VAR_11;
            }
            else if (!FUNC_24(VAR_29, "gaps when not collected")) {
                if (!FUNC_24(VAR_30, "yes") || !FUNC_24(VAR_30, "on"))
                    VAR_16->default_options |= VAR_12;
            }
            else if (!FUNC_24(VAR_29, "memory mode")) {
                VAR_16->rrd_memory_mode = FUNC_17(VAR_30);
            }
            else if (!FUNC_24(VAR_29, "history")) {
                VAR_16->rrd_history_entries = FUNC_1(VAR_30);
                if (VAR_16->rrd_history_entries < 5)
                    VAR_16->rrd_history_entries = 5;
            }
            else {
                FUNC_8("STATSD: ignoring line %zu ('%s') of file '%s'. Unknown keyword for the [app] section.", VAR_21, VAR_29, VAR_15);
                continue;
            }
        }
        else {


            if(!FUNC_24(VAR_29, "name")) {
                FUNC_12((void *)VAR_17->name);
                FUNC_14(VAR_30);
                VAR_17->name = FUNC_25(VAR_30);
            }
            else if(!FUNC_24(VAR_29, "title")) {
                FUNC_12((void *)VAR_17->title);
                VAR_17->title = FUNC_25(VAR_30);
            }
            else if (!FUNC_24(VAR_29, "family")) {
                FUNC_12((void *)VAR_17->family);
                VAR_17->family = FUNC_25(VAR_30);
            }
            else if (!FUNC_24(VAR_29, "context")) {
                FUNC_12((void *)VAR_17->context);
                FUNC_14(VAR_30);
                VAR_17->context = FUNC_25(VAR_30);
            }
            else if (!FUNC_24(VAR_29, "units")) {
                FUNC_12((void *)VAR_17->units);
                VAR_17->units = FUNC_25(VAR_30);
            }
            else if (!FUNC_24(VAR_29, "priority")) {
                VAR_17->priority = FUNC_1(VAR_30);
            }
            else if (!FUNC_24(VAR_29, "type")) {
                VAR_17->chart_type = FUNC_18(VAR_30);
            }
            else if (!FUNC_24(VAR_29, "dimension")) {

                char *VAR_31[10];
                FUNC_16(VAR_30, VAR_31, 10);

                int VAR_32 = 0;
                size_t VAR_33 = 0;
                char *VAR_34 = VAR_31[VAR_33++];

                if(FUNC_24(VAR_34, "pattern") == 0) {
                    VAR_34 = VAR_31[VAR_33++];
                    VAR_32 = 1;
                }

                char *VAR_35 = VAR_31[VAR_33++];
                char *VAR_36 = VAR_31[VAR_33++];
                char *VAR_37 = VAR_31[VAR_33++];
                char *VAR_38 = VAR_31[VAR_33++];
                char *VAR_39 = VAR_31[VAR_33++];

                RRDDIM_FLAGS VAR_40 = VAR_7;
                if(VAR_39 && *VAR_39) {
                    if(FUNC_30(VAR_39, "hidden") != ((void*)0)) VAR_40 |= VAR_6;
                    if(FUNC_30(VAR_39, "noreset") != ((void*)0)) VAR_40 |= VAR_5;
                    if(FUNC_30(VAR_39, "nooverflow") != ((void*)0)) VAR_40 |= VAR_5;
                }

                if(!VAR_32) {
                    if(VAR_16->dict) {
                        if(VAR_35 && *VAR_35) {
                            char *VAR_41 = FUNC_5(VAR_16->dict, VAR_35);
                            if(VAR_41) VAR_35 = VAR_41;
                        }
                        else {
                            VAR_35 = FUNC_5(VAR_16->dict, VAR_34);
                        }
                    }

                    if(!VAR_35 || !*VAR_35)
                        VAR_35 = VAR_34;
                }

                STATSD_APP_CHART_DIM *VAR_42 = FUNC_0(
                        VAR_16
                        , VAR_17
                        , VAR_34
                        , VAR_35
                        , (VAR_37 && *VAR_37)?FUNC_22(VAR_37):1
                        , (VAR_38 && *VAR_38)?FUNC_22(VAR_38):1
                        , VAR_40
                        , FUNC_27(VAR_36, VAR_21, VAR_15)
                );

                if(VAR_32)
                    VAR_42->metric_pattern = FUNC_19(VAR_42->metric, ((void*)0), VAR_9);
            }
            else {
                FUNC_8("STATSD: ignoring line %zu ('%s') of file '%s'. Unknown keyword for the [%s] section.", VAR_21, VAR_29, VAR_15, VAR_17->id);
                continue;
            }
        }
    }

    FUNC_12(VAR_19);
    FUNC_9(VAR_20);
    return 0;
}
