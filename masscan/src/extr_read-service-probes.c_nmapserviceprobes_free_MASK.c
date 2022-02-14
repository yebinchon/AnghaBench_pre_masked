
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct NmapServiceProbeList {struct NmapServiceProbeList* list; scalar_t__ count; } ;


 int FUNC_0 (struct NmapServiceProbeList*) ;
 int FUNC_1 (struct NmapServiceProbeList) ;

void
FUNC_2(struct NmapServiceProbeList *VAR_0)
{
    unsigned VAR_1;

    if (VAR_0 == ((void*)0))
        return;

    for (VAR_1=0; VAR_0->count; VAR_1++) {
        FUNC_1(VAR_0->list[VAR_1]);
    }

    if (VAR_0->list)
        FUNC_0(VAR_0->list);
    FUNC_0(VAR_0);
}
