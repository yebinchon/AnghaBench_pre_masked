
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ text_as_text; int * out; } ;
typedef TYPE_1__ svg_device ;
struct TYPE_9__ {struct TYPE_9__* next; } ;
typedef TYPE_2__ fz_text_span ;
struct TYPE_10__ {TYPE_2__* head; } ;
typedef TYPE_3__ fz_text ;
typedef int fz_output ;
typedef int fz_matrix ;
typedef int fz_device ;
typedef int fz_context ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int *,char*) ;
 int FUNC_2 (int *,TYPE_1__*,int ,float*,float,int ) ;
 int FUNC_3 (int *,TYPE_1__*,int ,TYPE_2__*) ;

__attribute__((used)) static void
FUNC_4(fz_context *VAR_1, fz_device *VAR_2, const fz_text *VAR_3, fz_matrix VAR_4)
{
 svg_device *VAR_5 = (svg_device*)VAR_2;
 fz_output *VAR_6 = VAR_5->out;
 fz_text_span *VAR_7;

 float VAR_8[3] = { 0, 0, 0};

 if (VAR_5->text_as_text)
 {
  for (VAR_7 = VAR_3->head; VAR_7; VAR_7 = VAR_7->next)
  {
   FUNC_1(VAR_1, VAR_6, "<text");
   FUNC_2(VAR_1, VAR_5, FUNC_0(VAR_1), VAR_8, 0.0f, VAR_0);
   FUNC_3(VAR_1, VAR_5, VAR_4, VAR_7);
  }
 }
}
