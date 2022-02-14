
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mp_log {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct mp_log*,char*,...) ;
 scalar_t__** VAR_2 ;
 scalar_t__** VAR_3 ;

void FUNC_1(struct mp_log *VAR_4)
{
    FUNC_0(VAR_4, "Speakers:\n");
    for (int VAR_5 = 0; VAR_5 < VAR_1; VAR_5++) {
        if (VAR_2[VAR_5][0])
            FUNC_0(VAR_4, "    %-16s (%s)\n",
                    VAR_2[VAR_5][0], VAR_2[VAR_5][1]);
    }
    FUNC_0(VAR_4, "Standard layouts:\n");
    for (int VAR_6 = 0; VAR_3[VAR_6][0]; VAR_6++) {
        FUNC_0(VAR_4, "    %-16s (%s)\n",
                 VAR_3[VAR_6][0], VAR_3[VAR_6][1]);
    }
    for (int VAR_7 = 0; VAR_7 < VAR_0; VAR_7++)
        FUNC_0(VAR_4, "    unknown%d\n", VAR_7 + 1);
}
