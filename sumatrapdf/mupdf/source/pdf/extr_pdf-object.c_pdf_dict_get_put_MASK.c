
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_27__ TYPE_23__ ;
typedef struct TYPE_26__ TYPE_1__ ;
typedef struct TYPE_25__ TYPE_17__ ;


struct keyval {int dummy; } ;
struct TYPE_26__ {int flags; } ;
typedef TYPE_1__ pdf_obj ;
typedef int fz_context ;
struct TYPE_27__ {int len; int cap; TYPE_17__* items; } ;
struct TYPE_25__ {TYPE_1__* v; void* k; } ;


 TYPE_23__* FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int *,int ,char*,int ) ;
 int FUNC_5 (TYPE_17__*,TYPE_17__*,int) ;
 int FUNC_6 (int *,TYPE_1__*,TYPE_1__*) ;
 int FUNC_7 (int *,TYPE_1__*,int ) ;
 int FUNC_8 (int *,TYPE_1__*) ;
 int FUNC_9 (int *,TYPE_1__*) ;
 void* FUNC_10 (int *,TYPE_1__*) ;
 int FUNC_11 (TYPE_1__*) ;
 int FUNC_12 (int *,TYPE_1__*) ;
 int FUNC_13 (int *,TYPE_1__*) ;
 int FUNC_14 (int *,TYPE_1__*,TYPE_1__*) ;

__attribute__((used)) static void
FUNC_15(fz_context *VAR_3, pdf_obj *VAR_4, pdf_obj *VAR_5, pdf_obj *VAR_6, pdf_obj **VAR_7)
{
 int VAR_8;

 if (VAR_7)
  *VAR_7 = ((void*)0);

 FUNC_3(VAR_4);
 if (!FUNC_1(VAR_4))
  FUNC_4(VAR_3, VAR_0, "not a dict (%s)", FUNC_11(VAR_4));
 if (!FUNC_2(VAR_5))
  FUNC_4(VAR_3, VAR_0, "key is not a name (%s)", FUNC_11(VAR_4));

 if (FUNC_0(VAR_4)->len > 100 && !(VAR_4->flags & VAR_1))
  FUNC_12(VAR_3, VAR_4);

 if (VAR_5 < VAR_2)
  VAR_8 = FUNC_6(VAR_3, VAR_4, VAR_5);
 else
  VAR_8 = FUNC_7(VAR_3, VAR_4, FUNC_13(VAR_3, VAR_5));

 FUNC_14(VAR_3, VAR_4, VAR_6);

 if (VAR_8 >= 0 && VAR_8 < FUNC_0(VAR_4)->len)
 {
  if (FUNC_0(VAR_4)->items[VAR_8].v != VAR_6)
  {
   pdf_obj *VAR_9 = FUNC_0(VAR_4)->items[VAR_8].v;
   FUNC_0(VAR_4)->items[VAR_8].v = FUNC_10(VAR_3, VAR_6);
   if (VAR_7)
    *VAR_7 = VAR_9;
   else
    FUNC_9(VAR_3, VAR_9);
  }
 }
 else
 {
  if (FUNC_0(VAR_4)->len + 1 > FUNC_0(VAR_4)->cap)
   FUNC_8(VAR_3, VAR_4);

  VAR_8 = -1-VAR_8;
  if ((VAR_4->flags & VAR_1) && FUNC_0(VAR_4)->len > 0)
   FUNC_5(&FUNC_0(VAR_4)->items[VAR_8 + 1],
     &FUNC_0(VAR_4)->items[VAR_8],
     (FUNC_0(VAR_4)->len - VAR_8) * sizeof(struct keyval));

  FUNC_0(VAR_4)->items[VAR_8].k = FUNC_10(VAR_3, VAR_5);
  FUNC_0(VAR_4)->items[VAR_8].v = FUNC_10(VAR_3, VAR_6);
  FUNC_0(VAR_4)->len ++;
 }
}
