
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {TYPE_7__* first_block; } ;
typedef TYPE_3__ fz_stext_page ;
struct TYPE_11__ {void* bbox; TYPE_6__* first_char; struct TYPE_11__* next; } ;
typedef TYPE_4__ fz_stext_line ;
struct TYPE_12__ {TYPE_3__* page; } ;
typedef TYPE_5__ fz_stext_device ;
struct TYPE_13__ {int quad; struct TYPE_13__* next; } ;
typedef TYPE_6__ fz_stext_char ;
struct TYPE_8__ {TYPE_4__* first_line; } ;
struct TYPE_9__ {TYPE_1__ t; } ;
struct TYPE_14__ {scalar_t__ type; void* bbox; TYPE_2__ u; struct TYPE_14__* next; } ;
typedef TYPE_7__ fz_stext_block ;
typedef void* fz_rect ;
typedef int fz_device ;
typedef int fz_context ;


 scalar_t__ VAR_0 ;
 void* FUNC_0 (int ) ;
 void* FUNC_1 (void*,void*) ;

__attribute__((used)) static void
FUNC_2(fz_context *VAR_1, fz_device *VAR_2)
{
 fz_stext_device *VAR_3 = (fz_stext_device*)VAR_2;
 fz_stext_page *VAR_4 = VAR_3->page;
 fz_stext_block *VAR_5;
 fz_stext_line *VAR_6;
 fz_stext_char *VAR_7;

 for (VAR_5 = VAR_4->first_block; VAR_5; VAR_5 = VAR_5->next)
 {
  if (VAR_5->type != VAR_0)
   continue;
  for (VAR_6 = VAR_5->u.t.first_line; VAR_6; VAR_6 = VAR_6->next)
  {
   for (VAR_7 = VAR_6->first_char; VAR_7; VAR_7 = VAR_7->next)
   {
    fz_rect VAR_8 = FUNC_0(VAR_7->quad);
    if (VAR_7 == VAR_6->first_char)
     VAR_6->bbox = VAR_8;
    else
     VAR_6->bbox = FUNC_1(VAR_6->bbox, VAR_8);
   }
   VAR_5->bbox = FUNC_1(VAR_5->bbox, VAR_6->bbox);
  }
 }



}
