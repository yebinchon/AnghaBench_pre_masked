
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * texverts; int colors; int norms; int verts; } ;
typedef TYPE_1__ graphics_t ;


 int FUNC_0 (int ) ;

__attribute__((used)) static inline void FUNC_1(graphics_t *VAR_0)
{
 FUNC_0(VAR_0->verts);
 FUNC_0(VAR_0->norms);
 FUNC_0(VAR_0->colors);
 for (size_t VAR_1 = 0; VAR_1 < 16; VAR_1++)
  FUNC_0(VAR_0->texverts[VAR_1]);
}
