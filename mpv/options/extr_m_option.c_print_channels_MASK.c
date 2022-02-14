
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct m_channels {scalar_t__ num_chmaps; int * chmaps; scalar_t__ auto_safe; int set; } ;
typedef int m_option_t ;


 char* FUNC_0 (int *) ;
 char* FUNC_1 (int *,char*) ;
 char* FUNC_2 (char*,char*) ;

__attribute__((used)) static char *FUNC_3(const m_option_t *VAR_0, const void *VAR_1)
{
    const struct m_channels *VAR_2 = VAR_1;
    if (!VAR_2->set)
        return FUNC_1(((void*)0), "");
    if (VAR_2->auto_safe)
        return FUNC_1(((void*)0), "auto-safe");
    if (VAR_2->num_chmaps > 0) {
        char *VAR_3 = FUNC_1(((void*)0), "");
        for (int VAR_4 = 0; VAR_4 < VAR_2->num_chmaps; VAR_4++) {
            if (VAR_4 > 0)
                VAR_3 = FUNC_2(VAR_3, ",");
            VAR_3 = FUNC_2(VAR_3, FUNC_0(&VAR_2->chmaps[VAR_4]));
        }
        return VAR_3;
    }
    return FUNC_1(((void*)0), "auto");
}
