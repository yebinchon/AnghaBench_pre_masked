
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_8__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


typedef int uint32_t ;
typedef int time_t ;
struct TYPE_15__ {TYPE_8__* data; int header; } ;
struct web_client {TYPE_1__ response; int id; } ;
typedef long long calculated_number ;
struct TYPE_18__ {int expires; } ;
struct TYPE_17__ {int update_every; char* units; int status; long long value; } ;
struct TYPE_16__ {int last_accessed_time; int update_every; char* name; char* units; scalar_t__ gap_when_lost_iterations_above; } ;
typedef TYPE_2__ RRDSET ;
typedef int RRDHOST ;
typedef TYPE_3__ RRDCALC ;
typedef int BUFFER ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 long long VAR_4 ;





 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int * FUNC_0 (int) ;
 int FUNC_1 (TYPE_8__*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_8__*) ;
 int FUNC_4 (TYPE_8__*,char*,...) ;
 int FUNC_5 (int *,char*) ;
 int FUNC_6 (TYPE_8__*,char const*,long long,char const*,char const*,char const*,int,int,int,int,int) ;
 char* FUNC_7 (int *) ;
 int FUNC_8 (int ,char*,int ,char const*,char const*,...) ;
 scalar_t__ FUNC_9 (long long) ;
 scalar_t__ FUNC_10 (long long) ;
 char* FUNC_11 (char**,char*) ;
 int FUNC_12 () ;
 TYPE_3__* FUNC_13 (TYPE_2__*,char const*) ;
 int FUNC_14 (TYPE_2__*,TYPE_8__*,long long*,char*,int,long long,long long,int,int ,int,int *,int *,int*) ;
 TYPE_2__* FUNC_15 (int *,char const*) ;
 TYPE_2__* FUNC_16 (int *,char const*) ;
 scalar_t__ FUNC_17 (TYPE_2__*) ;
 int FUNC_18 (char const*) ;
 int FUNC_19 (char const*) ;
 int FUNC_20 (char const*,char*) ;
 int FUNC_21 (char*,int) ;
 int FUNC_22 (char*) ;

int FUNC_23(RRDHOST *VAR_8, struct web_client *VAR_9, char *VAR_10) {
    int VAR_11 = VAR_1;
    FUNC_1(VAR_9->response.data);

    BUFFER *VAR_12 = ((void*)0);

    const char *VAR_13 = ((void*)0)
    , *VAR_14 = ((void*)0)
    , *VAR_15 = ((void*)0)
    , *VAR_16 = ((void*)0)
    , *VAR_17 = ((void*)0)
    , *VAR_18 = ((void*)0)
    , *VAR_19 = ((void*)0)
    , *VAR_20 = ((void*)0)
    , *VAR_21 = ((void*)0)
    , *VAR_22 = ((void*)0)
    , *VAR_23 = ((void*)0)
    , *VAR_24 = ((void*)0)
    , *VAR_25 = ((void*)0)
    , *VAR_26 = ((void*)0)
    , *VAR_27 = ((void*)0)
    , *VAR_28 = ((void*)0);

    int VAR_29 = VAR_5;
    uint32_t VAR_30 = 0x00000000;

    while(VAR_10) {
        char *VAR_31 = FUNC_11(&VAR_10, "&");
        if(!VAR_31 || !*VAR_31) continue;

        char *VAR_32 = FUNC_11(&VAR_31, "=");
        if(!VAR_32 || !*VAR_32) continue;
        if(!VAR_31 || !*VAR_31) continue;

        FUNC_8(VAR_0, "%llu: API v1 badge.svg query param '%s' with value '%s'", VAR_9->id, VAR_32, VAR_31);




        if(!FUNC_20(VAR_32, "chart")) VAR_13 = VAR_31;
        else if(!FUNC_20(VAR_32, "dimension") || !FUNC_20(VAR_32, "dim") || !FUNC_20(VAR_32, "dimensions") || !FUNC_20(VAR_32, "dims")) {
            if(!VAR_12)
                VAR_12 = FUNC_0(100);

            FUNC_5(VAR_12, "|");
            FUNC_5(VAR_12, VAR_31);
        }
        else if(!FUNC_20(VAR_32, "after")) VAR_15 = VAR_31;
        else if(!FUNC_20(VAR_32, "before")) VAR_14 = VAR_31;
        else if(!FUNC_20(VAR_32, "points")) VAR_16 = VAR_31;
        else if(!FUNC_20(VAR_32, "group")) {
            VAR_29 = FUNC_21(VAR_31, VAR_5);
        }
        else if(!FUNC_20(VAR_32, "options")) {
            VAR_30 |= FUNC_22(VAR_31);
        }
        else if(!FUNC_20(VAR_32, "label")) VAR_19 = VAR_31;
        else if(!FUNC_20(VAR_32, "units")) VAR_20 = VAR_31;
        else if(!FUNC_20(VAR_32, "label_color")) VAR_21 = VAR_31;
        else if(!FUNC_20(VAR_32, "value_color")) VAR_22 = VAR_31;
        else if(!FUNC_20(VAR_32, "multiply")) VAR_17 = VAR_31;
        else if(!FUNC_20(VAR_32, "divide")) VAR_18 = VAR_31;
        else if(!FUNC_20(VAR_32, "refresh")) VAR_23 = VAR_31;
        else if(!FUNC_20(VAR_32, "precision")) VAR_24 = VAR_31;
        else if(!FUNC_20(VAR_32, "scale")) VAR_25 = VAR_31;
        else if(!FUNC_20(VAR_32, "fixed_width_lbl")) VAR_27 = VAR_31;
        else if(!FUNC_20(VAR_32, "fixed_width_val")) VAR_28 = VAR_31;
        else if(!FUNC_20(VAR_32, "alarm")) VAR_26 = VAR_31;
    }

    int VAR_33 = -1;
    int VAR_34 = -1;

    if(VAR_27 && *VAR_27
        && VAR_28 && *VAR_28) {
        VAR_33 = FUNC_18(VAR_27);
        VAR_34 = FUNC_18(VAR_28);
    }

    if(!VAR_13 || !*VAR_13) {
        FUNC_3(VAR_9->response.data);
        FUNC_4(VAR_9->response.data, "No chart id is given at the request.");
        goto cleanup;
    }

    int VAR_35 = (VAR_25 && *VAR_25)?FUNC_18(VAR_25):100;

    RRDSET *VAR_36 = FUNC_15(VAR_8, VAR_13);
    if(!VAR_36) VAR_36 = FUNC_16(VAR_8, VAR_13);
    if(!VAR_36) {
        FUNC_3(VAR_9->response.data);
        FUNC_6(VAR_9->response.data, "chart not found", VAR_4, "", ((void*)0), ((void*)0), -1, VAR_35, 0, -1, -1);
        VAR_11 = VAR_3;
        goto cleanup;
    }
    VAR_36->last_accessed_time = FUNC_12();

    RRDCALC *VAR_37 = ((void*)0);
    if(VAR_26) {
        VAR_37 = FUNC_13(VAR_36, VAR_26);
        if (!VAR_37) {
            FUNC_3(VAR_9->response.data);
            FUNC_6(VAR_9->response.data, "alarm not found", VAR_4, "", ((void*)0), ((void*)0), -1, VAR_35, 0, -1, -1);
            VAR_11 = VAR_3;
            goto cleanup;
        }
    }

    long long VAR_38 = (VAR_17 && *VAR_17 )?FUNC_19(VAR_17):1;
    long long VAR_39 = (VAR_18 && *VAR_18 )?FUNC_19(VAR_18):1;
    long long VAR_40 = (VAR_14 && *VAR_14 )?FUNC_19(VAR_14):0;
    long long VAR_41 = (VAR_15 && *VAR_15 )?FUNC_19(VAR_15):-VAR_36->update_every;
    int VAR_42 = (VAR_16 && *VAR_16 )?FUNC_18(VAR_16):1;
    int VAR_43 = (VAR_24 && *VAR_24)?FUNC_18(VAR_24):-1;

    if(!VAR_38) VAR_38 = 1;
    if(!VAR_39) VAR_39 = 1;

    int VAR_44 = 0;
    if(VAR_23 && *VAR_23) {
        if(!FUNC_20(VAR_23, "auto")) {
            if(VAR_37) VAR_44 = VAR_37->update_every;
            else if(VAR_30 & VAR_6)
                VAR_44 = VAR_36->update_every;
            else {
                VAR_44 = (int)(VAR_40 - VAR_41);
                if(VAR_44 < 0) VAR_44 = -VAR_44;
            }
        }
        else {
            VAR_44 = FUNC_18(VAR_23);
            if(VAR_44 < 0) VAR_44 = -VAR_44;
        }
    }

    if(!VAR_19) {
        if(VAR_26) {
            char *VAR_45 = (char *)VAR_26;
            while(*VAR_45) {
                if(*VAR_45 == '_') *VAR_45 = ' ';
                VAR_45++;
            }
            VAR_19 = VAR_26;
        }
        else if(VAR_12) {
            const char *VAR_46 = FUNC_7(VAR_12);
            if(*VAR_46 == '|') VAR_46++;
            VAR_19 = VAR_46;
        }
        else
            VAR_19 = VAR_36->name;
    }
    if(!VAR_20) {
        if(VAR_26) {
            if(VAR_37->units)
                VAR_20 = VAR_37->units;
            else
                VAR_20 = "";
        }
        else if(VAR_30 & VAR_7)
            VAR_20 = "%";
        else
            VAR_20 = VAR_36->units;
    }

    FUNC_8(VAR_0, "%llu: API command 'badge.svg' for chart '%s', alarm '%s', dimensions '%s', after '%lld', before '%lld', points '%d', group '%d', options '0x%08x'"
          , VAR_9->id
          , VAR_13
          , VAR_26?VAR_26:""
          , (VAR_12)?FUNC_7(VAR_12):""
          , VAR_41
          , VAR_40
          , VAR_42
          , VAR_29
          , VAR_30
    );

    if(VAR_37) {
        if (VAR_44 > 0) {
            FUNC_4(VAR_9->response.header, "Refresh: %d\r\n", VAR_44);
            VAR_9->response.data->expires = FUNC_12() + VAR_44;
        }
        else FUNC_3(VAR_9->response.data);

        if(!VAR_22) {
            switch(VAR_37->status) {
                case 131:
                    VAR_22 = "red";
                    break;

                case 128:
                    VAR_22 = "orange";
                    break;

                case 132:
                    VAR_22 = "brightgreen";
                    break;

                case 130:
                    VAR_22 = "lightgrey";
                    break;

                case 129:
                    VAR_22 = "#000";
                    break;

                default:
                    VAR_22 = "grey";
                    break;
            }
        }

        FUNC_6(VAR_9->response.data,
                VAR_19,
                (FUNC_10(VAR_37->value)||FUNC_9(VAR_37->value)) ? VAR_37->value : VAR_37->value * VAR_38 / VAR_39,
                VAR_20,
                VAR_21,
                VAR_22,
                VAR_43,
                VAR_35,
                VAR_30,
                VAR_33,
                VAR_34
        );
        VAR_11 = VAR_3;
    }
    else {
        time_t VAR_47 = 0;
        int VAR_48 = 1;
        calculated_number VAR_49 = VAR_4;
        VAR_11 = VAR_2;


        if (FUNC_17(VAR_36) >= (FUNC_12() - (VAR_36->update_every * VAR_36->gap_when_lost_iterations_above)))
            VAR_11 = FUNC_14(VAR_36, VAR_9->response.data, &VAR_49, (VAR_12) ? FUNC_7(VAR_12) : ((void*)0)
                                      , VAR_42, VAR_41, VAR_40, VAR_29, 0, VAR_30, ((void*)0), &VAR_47, &VAR_48);


        if (VAR_11 != VAR_3) {
            FUNC_3(VAR_9->response.data);
            VAR_48 = 1;
            VAR_49 = 0;
            VAR_11 = VAR_3;
        }
        else if (VAR_44 > 0) {
            FUNC_4(VAR_9->response.header, "Refresh: %d\r\n", VAR_44);
            VAR_9->response.data->expires = FUNC_12() + VAR_44;
        }
        else FUNC_3(VAR_9->response.data);


        FUNC_6(VAR_9->response.data,
                VAR_19,
                (VAR_48)?VAR_4:(VAR_49 * VAR_38 / VAR_39),
                VAR_20,
                VAR_21,
                VAR_22,
                VAR_43,
                VAR_35,
                VAR_30,
                VAR_33,
                VAR_34
        );
    }

    cleanup:
    FUNC_2(VAR_12);
    return VAR_11;
}
