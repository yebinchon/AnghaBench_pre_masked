
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cgroup {char const* id; char const* chart_id; scalar_t__ hash_chart; int options; int pending_renames; int enabled; void* chart_title; struct cgroup* next; void* hash; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct cgroup* FUNC_0 (int,int) ;
 char const* FUNC_1 (char const*) ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_2 (struct cgroup*) ;
 struct cgroup* VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 void* FUNC_3 (char const*) ;
 scalar_t__ VAR_11 ;
 scalar_t__ FUNC_4 (char*,char*,int) ;
 int FUNC_5 (int ,char*,char const*,...) ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_6 (char*,char const*,char const*,char const*,...) ;
 int FUNC_7 (void*) ;
 int FUNC_8 (char*,scalar_t__,char const*) ;
 int FUNC_9 (struct cgroup*) ;
 void* FUNC_10 (char const*) ;
 scalar_t__ FUNC_11 (int ,char const*) ;
 int FUNC_12 (char*,int ,char*,void*) ;
 int FUNC_13 (char const*,char const*) ;
 char const* FUNC_14 (char const*) ;
 size_t FUNC_15 (char*) ;
 int FUNC_16 (char const*,char*,int) ;
 int FUNC_17 (char*,char const*,int ) ;
 int VAR_14 ;
 scalar_t__ FUNC_18 (int) ;

__attribute__((used)) static inline struct cgroup *FUNC_19(const char *VAR_15) {
    if(!VAR_15 || !*VAR_15) VAR_15 = "/";
    FUNC_5(VAR_4, "adding to list, cgroup with id '%s'", VAR_15);

    if(VAR_9 >= VAR_10) {
        FUNC_8("CGROUP: maximum number of cgroups reached (%d). Not adding cgroup '%s'", VAR_9, VAR_15);
        return ((void*)0);
    }

    int VAR_16 = FUNC_11(VAR_12, VAR_15)?VAR_6:0;
    struct cgroup *VAR_17 = FUNC_0(1, sizeof(struct cgroup));

    VAR_17->id = FUNC_14(VAR_15);
    VAR_17->hash = FUNC_10(VAR_17->id);

    VAR_17->chart_title = FUNC_3(VAR_15);

    VAR_17->chart_id = FUNC_1(VAR_15);
    VAR_17->hash_chart = FUNC_10(VAR_17->chart_id);

    if(VAR_11) VAR_17->options |= VAR_2;

    if(!VAR_8)
        VAR_8 = VAR_17;
    else {

        struct cgroup *VAR_18;
        for(VAR_18 = VAR_8; VAR_18->next ;VAR_18 = VAR_18->next) ;
        VAR_18->next = VAR_17;
    }

    VAR_9++;


    if(FUNC_11(VAR_13, VAR_17->id)) {

        VAR_17->pending_renames = 2;
        FUNC_2(VAR_17);

        FUNC_5(VAR_4, "cgroup '%s' renamed to '%s' (title: '%s')", VAR_17->id, VAR_17->chart_id, VAR_17->chart_title);
    }
    else
        FUNC_5(VAR_4, "cgroup '%s' will not be renamed - it matches the list of disabled cgroup renames (will be shown as '%s')", VAR_17->id, VAR_17->chart_id);

    int VAR_19 = 1;


    if(VAR_7) {
        if(FUNC_11(VAR_14, VAR_17->id) ||
                FUNC_11(VAR_14, VAR_17->chart_id)) {
            FUNC_5(VAR_4, "cgroup '%s' with chart id '%s' (title: '%s') matches systemd services cgroups", VAR_17->id, VAR_17->chart_id, VAR_17->chart_title);

            char VAR_20[VAR_0 + 1];
            VAR_17->options |= VAR_3;

            FUNC_17(VAR_20, VAR_17->id, VAR_0);
            char *VAR_21 = VAR_20;






            size_t VAR_22 = FUNC_15(VAR_21);
            while(VAR_22--) if(FUNC_18(VAR_21[VAR_22] == '/')) break;
            if(VAR_22) VAR_21 = &VAR_21[VAR_22 + 1];


            VAR_22 = FUNC_15(VAR_21);
            while(VAR_22--) if(FUNC_18(VAR_21[VAR_22] == '.')) break;
            if(VAR_22) VAR_21[VAR_22] = '\0';

            FUNC_7(VAR_17->chart_title);
            VAR_17->chart_title = FUNC_3(VAR_21);

            VAR_17->enabled = 1;
            VAR_19 = 0;

            FUNC_5(VAR_4, "cgroup '%s' renamed to '%s' (title: '%s')", VAR_17->id, VAR_17->chart_id, VAR_17->chart_title);
        }
        else
            FUNC_5(VAR_4, "cgroup '%s' with chart id '%s' (title: '%s') does not match systemd services groups", VAR_17->id, VAR_17->chart_id, VAR_17->chart_title);
    }

    if(VAR_19) {

        char VAR_23[VAR_5 + 1];
        FUNC_12(VAR_23, VAR_5, "enable cgroup %s", VAR_17->chart_title);
        VAR_17->enabled = (char) FUNC_4("plugin:cgroups", VAR_23, VAR_16);
    }


    if(VAR_17->enabled) {
        struct cgroup *VAR_24;
        for (VAR_24 = VAR_8; VAR_24; VAR_24 = VAR_24->next) {
            if (VAR_24 != VAR_17 && VAR_24->enabled && VAR_24->hash_chart == VAR_17->hash_chart && !FUNC_13(VAR_24->chart_id, VAR_17->chart_id)) {
                if (!FUNC_16(VAR_24->chart_id, "/system.slice/", 14) && !FUNC_16(VAR_17->chart_id, "/init.scope/system.slice/", 25)) {
                    FUNC_6("CGROUP: chart id '%s' already exists with id '%s' and is enabled. Swapping them by enabling cgroup with id '%s' and disabling cgroup with id '%s'.",
                          VAR_17->chart_id, VAR_24->id, VAR_17->id, VAR_24->id);
                    FUNC_5(VAR_4, "Control group with chart id '%s' already exists with id '%s' and is enabled. Swapping them by enabling cgroup with id '%s' and disabling cgroup with id '%s'.",
                          VAR_17->chart_id, VAR_24->id, VAR_17->id, VAR_24->id);
                    VAR_24->enabled = 0;
                    VAR_24->options |= VAR_1;
                }
                else {
                    FUNC_6("CGROUP: chart id '%s' already exists with id '%s' and is enabled and available. Disabling cgroup with id '%s'.",
                          VAR_17->chart_id, VAR_24->id, VAR_17->id);
                    FUNC_5(VAR_4, "Control group with chart id '%s' already exists with id '%s' and is enabled and available. Disabling cgroup with id '%s'.",
                          VAR_17->chart_id, VAR_24->id, VAR_17->id);
                    VAR_17->enabled = 0;
                    VAR_17->options |= VAR_1;
                }

                break;
            }
        }
    }

    if(VAR_17->enabled && !VAR_17->pending_renames && !(VAR_17->options & VAR_3))
        FUNC_9(VAR_17);

    FUNC_5(VAR_4, "ADDED CGROUP: '%s' with chart id '%s' and title '%s' as %s (default was %s)", VAR_17->id, VAR_17->chart_id, VAR_17->chart_title, (VAR_17->enabled)?"enabled":"disabled", (VAR_16)?"enabled":"disabled");

    return VAR_17;
}
