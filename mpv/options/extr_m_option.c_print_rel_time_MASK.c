
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct m_rel_time {int type; int pos; } ;
typedef int m_option_t ;






 int FUNC_0 (int ) ;
 char* FUNC_1 (int *,char*,char*,...) ;
 char* FUNC_2 (int *,char*) ;

__attribute__((used)) static char *FUNC_3(const m_option_t *VAR_0, const void *VAR_1)
{
    const struct m_rel_time *VAR_2 = VAR_1;
    switch(VAR_2->type) {
    case 131:
        return FUNC_1(((void*)0), "%g", VAR_2->pos);
    case 128:
        return FUNC_1(((void*)0), "%s%g",
            (VAR_2->pos >= 0) ? "+" : "-", FUNC_0(VAR_2->pos));
    case 130:
        return FUNC_1(((void*)0), "#%g", VAR_2->pos);
    case 129:
        return FUNC_1(((void*)0), "%g%%", VAR_2->pos);
    }
    return FUNC_2(((void*)0), "none");
}
