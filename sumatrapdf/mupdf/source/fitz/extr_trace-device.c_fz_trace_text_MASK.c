
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {struct TYPE_5__* next; } ;
typedef TYPE_1__ fz_text_span ;
struct TYPE_6__ {TYPE_1__* head; } ;
typedef TYPE_2__ fz_text ;
typedef int fz_output ;
typedef int fz_context ;


 int FUNC_0 (int *,int *,TYPE_1__*,int) ;

__attribute__((used)) static void
FUNC_1(fz_context *VAR_0, fz_output *VAR_1, const fz_text *VAR_2, int VAR_3)
{
 fz_text_span *VAR_4;
 for (VAR_4 = VAR_2->head; VAR_4; VAR_4 = VAR_4->next)
  FUNC_0(VAR_0, VAR_1, VAR_4, VAR_3);
}
