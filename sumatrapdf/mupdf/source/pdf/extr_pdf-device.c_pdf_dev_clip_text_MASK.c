
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int pdf_device ;
struct TYPE_5__ {int trm; int font; struct TYPE_5__* next; } ;
typedef TYPE_1__ fz_text_span ;
struct TYPE_6__ {TYPE_1__* head; } ;
typedef TYPE_2__ fz_text ;
typedef int fz_rect ;
typedef int fz_matrix ;
typedef int fz_device ;
typedef int fz_context ;


 int FUNC_0 (int *,int *,int) ;
 int FUNC_1 (int *,int *,int ) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,int *,int ,int ) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *,int *,TYPE_1__*) ;

__attribute__((used)) static void
FUNC_6(fz_context *VAR_0, fz_device *VAR_1, const fz_text *VAR_2, fz_matrix VAR_3, fz_rect VAR_4)
{
 pdf_device *VAR_5 = (pdf_device*)VAR_1;
 fz_text_span *VAR_6;

 FUNC_2(VAR_0, VAR_5);
 FUNC_4(VAR_0, VAR_5);

 FUNC_1(VAR_0, VAR_5, VAR_3);

 for (VAR_6 = VAR_2->head; VAR_6; VAR_6 = VAR_6->next)
 {
  FUNC_0(VAR_0, VAR_5, 7);
  FUNC_3(VAR_0, VAR_5, VAR_6->font, VAR_6->trm);
  FUNC_5(VAR_0, VAR_5, VAR_6);
 }
}
