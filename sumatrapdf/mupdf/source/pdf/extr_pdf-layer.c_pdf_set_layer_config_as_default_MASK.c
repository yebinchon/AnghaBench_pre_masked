
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int obj; scalar_t__ state; } ;
typedef TYPE_2__ pdf_ocg_entry ;
typedef int pdf_obj ;
struct TYPE_9__ {TYPE_1__* ocg; } ;
typedef TYPE_3__ pdf_document ;
typedef int fz_context ;
struct TYPE_7__ {int len; TYPE_2__* ocgs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int * FUNC_0 (int ) ;
 int VAR_11 ;
 int VAR_12 ;
 int * FUNC_1 (int *,int *,int) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,int *,int ) ;
 int FUNC_4 (int *,int *,int *) ;
 int * FUNC_5 (int *,int *,int *) ;
 int * FUNC_6 (int *,int ,char*) ;
 int FUNC_7 (int *,int *,int *,int *) ;
 int * FUNC_8 (int *,TYPE_3__*,int) ;
 int FUNC_9 (int *,TYPE_3__*) ;

void
FUNC_10(fz_context *VAR_13, pdf_document *VAR_14)
{
 pdf_obj *VAR_15, *VAR_16, *VAR_17, *VAR_18, *VAR_19, *VAR_20;
 int VAR_21;

 if (VAR_14 == ((void*)0) || VAR_14->ocg == ((void*)0))
  return;

 VAR_15 = FUNC_6(VAR_13, FUNC_9(VAR_13, VAR_14), "Root/OCProperties");
 if (!VAR_15)
  return;


 VAR_16 = FUNC_5(VAR_13, VAR_15, FUNC_0(VAR_4));
 if (VAR_16 == ((void*)0))
  return;

 FUNC_7(VAR_13, VAR_16, FUNC_0(VAR_1), FUNC_0(VAR_8));





 VAR_17 = FUNC_5(VAR_13, VAR_16, FUNC_0(VAR_10));
 VAR_20 = FUNC_5(VAR_13, VAR_16, FUNC_0(VAR_11));
 VAR_19 = FUNC_5(VAR_13, VAR_15, FUNC_0(VAR_2));
 if (VAR_19)
 {
  int VAR_22 = FUNC_2(VAR_13, VAR_19);
  for (VAR_21=0; VAR_21 < VAR_22; VAR_21++)
  {
   pdf_obj *VAR_23 = FUNC_1(VAR_13, VAR_19, VAR_21);

   if (VAR_17 && !FUNC_5(VAR_13, VAR_23, FUNC_0(VAR_10)))
    FUNC_7(VAR_13, VAR_23, FUNC_0(VAR_10), VAR_17);
   if (VAR_20 && !FUNC_5(VAR_13, VAR_23, FUNC_0(VAR_11)))
    FUNC_7(VAR_13, VAR_23, FUNC_0(VAR_11), VAR_20);
  }
 }


 VAR_17 = FUNC_8(VAR_13, VAR_14, 4);
 VAR_18 = FUNC_8(VAR_13, VAR_14, 4);
 for (VAR_21 = 0; VAR_21 < VAR_14->ocg->len; VAR_21++)
 {
  pdf_ocg_entry *VAR_24 = &VAR_14->ocg->ocgs[VAR_21];

  FUNC_3(VAR_13, VAR_17, VAR_24->obj);
  if (VAR_24->state)
   FUNC_3(VAR_13, VAR_18, VAR_24->obj);
 }
 FUNC_7(VAR_13, VAR_16, FUNC_0(VAR_10), VAR_17);
 FUNC_7(VAR_13, VAR_16, FUNC_0(VAR_9), VAR_18);
 FUNC_4(VAR_13, VAR_16, FUNC_0(VAR_8));
 FUNC_4(VAR_13, VAR_16, FUNC_0(VAR_0));
 FUNC_7(VAR_13, VAR_16, FUNC_0(VAR_5), FUNC_0(VAR_12));
 FUNC_4(VAR_13, VAR_16, FUNC_0(VAR_7));
 FUNC_4(VAR_13, VAR_16, FUNC_0(VAR_3));
 FUNC_4(VAR_13, VAR_16, FUNC_0(VAR_11));
 FUNC_4(VAR_13, VAR_16, FUNC_0(VAR_6));

 FUNC_4(VAR_13, VAR_15, FUNC_0(VAR_2));
}
