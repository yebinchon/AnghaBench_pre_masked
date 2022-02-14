
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct TYPE_4__* verts; struct TYPE_4__* paths; struct TYPE_4__* points; } ;
typedef TYPE_1__ NVGpathCache ;


 int FUNC_0 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_1(NVGpathCache* VAR_0)
{
 if (VAR_0 == ((void*)0)) return;
 if (VAR_0->points != ((void*)0)) FUNC_0(VAR_0->points);
 if (VAR_0->paths != ((void*)0)) FUNC_0(VAR_0->paths);
 if (VAR_0->verts != ((void*)0)) FUNC_0(VAR_0->verts);
 FUNC_0(VAR_0);
}
