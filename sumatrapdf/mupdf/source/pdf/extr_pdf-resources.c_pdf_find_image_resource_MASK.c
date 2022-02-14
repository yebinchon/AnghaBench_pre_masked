
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int pdf_obj ;
struct TYPE_5__ {scalar_t__ images; } ;
struct TYPE_6__ {TYPE_1__ resources; } ;
typedef TYPE_2__ pdf_document ;
typedef int fz_image ;
typedef int fz_context ;


 int * FUNC_0 (int *,scalar_t__,unsigned char*) ;
 int FUNC_1 (int *,int *,unsigned char*) ;
 scalar_t__ FUNC_2 (int *,int,int,int,int ) ;
 int VAR_0 ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *,TYPE_2__*) ;

pdf_obj *
FUNC_5(fz_context *VAR_1, pdf_document *VAR_2, fz_image *VAR_3, unsigned char VAR_4[16])
{
 pdf_obj *VAR_5;

 if (!VAR_2->resources.images)
 {
  VAR_2->resources.images = FUNC_2(VAR_1, 4096, 16, -1, VAR_0);
  FUNC_4(VAR_1, VAR_2);
 }


 FUNC_1(VAR_1, VAR_3, VAR_4);
 VAR_5 = FUNC_0(VAR_1, VAR_2->resources.images, VAR_4);
 if (VAR_5)
  FUNC_3(VAR_1, VAR_5);
 return VAR_5;
}
