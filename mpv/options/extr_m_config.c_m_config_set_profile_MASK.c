
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct m_profile {int num_opts; int * opts; } ;
struct m_config {scalar_t__ profile_depth; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct m_config*,char*,char*) ;
 int FUNC_1 (struct m_config*,char*,...) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int ) ;
 struct m_profile* FUNC_3 (struct m_config*,char*) ;
 int FUNC_4 (struct m_config*,int ,int ,int) ;

int FUNC_5(struct m_config *VAR_3, char *VAR_4, int VAR_5)
{
    struct m_profile *VAR_6 = FUNC_3(VAR_3, VAR_4);
    if (!VAR_6) {
        FUNC_1(VAR_3, "Unknown profile '%s'.\n", VAR_4);
        return VAR_1;
    }
    FUNC_0(VAR_3, "Applying profile '%s'...\n", VAR_4);

    if (VAR_3->profile_depth > VAR_0) {
        FUNC_1(VAR_3, "WARNING: Profile inclusion too deep.\n");
        return VAR_1;
    }
    VAR_3->profile_depth++;
    for (int VAR_7 = 0; VAR_7 < VAR_6->num_opts; VAR_7++) {
        FUNC_4(VAR_3,
                                FUNC_2(VAR_6->opts[2 * VAR_7]),
                                FUNC_2(VAR_6->opts[2 * VAR_7 + 1]),
                                VAR_5 | VAR_2);
    }
    VAR_3->profile_depth--;

    return 0;
}
