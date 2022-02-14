
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int pdf_page ;
typedef int pdf_obj ;
struct TYPE_11__ {int obj; } ;
typedef TYPE_1__ pdf_annot ;
typedef int fz_rect ;
typedef int fz_quad ;
struct TYPE_12__ {int f; int e; } ;
typedef TYPE_2__ fz_matrix ;
typedef int fz_context ;


 int * FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_2__ FUNC_1 (TYPE_2__,TYPE_2__) ;
 scalar_t__ FUNC_2 (int ,int ) ;
 scalar_t__ FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int *,int *) ;
 int * FUNC_6 (int *,int ,int *) ;
 int FUNC_7 (int *,int ,int *) ;
 TYPE_1__* FUNC_8 (int *,int *) ;
 TYPE_1__* FUNC_9 (int *,TYPE_1__*) ;
 int FUNC_10 (int *,int *,int) ;

__attribute__((used)) static int
FUNC_11(fz_context *VAR_4, void *VAR_5, int *VAR_6, int VAR_7, fz_matrix VAR_8, fz_matrix VAR_9, fz_rect VAR_10)
{
 pdf_page *VAR_11 = VAR_5;
 pdf_annot *VAR_12;
 pdf_obj *VAR_13;
 fz_rect VAR_14;
 fz_quad VAR_15;
 int VAR_16, VAR_17;

 VAR_8 = FUNC_1(VAR_8, VAR_9);

 for (VAR_12 = FUNC_8(VAR_4, VAR_11); VAR_12; VAR_12 = FUNC_9(VAR_4, VAR_12))
 {
  if (FUNC_6(VAR_4, VAR_12->obj, FUNC_0(VAR_3)) == FUNC_0(VAR_2))
  {
   VAR_13 = FUNC_6(VAR_4, VAR_12->obj, FUNC_0(VAR_0));
   VAR_17 = FUNC_5(VAR_4, VAR_13);
   if (VAR_17 > 0)
   {
    for (VAR_16 = 0; VAR_16 < VAR_17; VAR_16 += 8)
    {
     VAR_15 = FUNC_10(VAR_4, VAR_13, VAR_16);
     if (FUNC_2(FUNC_4(VAR_8.e, VAR_8.f), VAR_15))
      return 1;
    }
   }
   else
   {
    VAR_14 = FUNC_7(VAR_4, VAR_12->obj, FUNC_0(VAR_1));
    if (FUNC_3(FUNC_4(VAR_8.e, VAR_8.f), VAR_14))
     return 1;
   }
  }
 }

 return 0;
}
