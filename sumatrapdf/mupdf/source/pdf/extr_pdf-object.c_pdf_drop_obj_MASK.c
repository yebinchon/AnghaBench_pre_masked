
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_7__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__ kind; int refs; } ;
typedef TYPE_1__ pdf_obj ;
typedef int fz_context ;
struct TYPE_11__ {TYPE_1__* text; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_1__* VAR_2 ;
 scalar_t__ VAR_3 ;
 TYPE_7__* FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (int *,TYPE_1__*,int *) ;
 int FUNC_2 (int *,TYPE_1__*) ;
 int FUNC_3 (int *,TYPE_1__*) ;
 int FUNC_4 (int *,TYPE_1__*) ;

void
FUNC_5(fz_context *VAR_4, pdf_obj *VAR_5)
{
 if (VAR_5 >= VAR_2)
 {
  if (FUNC_1(VAR_4, VAR_5, &VAR_5->refs))
  {
   if (VAR_5->kind == VAR_0)
    FUNC_3(VAR_4, VAR_5);
   else if (VAR_5->kind == VAR_1)
    FUNC_4(VAR_4, VAR_5);
   else if (VAR_5->kind == VAR_3)
   {
    FUNC_2(VAR_4, FUNC_0(VAR_5)->text);
    FUNC_2(VAR_4, VAR_5);
   }
   else
    FUNC_2(VAR_4, VAR_5);
  }
 }
}
