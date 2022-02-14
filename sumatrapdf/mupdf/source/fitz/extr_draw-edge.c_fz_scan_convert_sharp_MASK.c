
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int fz_solid_color_painter_t ;
typedef int fz_pixmap ;
typedef int fz_overprint ;
struct TYPE_13__ {int y0; int y1; } ;
typedef TYPE_2__ fz_irect ;
struct TYPE_14__ {scalar_t__ alen; int len; TYPE_1__* edges; } ;
typedef TYPE_3__ fz_gel ;
typedef int fz_context ;
struct TYPE_12__ {int y; } ;


 int FUNC_0 (int *,TYPE_3__*,int) ;
 int FUNC_1 (int *,TYPE_3__*,int,TYPE_2__ const*,int *,unsigned char*,int *,int *) ;
 int FUNC_2 (int *,TYPE_3__*,int,int*) ;
 int FUNC_3 (int *,TYPE_3__*,int,TYPE_2__ const*,int *,unsigned char*,int *,int *) ;

__attribute__((used)) static void
FUNC_4(fz_context *VAR_0,
 fz_gel *VAR_1, int VAR_2, const fz_irect *VAR_3,
 fz_pixmap *VAR_4, unsigned char *VAR_5, fz_solid_color_painter_t *VAR_6, fz_overprint *VAR_7)
{
 int VAR_8 = 0;
 int VAR_9 = VAR_1->edges[0].y;
 int VAR_10;

 VAR_1->alen = 0;


 if (VAR_9 < VAR_3->y0)
 {
  while (VAR_1->alen > 0 || VAR_8 < VAR_1->len)
  {
   VAR_10 = FUNC_2(VAR_0, VAR_1, VAR_9, &VAR_8);
   VAR_9 += VAR_10;
   if (VAR_9 >= VAR_3->y0)
   {
    VAR_9 = VAR_3->y0;
    break;
   }
  }
 }


 while (VAR_1->alen > 0 || VAR_8 < VAR_1->len)
 {
  VAR_10 = FUNC_2(VAR_0, VAR_1, VAR_9, &VAR_8);

  if (VAR_1->alen == 0)
   VAR_9 += VAR_10;
  else
  {
   int VAR_11;
   if (VAR_10 >= VAR_3->y1 - VAR_9)
    VAR_10 = VAR_3->y1 - VAR_9;

   VAR_11 = VAR_10;
   while (VAR_11--)
   {
    if (VAR_2)
     FUNC_1(VAR_0, VAR_1, VAR_9, VAR_3, VAR_4, VAR_5, VAR_6, VAR_7);
    else
     FUNC_3(VAR_0, VAR_1, VAR_9, VAR_3, VAR_4, VAR_5, VAR_6, VAR_7);
    VAR_9++;
   }
  }
  if (VAR_9 >= VAR_3->y1)
   break;

  FUNC_0(VAR_0, VAR_1, VAR_10);
 }
}
