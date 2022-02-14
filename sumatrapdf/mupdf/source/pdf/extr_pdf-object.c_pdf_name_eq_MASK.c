
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_7__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ kind; } ;
typedef TYPE_1__ pdf_obj ;
typedef int fz_context ;
struct TYPE_10__ {int n; } ;


 TYPE_7__* FUNC_0 (TYPE_1__*) ;
 TYPE_1__* VAR_0 ;
 TYPE_1__* VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ,int ) ;

int FUNC_3(fz_context *VAR_3, pdf_obj *VAR_4, pdf_obj *VAR_5)
{
 FUNC_1(VAR_4);
 FUNC_1(VAR_5);
 if (VAR_4 <= VAR_0 || VAR_5 <= VAR_0)
  return 0;
 if (VAR_4 < VAR_1 || VAR_5 < VAR_1)
  return (VAR_4 == VAR_5);
 if (VAR_4->kind == VAR_2 && VAR_5->kind == VAR_2)
  return !FUNC_2(FUNC_0(VAR_4)->n, FUNC_0(VAR_5)->n);
 return 0;
}
