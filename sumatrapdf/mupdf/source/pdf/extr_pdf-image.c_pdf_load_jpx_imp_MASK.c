
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


typedef int pdf_obj ;
typedef int pdf_document ;
typedef int fz_stream ;
typedef int fz_pixmap_image ;
struct TYPE_9__ {int n; } ;
typedef TYPE_1__ fz_pixmap ;
typedef int fz_image ;
typedef int fz_context ;


 TYPE_1__* FUNC_0 (int *,TYPE_1__*) ;
 TYPE_1__* FUNC_1 (int *,TYPE_1__*,int ,int *,int *,int ,int ) ;
 int VAR_0 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,TYPE_1__*) ;
 TYPE_1__* FUNC_4 (int *,int *) ;
 int FUNC_5 (int *,int *,TYPE_1__*) ;
 int * FUNC_6 (int *,int *,int *,int) ;

__attribute__((used)) static fz_image *
FUNC_7(fz_context *VAR_1, pdf_document *VAR_2, pdf_obj *VAR_3, pdf_obj *VAR_4, fz_stream *VAR_5, int VAR_6)
{
 fz_image *VAR_7 = FUNC_6(VAR_1, VAR_2, VAR_4, VAR_6);

 if (VAR_6)
 {
  fz_pixmap_image *VAR_8 = (fz_pixmap_image *)VAR_7;
  fz_pixmap *VAR_9;
  fz_pixmap *VAR_10 = FUNC_4(VAR_1, VAR_8);

  if (VAR_10->n != 1)
  {
   fz_pixmap *VAR_11 = FUNC_1(VAR_1, VAR_10, FUNC_2(VAR_1), ((void*)0), ((void*)0), VAR_0, 0);
   FUNC_3(VAR_1, VAR_10);
   VAR_10 = VAR_11;
  }

  VAR_9 = FUNC_0(VAR_1, VAR_10);
  FUNC_3(VAR_1, VAR_10);
  FUNC_5(VAR_1, VAR_8, VAR_9);
 }

 return VAR_7;
}
