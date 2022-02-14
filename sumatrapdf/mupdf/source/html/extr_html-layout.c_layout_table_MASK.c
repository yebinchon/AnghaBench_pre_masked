
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int hb_buffer_t ;
struct TYPE_9__ {int em; int w; scalar_t__ y; scalar_t__ b; scalar_t__ type; scalar_t__ x; struct TYPE_9__* next; struct TYPE_9__* down; TYPE_1__* style; } ;
typedef TYPE_2__ fz_html_box ;
typedef int fz_context ;
struct TYPE_8__ {int font_size; int width; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 void* FUNC_0 (int ,int,int,int) ;
 int FUNC_1 (int *,TYPE_2__*,int,scalar_t__,scalar_t__*,float,float,int ,int *) ;
 int FUNC_2 (int *,TYPE_2__*,TYPE_2__*,float,int *) ;

__attribute__((used)) static void FUNC_3(fz_context *VAR_2, fz_html_box *VAR_3, fz_html_box *VAR_4, float VAR_5, hb_buffer_t *VAR_6)
{
 fz_html_box *VAR_7, *VAR_8, *VAR_9;
 int VAR_10, VAR_11 = 0;

 VAR_3->em = FUNC_0(VAR_3->style->font_size, VAR_4->em, VAR_4->em, VAR_4->em);
 VAR_3->x = VAR_4->x;
 VAR_3->w = FUNC_0(VAR_3->style->width, VAR_3->em, VAR_4->w, VAR_4->w);
 VAR_3->y = VAR_3->b = VAR_4->b;

 for (VAR_7 = VAR_3->down; VAR_7; VAR_7 = VAR_7->next)
 {
  VAR_10 = 0;
  for (VAR_8 = VAR_7->down; VAR_8; VAR_8 = VAR_8->next)
   ++VAR_10;
  if (VAR_10 > VAR_11)
   VAR_11 = VAR_10;
 }

 for (VAR_7 = VAR_3->down; VAR_7; VAR_7 = VAR_7->next)
 {
  VAR_10 = 0;

  VAR_7->em = FUNC_0(VAR_7->style->font_size, VAR_3->em, VAR_3->em, VAR_3->em);
  VAR_7->x = VAR_3->x;
  VAR_7->w = VAR_3->w;
  VAR_7->y = VAR_7->b = VAR_3->b;

  for (VAR_8 = VAR_7->down; VAR_8; VAR_8 = VAR_8->next)
  {
   float VAR_12 = VAR_7->w / VAR_11;

   VAR_8->em = FUNC_0(VAR_8->style->font_size, VAR_7->em, VAR_7->em, VAR_7->em);
   VAR_8->y = VAR_8->b = VAR_7->y;
   VAR_8->x = VAR_7->x + VAR_10 * VAR_12;
   VAR_8->w = VAR_12;

   for (VAR_9 = VAR_8->down; VAR_9; VAR_9 = VAR_9->next)
   {
    if (VAR_9->type == VAR_0)
     FUNC_1(VAR_2, VAR_9, VAR_8->em, VAR_8->x, &VAR_8->b, VAR_8->w, VAR_5, 0, VAR_6);
    else if (VAR_9->type == VAR_1)
     FUNC_2(VAR_2, VAR_9, VAR_8, VAR_5, VAR_6);
    VAR_8->b = VAR_9->b;
   }

   if (VAR_8->b > VAR_7->b)
    VAR_7->b = VAR_8->b;

   ++VAR_10;
  }

  VAR_3->b = VAR_7->b;
 }
}
