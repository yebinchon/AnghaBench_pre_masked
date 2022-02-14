
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int pdf_obj ;
struct TYPE_4__ {int images; } ;
struct TYPE_5__ {TYPE_1__ resources; } ;
typedef TYPE_2__ pdf_document ;
typedef int fz_context ;


 int * FUNC_0 (int *,int ,unsigned char*,int *) ;
 int FUNC_1 (int *,char*) ;
 int * FUNC_2 (int *,int *) ;

pdf_obj *
FUNC_3(fz_context *VAR_0, pdf_document *VAR_1, unsigned char VAR_2[16], pdf_obj *VAR_3)
{
 pdf_obj *VAR_4 = FUNC_0(VAR_0, VAR_1->resources.images, VAR_2, VAR_3);
 if (VAR_4)
  FUNC_1(VAR_0, "warning: image resource already present");
 else
  VAR_4 = FUNC_2(VAR_0, VAR_3);
 return FUNC_2(VAR_0, VAR_4);
}
