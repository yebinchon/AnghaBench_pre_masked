
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ in_text; } ;
typedef TYPE_1__ pdf_device ;
struct TYPE_7__ {int buf; } ;
typedef TYPE_2__ gstate ;
typedef int fz_context ;


 TYPE_2__* FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *,int ,char*) ;

__attribute__((used)) static void
FUNC_2(fz_context *VAR_0, pdf_device *VAR_1)
{
 gstate *VAR_2 = FUNC_0(VAR_1);

 if (!VAR_1->in_text)
  return;
 VAR_1->in_text = 0;
 FUNC_1(VAR_0, VAR_2->buf, "ET\n");
}
