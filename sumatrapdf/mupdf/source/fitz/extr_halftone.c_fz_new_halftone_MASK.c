
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int fz_pixmap ;
struct TYPE_4__ {int refs; int n; int ** comp; } ;
typedef TYPE_1__ fz_halftone ;
typedef int fz_context ;


 TYPE_1__* FUNC_0 (int ,char*) ;
 int FUNC_1 (int *,int) ;

__attribute__((used)) static fz_halftone *
FUNC_2(fz_context *VAR_0, int VAR_1)
{
 fz_halftone *VAR_2;
 int VAR_3;

 VAR_2 = FUNC_0(FUNC_1(VAR_0, sizeof(fz_halftone) + (VAR_1-1)*sizeof(fz_pixmap *)), "fz_halftone");
 VAR_2->refs = 1;
 VAR_2->n = VAR_1;
 for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3++)
  VAR_2->comp[VAR_3] = ((void*)0);

 return VAR_2;
}
