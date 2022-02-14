
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mp_log {int dummy; } ;
struct TYPE_2__ {int * name; } ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (struct mp_log*,char*,...) ;

void FUNC_1(struct mp_log *VAR_1)
{
    FUNC_0(VAR_1, "\n");
    for (int VAR_2 = 0; VAR_0[VAR_2].name != ((void*)0); VAR_2++)
        FUNC_0(VAR_1, "%s\n", VAR_0[VAR_2].name);
}
