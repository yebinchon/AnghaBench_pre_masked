
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {TYPE_6__* first_block; } ;
typedef TYPE_3__ fz_stext_page ;
struct TYPE_11__ {TYPE_5__* first_char; struct TYPE_11__* next; } ;
typedef TYPE_4__ fz_stext_line ;
struct TYPE_12__ {int c; struct TYPE_12__* next; } ;
typedef TYPE_5__ fz_stext_char ;
struct TYPE_8__ {TYPE_4__* first_line; } ;
struct TYPE_9__ {TYPE_1__ t; } ;
struct TYPE_13__ {scalar_t__ type; TYPE_2__ u; struct TYPE_13__* next; } ;
typedef TYPE_6__ fz_stext_block ;
typedef int fz_output ;
typedef int fz_context ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (int *,int *,char) ;
 int FUNC_2 (int *,int *,char*) ;

void
FUNC_3(fz_context *VAR_1, fz_output *VAR_2, fz_stext_page *VAR_3)
{
 fz_stext_block *VAR_4;
 fz_stext_line *VAR_5;
 fz_stext_char *VAR_6;
 char VAR_7[10];
 int VAR_8, VAR_9;

 for (VAR_4 = VAR_3->first_block; VAR_4; VAR_4 = VAR_4->next)
 {
  if (VAR_4->type == VAR_0)
  {
   for (VAR_5 = VAR_4->u.t.first_line; VAR_5; VAR_5 = VAR_5->next)
   {
    for (VAR_6 = VAR_5->first_char; VAR_6; VAR_6 = VAR_6->next)
    {
     VAR_9 = FUNC_0(VAR_7, VAR_6->c);
     for (VAR_8 = 0; VAR_8 < VAR_9; VAR_8++)
      FUNC_1(VAR_1, VAR_2, VAR_7[VAR_8]);
    }
    FUNC_2(VAR_1, VAR_2, "\n");
   }
   FUNC_2(VAR_1, VAR_2, "\n");
  }
 }
}
