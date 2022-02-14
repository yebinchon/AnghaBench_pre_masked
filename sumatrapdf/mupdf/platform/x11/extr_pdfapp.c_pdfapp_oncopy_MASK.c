
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_8__ ;
typedef struct TYPE_19__ TYPE_7__ ;
typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_15__ {int selr; TYPE_4__* page_text; } ;
typedef TYPE_3__ pdfapp_t ;
struct TYPE_16__ {TYPE_7__* first_block; } ;
typedef TYPE_4__ fz_stext_page ;
struct TYPE_17__ {TYPE_6__* first_char; struct TYPE_17__* next; } ;
typedef TYPE_5__ fz_stext_line ;
struct TYPE_18__ {int c; int quad; struct TYPE_18__* next; } ;
typedef TYPE_6__ fz_stext_char ;
struct TYPE_13__ {TYPE_5__* first_line; } ;
struct TYPE_14__ {TYPE_1__ t; } ;
struct TYPE_19__ {scalar_t__ type; TYPE_2__ u; struct TYPE_19__* next; } ;
typedef TYPE_7__ fz_stext_block ;
struct TYPE_20__ {scalar_t__ x1; scalar_t__ x0; scalar_t__ y1; scalar_t__ y0; } ;
typedef TYPE_8__ fz_rect ;
typedef int fz_matrix ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 TYPE_8__ FUNC_1 (int ) ;
 TYPE_8__ FUNC_2 (int ,int ) ;
 int FUNC_3 (int *,TYPE_3__*) ;

void FUNC_4(pdfapp_t *VAR_1, unsigned short *VAR_2, int VAR_3)
{
 fz_matrix VAR_4;
 fz_stext_page *VAR_5 = VAR_1->page_text;
 int VAR_6, VAR_7;
 fz_stext_block *VAR_8;
 fz_stext_line *VAR_9;
 fz_stext_char *VAR_10;
 fz_rect VAR_11;

 FUNC_3(&VAR_4, VAR_1);
 VAR_4 = FUNC_0(VAR_4);
 VAR_11 = FUNC_2(VAR_1->selr, VAR_4);

 VAR_6 = 0;
 VAR_7 = 0;

 for (VAR_8 = VAR_5->first_block; VAR_8; VAR_8 = VAR_8->next)
 {
  if (VAR_8->type != VAR_0)
   continue;

  for (VAR_9 = VAR_8->u.t.first_line; VAR_9; VAR_9 = VAR_9->next)
  {
   int VAR_12 = 0;
   for (VAR_10 = VAR_9->first_char; VAR_10; VAR_10 = VAR_10->next)
   {
    fz_rect VAR_13 = FUNC_1(VAR_10->quad);
    int VAR_14 = VAR_10->c;
    if (VAR_14 < 32)
     VAR_14 = 0xFFFD;
    if (VAR_13.x1 >= VAR_11.x0 && VAR_13.x0 <= VAR_11.x1 && VAR_13.y1 >= VAR_11.y0 && VAR_13.y0 <= VAR_11.y1)
    {
     VAR_12 = 1;
     if (VAR_7)
     {




      if (VAR_6 < VAR_3 - 1)
       VAR_2[VAR_6++] = '\n';
      VAR_7 = 0;
     }
     if (VAR_6 < VAR_3 - 1)
      VAR_2[VAR_6++] = VAR_14;
    }
   }
   if (VAR_12)
    VAR_7 = 1;
  }
 }

 VAR_2[VAR_6] = 0;
}
