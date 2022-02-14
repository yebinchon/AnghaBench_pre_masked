
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int pdf_obj ;
struct TYPE_4__ {scalar_t__ fonts; } ;
struct TYPE_5__ {TYPE_1__ resources; } ;
typedef TYPE_2__ pdf_document ;
typedef int fz_font ;
typedef int fz_context ;


 int FUNC_0 (int *,int *,unsigned char*) ;
 int * FUNC_1 (int *,scalar_t__,unsigned char*) ;
 scalar_t__ FUNC_2 (int *,int,int,int,int ) ;
 int VAR_0 ;
 int FUNC_3 (int *,int *) ;

pdf_obj *
FUNC_4(fz_context *VAR_1, pdf_document *VAR_2, int VAR_3, int VAR_4, fz_font *VAR_5, unsigned char VAR_6[16])
{
 pdf_obj *VAR_7;

 if (!VAR_2->resources.fonts)
  VAR_2->resources.fonts = FUNC_2(VAR_1, 4096, 16, -1, VAR_0);

 FUNC_0(VAR_1, VAR_5, VAR_6);

 VAR_6[0] += VAR_3;
 VAR_6[1] += VAR_4;

 VAR_7 = FUNC_1(VAR_1, VAR_2->resources.fonts, VAR_6);
 if (VAR_7)
  FUNC_3(VAR_1, VAR_7);
 return VAR_7;
}
