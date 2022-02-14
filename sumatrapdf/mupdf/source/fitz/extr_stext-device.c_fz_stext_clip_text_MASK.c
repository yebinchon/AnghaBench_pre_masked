
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {struct TYPE_10__* next; } ;
typedef TYPE_1__ fz_text_span ;
struct TYPE_11__ {TYPE_1__* head; } ;
typedef TYPE_2__ fz_text ;
struct TYPE_12__ {int new_obj; TYPE_2__ const* lasttext; scalar_t__ color; } ;
typedef TYPE_3__ fz_stext_device ;
typedef int fz_rect ;
typedef int fz_matrix ;
typedef int fz_device ;
typedef int fz_context ;


 int FUNC_0 (int *,TYPE_2__ const*) ;
 TYPE_2__ const* FUNC_1 (int *,TYPE_2__ const*) ;
 int FUNC_2 (int *,TYPE_3__*,TYPE_1__*,int ) ;

__attribute__((used)) static void
FUNC_3(fz_context *VAR_0, fz_device *VAR_1, const fz_text *VAR_2, fz_matrix VAR_3, fz_rect VAR_4)
{
 fz_stext_device *VAR_5 = (fz_stext_device*)VAR_1;
 fz_text_span *VAR_6;
 if (VAR_2 == VAR_5->lasttext)
  return;
 VAR_5->color = 0;
 VAR_5->new_obj = 1;
 for (VAR_6 = VAR_2->head; VAR_6; VAR_6 = VAR_6->next)
  FUNC_2(VAR_0, VAR_5, VAR_6, VAR_3);
 FUNC_0(VAR_0, VAR_5->lasttext);
 VAR_5->lasttext = FUNC_1(VAR_0, VAR_2);
}
