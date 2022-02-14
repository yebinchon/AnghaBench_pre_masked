
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mp_log {int dummy; } ;
struct m_property {int name; } ;


 int FUNC_0 (struct mp_log*,char*,...) ;

void FUNC_1(struct mp_log *VAR_0,
                                  const struct m_property *VAR_1)
{
    int VAR_2 = 0;

    FUNC_0(VAR_0, "Name\n\n");
    for (int VAR_3 = 0; VAR_1[VAR_3].name; VAR_3++) {
        const struct m_property *VAR_4 = &VAR_1[VAR_3];
        FUNC_0(VAR_0, " %s\n", VAR_4->name);
        VAR_2++;
    }
    FUNC_0(VAR_0, "\nTotal: %d properties\n", VAR_2);
}
