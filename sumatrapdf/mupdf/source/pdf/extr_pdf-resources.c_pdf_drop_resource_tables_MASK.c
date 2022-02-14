
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int images; int fonts; } ;
struct TYPE_5__ {TYPE_1__ resources; } ;
typedef TYPE_2__ pdf_document ;
typedef int fz_context ;


 int FUNC_0 (int *,int ) ;

void
FUNC_1(fz_context *VAR_0, pdf_document *VAR_1)
{
 if (VAR_1)
 {
  FUNC_0(VAR_0, VAR_1->resources.fonts);
  FUNC_0(VAR_0, VAR_1->resources.images);
 }
}
