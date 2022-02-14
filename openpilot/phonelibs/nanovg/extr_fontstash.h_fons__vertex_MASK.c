
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {float* verts; int nverts; float* tcoords; unsigned int* colors; } ;
typedef TYPE_1__ FONScontext ;



__attribute__((used)) static __inline void FUNC_0(FONScontext* VAR_0, float VAR_1, float VAR_2, float VAR_3, float VAR_4, unsigned int VAR_5)
{
 VAR_0->verts[VAR_0->nverts*2+0] = VAR_1;
 VAR_0->verts[VAR_0->nverts*2+1] = VAR_2;
 VAR_0->tcoords[VAR_0->nverts*2+0] = VAR_3;
 VAR_0->tcoords[VAR_0->nverts*2+1] = VAR_4;
 VAR_0->colors[VAR_0->nverts] = VAR_5;
 VAR_0->nverts++;
}
