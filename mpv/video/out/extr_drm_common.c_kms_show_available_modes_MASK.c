
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct mp_log {int dummy; } ;
struct TYPE_4__ {unsigned int count_modes; TYPE_2__* modes; } ;
typedef TYPE_1__ drmModeConnector ;
struct TYPE_5__ {int vdisplay; int hdisplay; int name; } ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (struct mp_log*,char*,unsigned int,int ,int ,int ,int ) ;

__attribute__((used)) static void FUNC_2(
    struct mp_log *VAR_0, const drmModeConnector *VAR_1)
{
    for (unsigned int VAR_2 = 0; VAR_2 < VAR_1->count_modes; VAR_2++) {
        FUNC_1(VAR_0, "  Mode %d: %s (%dx%d@%.2fHz)\n", VAR_2,
                VAR_1->modes[VAR_2].name,
                VAR_1->modes[VAR_2].hdisplay,
                VAR_1->modes[VAR_2].vdisplay,
                FUNC_0(&VAR_1->modes[VAR_2]));
    }
}
