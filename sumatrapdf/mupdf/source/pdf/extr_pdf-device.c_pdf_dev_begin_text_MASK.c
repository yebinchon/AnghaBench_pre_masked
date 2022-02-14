
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int in_text; } ;
typedef TYPE_1__ pdf_device ;
struct TYPE_8__ {int buf; } ;
typedef TYPE_2__ gstate ;
typedef int fz_context ;


 TYPE_2__* FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *,int ,char*) ;
 int FUNC_2 (int *,TYPE_1__*,int) ;

__attribute__((used)) static void
FUNC_3(fz_context *VAR_0, pdf_device *VAR_1, int VAR_2)
{
 FUNC_2(VAR_0, VAR_1, VAR_2);
 if (!VAR_1->in_text)
 {
  gstate *VAR_3 = FUNC_0(VAR_1);
  FUNC_1(VAR_0, VAR_3->buf, "BT\n");
  VAR_1->in_text = 1;
 }
}
