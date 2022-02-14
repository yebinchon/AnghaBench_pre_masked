
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_6__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int super; } ;
typedef TYPE_1__ pdf_page ;
struct TYPE_8__ {scalar_t__ y0; scalar_t__ y1; scalar_t__ x0; scalar_t__ x1; } ;
typedef TYPE_2__ fz_irect ;
struct TYPE_10__ {int page; int chapter; } ;
struct TYPE_9__ {scalar_t__ h; scalar_t__ w; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 TYPE_6__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (int ,int *) ;
 int FUNC_6 (int ,int *) ;
 int FUNC_7 (int ,int *) ;
 int FUNC_8 (int ) ;
 TYPE_2__ FUNC_9 (int ) ;
 int * FUNC_10 (int ,int ,int ,int ) ;
 int * FUNC_11 (int ,int *) ;
 int * FUNC_12 (int ,int ) ;
 int * FUNC_13 (int ,int *,int *) ;
 int * FUNC_14 (int ,int *) ;
 scalar_t__ FUNC_15 (int ,int *) ;
 int FUNC_16 (int ,int *,int,int ) ;
 int * VAR_8 ;
 int * VAR_9 ;
 TYPE_1__* VAR_10 ;
 int VAR_11 ;
 TYPE_3__ VAR_12 ;
 int * VAR_13 ;
 scalar_t__ VAR_14 ;
 int FUNC_17 (int ,int *) ;
 scalar_t__ FUNC_18 (int ,int *) ;
 int * VAR_15 ;
 int * VAR_16 ;
 int FUNC_19 () ;

void FUNC_20(void)
{
 fz_irect VAR_17;


 if (VAR_15 && FUNC_18(VAR_2, VAR_15) == VAR_1)
  FUNC_17(VAR_2, VAR_15);
 VAR_15 = ((void*)0);

 FUNC_7(VAR_2, VAR_13);
 VAR_13 = ((void*)0);
 FUNC_6(VAR_2, VAR_16);
 VAR_16 = ((void*)0);
 FUNC_4(VAR_2, VAR_9);
 VAR_9 = ((void*)0);
 FUNC_5(VAR_2, VAR_8);
 VAR_8 = ((void*)0);

 VAR_8 = FUNC_10(VAR_2, VAR_6, VAR_4.chapter, VAR_4.page);
 if (VAR_14)
  VAR_10 = (pdf_page*)VAR_8;

 VAR_9 = FUNC_11(VAR_2, VAR_8);
 VAR_13 = FUNC_13(VAR_2, VAR_8, ((void*)0));

 if (VAR_3)
  FUNC_8(VAR_2);
 else
  FUNC_2(VAR_2);

 if (VAR_5)
 {
  VAR_16 = FUNC_14(VAR_2, &VAR_10->super);
  if (VAR_16)
  {
   int VAR_18, VAR_19 = FUNC_1(VAR_2, VAR_16);
   for (VAR_18 = 0; VAR_18 < VAR_19; VAR_18++)
    FUNC_16(VAR_2, VAR_16, VAR_18, VAR_0);
  }
  else if (FUNC_15(VAR_2, &VAR_10->super))
   VAR_16 = FUNC_12(VAR_2, 0);
  else if (FUNC_3(VAR_2, VAR_6))
   VAR_16 = FUNC_12(VAR_2, 0);
 }


 VAR_11 = FUNC_0(VAR_2, VAR_8);
 FUNC_19();

 VAR_17 = FUNC_9(VAR_7);
 VAR_12.w = VAR_17.x1 - VAR_17.x0;
 VAR_12.h = VAR_17.y1 - VAR_17.y0;
}
