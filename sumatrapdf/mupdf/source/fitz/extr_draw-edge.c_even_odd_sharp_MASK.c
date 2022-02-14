
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int fz_solid_color_painter_t ;
typedef int fz_pixmap ;
typedef int fz_overprint ;
typedef int fz_irect ;
struct TYPE_5__ {int alen; TYPE_1__** active; } ;
typedef TYPE_2__ fz_gel ;
typedef int fz_context ;
struct TYPE_4__ {int x; } ;


 int FUNC_0 (int,int,int,int const*,int *,unsigned char*,int *,int *) ;

__attribute__((used)) static inline void
FUNC_1(fz_context *VAR_0, fz_gel *VAR_1, int VAR_2, const fz_irect *VAR_3, fz_pixmap *VAR_4, unsigned char *VAR_5, fz_solid_color_painter_t *VAR_6, fz_overprint *VAR_7)
{
 int VAR_8 = 0;
 int VAR_9 = 0;
 int VAR_10;
 for (VAR_10 = 0; VAR_10 < VAR_1->alen; VAR_10++)
 {
  if (!VAR_8)
   VAR_9 = VAR_1->active[VAR_10]->x;
  else
   FUNC_0(VAR_9, VAR_1->active[VAR_10]->x, VAR_2, VAR_3, VAR_4, VAR_5, VAR_6, VAR_7);
  VAR_8 = !VAR_8;
 }
}
