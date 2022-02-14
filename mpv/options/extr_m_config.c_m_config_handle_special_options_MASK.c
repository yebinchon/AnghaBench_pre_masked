
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct m_config_option {char* name; } ;
struct m_config {scalar_t__ recursion_depth; scalar_t__ profile_depth; int log; scalar_t__ is_toplevel; scalar_t__ use_profiles; int includefunc_ctx; int (* includefunc ) (int ,char*,int) ;int profiles; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct m_config*,char*) ;
 int FUNC_1 (struct m_config*,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (struct m_config*) ;
 int FUNC_4 (struct m_config*,int) ;
 int FUNC_5 (struct m_config*,char*) ;
 int FUNC_6 (struct m_config*,char*,int) ;
 int VAR_5 ;
 int FUNC_7 (int ,char*,int ) ;
 int FUNC_8 (struct m_config*,int ) ;
 scalar_t__ FUNC_9 (char*,char*) ;
 int FUNC_10 (int ,char*,int) ;

__attribute__((used)) static int FUNC_11(struct m_config *VAR_6,
                                           struct m_config_option *VAR_7,
                                           void *VAR_8, int VAR_9)
{
    if (VAR_6->use_profiles && FUNC_9(VAR_7->name, "profile") == 0) {
        char **VAR_10 = *(char ***)VAR_8;

        if (VAR_10 && VAR_10[0] && !VAR_10[1] && FUNC_9(VAR_10[0], "help") == 0) {
            if (!VAR_6->profiles) {
                FUNC_1(VAR_6, "No profiles have been defined.\n");
                return VAR_1;
            }
            FUNC_3(VAR_6);
            return VAR_1;
        }

        for (int VAR_11 = 0; VAR_10 && VAR_10[VAR_11]; VAR_11++) {
            int VAR_12 = FUNC_6(VAR_6, VAR_10[VAR_11], VAR_9);
            if (VAR_12 < 0)
                return VAR_12;
        }
        return 0;
    }

    if (VAR_6->includefunc && FUNC_9(VAR_7->name, "include") == 0) {
        char *VAR_13 = *(char **)VAR_8;
        if (!VAR_13 || !VAR_13[0])
            return VAR_3;
        if (VAR_6->recursion_depth >= VAR_0) {
            FUNC_0(VAR_6, "Maximum 'include' nesting depth exceeded.\n");
            return VAR_2;
        }
        VAR_6->recursion_depth += 1;
        VAR_6->includefunc(VAR_6->includefunc_ctx, VAR_13, VAR_9);
        VAR_6->recursion_depth -= 1;
        if (VAR_6->recursion_depth == 0 && VAR_6->profile_depth == 0)
            FUNC_4(VAR_6, VAR_9);
        return 1;
    }

    if (VAR_6->use_profiles && FUNC_9(VAR_7->name, "show-profile") == 0)
        return FUNC_8(VAR_6, FUNC_2(*(char **)VAR_8));

    if (VAR_6->is_toplevel && (FUNC_9(VAR_7->name, "h") == 0 ||
                                FUNC_9(VAR_7->name, "help") == 0))
    {
        char *VAR_14 = *(char **)VAR_8;
        FUNC_7(VAR_6->log, "%s", VAR_5);
        if (VAR_14 && VAR_14[0])
            FUNC_5(VAR_6, VAR_14);
        return VAR_1;
    }

    if (FUNC_9(VAR_7->name, "list-options") == 0) {
        FUNC_5(VAR_6, "*");
        return VAR_1;
    }

    return VAR_4;
}
