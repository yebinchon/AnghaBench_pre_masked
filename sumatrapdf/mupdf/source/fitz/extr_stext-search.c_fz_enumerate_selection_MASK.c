
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct callbacks {int arg; int (* on_line ) (int *,int ,TYPE_4__*) ;int (* on_char ) (int *,int ,TYPE_4__*,TYPE_5__*) ;} ;
struct TYPE_14__ {TYPE_6__* first_block; } ;
typedef TYPE_3__ fz_stext_page ;
struct TYPE_15__ {TYPE_5__* first_char; struct TYPE_15__* next; } ;
typedef TYPE_4__ fz_stext_line ;
struct TYPE_16__ {struct TYPE_16__* next; } ;
typedef TYPE_5__ fz_stext_char ;
struct TYPE_12__ {TYPE_4__* first_line; } ;
struct TYPE_13__ {TYPE_1__ t; } ;
struct TYPE_17__ {scalar_t__ type; TYPE_2__ u; struct TYPE_17__* next; } ;
typedef TYPE_6__ fz_stext_block ;
typedef int fz_point ;
typedef int fz_context ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_3__*,int ) ;
 int FUNC_1 (int *,int ,TYPE_4__*,TYPE_5__*) ;
 int FUNC_2 (int *,int ,TYPE_4__*) ;

__attribute__((used)) static void
FUNC_3(fz_context *VAR_1, fz_stext_page *VAR_2, fz_point VAR_3, fz_point VAR_4, struct callbacks *VAR_5)
{
 fz_stext_block *VAR_6;
 fz_stext_line *VAR_7;
 fz_stext_char *VAR_8;
 int VAR_9, VAR_10, VAR_11;
 int VAR_12;

 VAR_10 = FUNC_0(VAR_2, VAR_3);
 VAR_11 = FUNC_0(VAR_2, VAR_4);

 if (VAR_10 > VAR_11)
  VAR_9 = VAR_10, VAR_10 = VAR_11, VAR_11 = VAR_9;

 if (VAR_10 == VAR_11)
  return;

 VAR_12 = 0;
 VAR_9 = 0;
 for (VAR_6 = VAR_2->first_block; VAR_6; VAR_6 = VAR_6->next)
 {
  if (VAR_6->type != VAR_0)
   continue;
  for (VAR_7 = VAR_6->u.t.first_line; VAR_7; VAR_7 = VAR_7->next)
  {
   for (VAR_8 = VAR_7->first_char; VAR_8; VAR_8 = VAR_8->next)
   {
    if (!VAR_12)
     if (VAR_9 == VAR_10)
      VAR_12 = 1;
    if (VAR_12)
     VAR_5->on_char(VAR_1, VAR_5->arg, VAR_7, VAR_8);
    if (++VAR_9 == VAR_11)
     return;
   }
   if (VAR_12)
    VAR_5->on_line(VAR_1, VAR_5->arg, VAR_7);
  }
 }
}
