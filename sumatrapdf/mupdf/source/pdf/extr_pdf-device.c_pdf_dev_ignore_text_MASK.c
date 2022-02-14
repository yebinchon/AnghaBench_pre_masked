
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
typedef int fz_matrix ;
typedef int fz_device ;
typedef int fz_context ;


 int FUNC_0 (int *,int *,int ) ;
 int FUNC_1 (int *,int *,int ) ;
 int FUNC_2 (int *,int *,int ,int ) ;
 int FUNC_3 (int *,int *,TYPE_1__*) ;

__attribute__((used)) static void
FUNC_4(fz_context *VAR_0, fz_device *VAR_1, const fz_text *VAR_2, fz_matrix VAR_3)
{
 pdf_device *VAR_4 = (pdf_device*)VAR_1;
 fz_text_span *VAR_5;

 FUNC_1(VAR_0, VAR_4, VAR_3);

 for (VAR_5 = VAR_2->head; VAR_5; VAR_5 = VAR_5->next)
 {
  FUNC_0(VAR_0, VAR_4, 0);
  FUNC_2(VAR_0, VAR_4, VAR_5->font, VAR_5->trm);
  FUNC_3(VAR_0, VAR_4, VAR_5);
 }
}
