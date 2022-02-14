
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int len; int current; TYPE_1__* ocgs; int intent; } ;
typedef TYPE_2__ pdf_ocg_descriptor ;
typedef int pdf_obj ;
struct TYPE_10__ {TYPE_2__* ocg; } ;
typedef TYPE_3__ pdf_document ;
typedef int fz_context ;
struct TYPE_8__ {int state; int obj; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (int *,TYPE_2__*) ;
 int FUNC_2 (int *,int ,char*) ;
 int FUNC_3 (int *,TYPE_2__*,int *,int *) ;
 int * FUNC_4 (int *,int *,int) ;
 int FUNC_5 (int *,int *) ;
 int * FUNC_6 (int *,int *,int ) ;
 int FUNC_7 (int *,int ) ;
 int FUNC_8 (int *,int *) ;
 scalar_t__ FUNC_9 (int *,int *,int ) ;
 int FUNC_10 (int *,int ,int *) ;
 int * FUNC_11 (int *,TYPE_3__*) ;

void
FUNC_12(fz_context *VAR_10, pdf_document *VAR_11, int VAR_12)
{
 int VAR_13, VAR_14, VAR_15, VAR_16;
 pdf_ocg_descriptor *VAR_17 = VAR_11->ocg;
 pdf_obj *VAR_18, *VAR_19;
 pdf_obj *VAR_20;

 VAR_18 = FUNC_6(VAR_10, FUNC_6(VAR_10, FUNC_11(VAR_10, VAR_11), FUNC_0(VAR_8)), FUNC_0(VAR_5));
 if (!VAR_18)
 {
  if (VAR_12 == 0)
   return;
  else
   FUNC_2(VAR_10, VAR_3, "Unknown Layer config (None known!)");
 }

 VAR_19 = FUNC_4(VAR_10, FUNC_6(VAR_10, VAR_18, FUNC_0(VAR_1)), VAR_12);
 if (!VAR_19)
 {
  if (VAR_12 != 0)
   FUNC_2(VAR_10, VAR_3, "Illegal Layer config");
  VAR_19 = FUNC_6(VAR_10, VAR_18, FUNC_0(VAR_2));
  if (!VAR_19)
   FUNC_2(VAR_10, VAR_3, "No default Layer config");
 }

 FUNC_7(VAR_10, VAR_17->intent);
 VAR_17->intent = FUNC_8(VAR_10, FUNC_6(VAR_10, VAR_19, FUNC_0(VAR_4)));

 VAR_15 = VAR_17->len;
 VAR_20 = FUNC_6(VAR_10, VAR_19, FUNC_0(VAR_0));
 if (FUNC_9(VAR_10, VAR_20, FUNC_0(VAR_9)))
 {

 }
 else if (FUNC_9(VAR_10, VAR_20, FUNC_0(VAR_6)))
 {
  for (VAR_13 = 0; VAR_13 < VAR_15; VAR_13++)
  {
   VAR_17->ocgs[VAR_13].state = 0;
  }
 }
 else
 {
  for (VAR_13 = 0; VAR_13 < VAR_15; VAR_13++)
  {
   VAR_17->ocgs[VAR_13].state = 1;
  }
 }

 VAR_18 = FUNC_6(VAR_10, VAR_19, FUNC_0(VAR_7));
 VAR_16 = FUNC_5(VAR_10, VAR_18);
 for (VAR_13 = 0; VAR_13 < VAR_16; VAR_13++)
 {
  pdf_obj *VAR_21 = FUNC_4(VAR_10, VAR_18, VAR_13);
  for (VAR_14=0; VAR_14 < VAR_15; VAR_14++)
  {
   if (!FUNC_10(VAR_10, VAR_17->ocgs[VAR_14].obj, VAR_21))
   {
    VAR_17->ocgs[VAR_14].state = 1;
    break;
   }
  }
 }

 VAR_18 = FUNC_6(VAR_10, VAR_19, FUNC_0(VAR_6));
 VAR_16 = FUNC_5(VAR_10, VAR_18);
 for (VAR_13 = 0; VAR_13 < VAR_16; VAR_13++)
 {
  pdf_obj *VAR_22 = FUNC_4(VAR_10, VAR_18, VAR_13);
  for (VAR_14=0; VAR_14 < VAR_15; VAR_14++)
  {
   if (!FUNC_10(VAR_10, VAR_17->ocgs[VAR_14].obj, VAR_22))
   {
    VAR_17->ocgs[VAR_14].state = 0;
    break;
   }
  }
 }

 VAR_17->current = VAR_12;

 FUNC_1(VAR_10, VAR_17);
 FUNC_3(VAR_10, VAR_17, VAR_18, VAR_19);
}
