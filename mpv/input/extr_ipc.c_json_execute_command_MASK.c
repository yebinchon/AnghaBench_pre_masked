
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_25__ TYPE_7__ ;
typedef struct TYPE_24__ TYPE_4__ ;
typedef struct TYPE_23__ TYPE_3__ ;
typedef struct TYPE_22__ TYPE_2__ ;
typedef struct TYPE_21__ TYPE_1__ ;


struct mpv_handle {int dummy; } ;
struct mp_log {int dummy; } ;
struct TYPE_23__ {char* string; TYPE_2__* list; } ;
struct TYPE_24__ {scalar_t__ format; TYPE_3__ u; } ;
typedef TYPE_4__ mpv_node ;
typedef int int64_t ;
struct TYPE_21__ {char* string; int int64; } ;
struct TYPE_25__ {scalar_t__ format; TYPE_1__ u; } ;
struct TYPE_22__ {int num; TYPE_7__* values; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (void*,TYPE_4__*,char**,int) ;
 int FUNC_1 (char**,TYPE_4__*) ;
 struct mp_log* FUNC_2 (struct mpv_handle*) ;
 int FUNC_3 (struct mp_log*,char*,char*) ;
 int FUNC_4 (struct mp_log*,char*) ;
 int FUNC_5 () ;
 char* FUNC_6 (struct mpv_handle*) ;
 int FUNC_7 (struct mpv_handle*,TYPE_4__*,TYPE_4__*) ;
 char* FUNC_8 (int) ;
 char* FUNC_9 (int) ;
 int FUNC_10 (char*) ;
 int FUNC_11 (TYPE_4__*) ;
 int FUNC_12 (struct mpv_handle*,char*,scalar_t__,TYPE_4__*) ;
 char* FUNC_13 (struct mpv_handle*,char*) ;
 int FUNC_14 (struct mpv_handle*) ;
 TYPE_4__* FUNC_15 (TYPE_4__*,int ) ;
 int FUNC_16 (void*,TYPE_4__*,char*,TYPE_4__*) ;
 int FUNC_17 (void*,TYPE_4__*,char*,int ) ;
 int FUNC_18 (void*,TYPE_4__*,char*) ;
 int FUNC_19 (void*,TYPE_4__*,char*,char const*) ;
 int FUNC_20 (struct mpv_handle*,int ,char*,scalar_t__) ;
 int FUNC_21 (struct mpv_handle*,int,int) ;
 int FUNC_22 (struct mpv_handle*,char*) ;
 int FUNC_23 (struct mpv_handle*,char*,scalar_t__,TYPE_7__*) ;
 int FUNC_24 (struct mpv_handle*,int ) ;
 TYPE_4__* FUNC_25 (TYPE_4__*,char*) ;
 scalar_t__ FUNC_26 (char const*,char const*) ;
 char* FUNC_27 (char*,char*) ;
 char* FUNC_28 (void*,char*) ;

__attribute__((used)) static char *FUNC_29(struct mpv_handle *VAR_7, void *VAR_8,
                                  char *VAR_9)
{
    int VAR_10;
    const char *VAR_11 = ((void*)0);
    struct mp_log *VAR_12 = FUNC_2(VAR_7);

    mpv_node VAR_13;
    mpv_node VAR_14 = {.format = VAR_5, .u.list = ((void*)0)};
    mpv_node *VAR_15 = ((void*)0);

    VAR_10 = FUNC_0(VAR_8, &VAR_13, &VAR_9, 50);
    if (VAR_10 < 0) {
        FUNC_3(VAR_12, "malformed JSON received: '%s'\n", VAR_9);
        VAR_10 = VAR_0;
        goto error;
    }

    if (VAR_13.format != VAR_5) {
        VAR_10 = VAR_0;
        goto error;
    }

    VAR_15 = FUNC_25(&VAR_13, "request_id");
    if (VAR_15 && VAR_15->format != VAR_2) {
        FUNC_4(VAR_12, "'request_id' must be an integer. Using other types is "
                "deprecated and will trigger an error in the future!\n");
    }

    mpv_node *VAR_16 = FUNC_25(&VAR_13, "command");
    if (!VAR_16 ||
        (VAR_16->format != VAR_4) ||
        !VAR_16->u.list->num)
    {
        VAR_10 = VAR_0;
        goto error;
    }

    mpv_node *VAR_17 = FUNC_15(VAR_16, 0);
    if (!VAR_17 || (VAR_17->format != VAR_6)) {
        VAR_10 = VAR_0;
        goto error;
    }

    VAR_11 = VAR_17->u.string;

    if (!FUNC_26("client_name", VAR_11)) {
        const char *VAR_18 = FUNC_6(VAR_7);
        FUNC_19(VAR_8, &VAR_14, "data", VAR_18);
        VAR_10 = VAR_1;
    } else if (!FUNC_26("get_time_us", VAR_11)) {
        int64_t VAR_19 = FUNC_14(VAR_7);
        FUNC_17(VAR_8, &VAR_14, "data", VAR_19);
        VAR_10 = VAR_1;
    } else if (!FUNC_26("get_version", VAR_11)) {
        int64_t VAR_20 = FUNC_5();
        FUNC_17(VAR_8, &VAR_14, "data", VAR_20);
        VAR_10 = VAR_1;
    } else if (!FUNC_26("get_property", VAR_11)) {
        mpv_node VAR_21;

        if (VAR_16->u.list->num != 2) {
            VAR_10 = VAR_0;
            goto error;
        }

        if (VAR_16->u.list->values[1].format != VAR_6) {
            VAR_10 = VAR_0;
            goto error;
        }

        VAR_10 = FUNC_12(VAR_7, VAR_16->u.list->values[1].u.string,
                              VAR_3, &VAR_21);
        if (VAR_10 >= 0) {
            FUNC_16(VAR_8, &VAR_14, "data", &VAR_21);
            FUNC_11(&VAR_21);
        }
    } else if (!FUNC_26("get_property_string", VAR_11)) {
        if (VAR_16->u.list->num != 2) {
            VAR_10 = VAR_0;
            goto error;
        }

        if (VAR_16->u.list->values[1].format != VAR_6) {
            VAR_10 = VAR_0;
            goto error;
        }

        char *VAR_22 = FUNC_13(VAR_7,
                                        VAR_16->u.list->values[1].u.string);
        if (VAR_22) {
            FUNC_19(VAR_8, &VAR_14, "data", VAR_22);
            FUNC_10(VAR_22);
        } else {
            FUNC_18(VAR_8, &VAR_14, "data");
        }
    } else if (!FUNC_26("set_property", VAR_11) ||
        !FUNC_26("set_property_string", VAR_11))
    {
        if (VAR_16->u.list->num != 3) {
            VAR_10 = VAR_0;
            goto error;
        }

        if (VAR_16->u.list->values[1].format != VAR_6) {
            VAR_10 = VAR_0;
            goto error;
        }

        VAR_10 = FUNC_23(VAR_7, VAR_16->u.list->values[1].u.string,
                              VAR_3, &VAR_16->u.list->values[2]);
    } else if (!FUNC_26("observe_property", VAR_11)) {
        if (VAR_16->u.list->num != 3) {
            VAR_10 = VAR_0;
            goto error;
        }

        if (VAR_16->u.list->values[1].format != VAR_2) {
            VAR_10 = VAR_0;
            goto error;
        }

        if (VAR_16->u.list->values[2].format != VAR_6) {
            VAR_10 = VAR_0;
            goto error;
        }

        VAR_10 = FUNC_20(VAR_7,
                                  VAR_16->u.list->values[1].u.int64,
                                  VAR_16->u.list->values[2].u.string,
                                  VAR_3);
    } else if (!FUNC_26("observe_property_string", VAR_11)) {
        if (VAR_16->u.list->num != 3) {
            VAR_10 = VAR_0;
            goto error;
        }

        if (VAR_16->u.list->values[1].format != VAR_2) {
            VAR_10 = VAR_0;
            goto error;
        }

        if (VAR_16->u.list->values[2].format != VAR_6) {
            VAR_10 = VAR_0;
            goto error;
        }

        VAR_10 = FUNC_20(VAR_7,
                                  VAR_16->u.list->values[1].u.int64,
                                  VAR_16->u.list->values[2].u.string,
                                  VAR_6);
    } else if (!FUNC_26("unobserve_property", VAR_11)) {
        if (VAR_16->u.list->num != 2) {
            VAR_10 = VAR_0;
            goto error;
        }

        if (VAR_16->u.list->values[1].format != VAR_2) {
            VAR_10 = VAR_0;
            goto error;
        }

        VAR_10 = FUNC_24(VAR_7,
                                    VAR_16->u.list->values[1].u.int64);
    } else if (!FUNC_26("request_log_messages", VAR_11)) {
        if (VAR_16->u.list->num != 2) {
            VAR_10 = VAR_0;
            goto error;
        }

        if (VAR_16->u.list->values[1].format != VAR_6) {
            VAR_10 = VAR_0;
            goto error;
        }

        VAR_10 = FUNC_22(VAR_7,
                                      VAR_16->u.list->values[1].u.string);
    } else if (!FUNC_26("enable_event", VAR_11) ||
               !FUNC_26("disable_event", VAR_11))
    {
        bool VAR_23 = !FUNC_26("enable_event", VAR_11);

        if (VAR_16->u.list->num != 2) {
            VAR_10 = VAR_0;
            goto error;
        }

        if (VAR_16->u.list->values[1].format != VAR_6) {
            VAR_10 = VAR_0;
            goto error;
        }

        char *VAR_24 = VAR_16->u.list->values[1].u.string;
        if (FUNC_26(VAR_24, "all") == 0) {
            for (int VAR_25 = 0; VAR_25 < 64; VAR_25++)
                FUNC_21(VAR_7, VAR_25, VAR_23);
            VAR_10 = VAR_1;
        } else {
            int VAR_26 = -1;
            for (int VAR_27 = 0; VAR_27 < 64; VAR_27++) {
                const char *VAR_28 = FUNC_9(VAR_27);
                if (VAR_28 && FUNC_26(VAR_28, VAR_24) == 0)
                    VAR_26 = VAR_27;
            }
            if (VAR_26 < 0) {
                VAR_10 = VAR_0;
                goto error;
            }
            VAR_10 = FUNC_21(VAR_7, VAR_26, VAR_23);
        }
    } else {
        mpv_node VAR_29;

        VAR_10 = FUNC_7(VAR_7, VAR_16, &VAR_29);
        if (VAR_10 >= 0)
            FUNC_16(VAR_8, &VAR_14, "data", &VAR_29);
    }

error:




    if (VAR_15) {
        FUNC_16(VAR_8, &VAR_14, "request_id", VAR_15);
    } else {
        FUNC_17(VAR_8, &VAR_14, "request_id", 0);
    }

    FUNC_19(VAR_8, &VAR_14, "error", FUNC_8(VAR_10));

    char *VAR_30 = FUNC_28(VAR_8, "");
    FUNC_1(&VAR_30, &VAR_14);
    VAR_30 = FUNC_27(VAR_30, "\n");

    return VAR_30;
}
