
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_12__ {int page; int chapter; } ;
struct TYPE_11__ {scalar_t__ key; scalar_t__ mod; scalar_t__ plain; scalar_t__ right; scalar_t__ middle; scalar_t__ down; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (int ) ;
 int VAR_10 ;
 int FUNC_5 (int ,int ) ;
 TYPE_2__ FUNC_6 (int ,int ,TYPE_2__) ;
 TYPE_2__ FUNC_7 (int ,int ,TYPE_2__) ;
 scalar_t__ FUNC_8 (int ,int ,int ,int ,int ,int ,int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 () ;
 scalar_t__ FUNC_11 (TYPE_2__) ;
 scalar_t__ FUNC_12 (TYPE_2__) ;
 int FUNC_13 (TYPE_2__) ;
 int FUNC_14 () ;
 int FUNC_15 (int ) ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 TYPE_2__ VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 TYPE_2__ VAR_21 ;
 scalar_t__ VAR_22 ;
 scalar_t__ VAR_23 ;
 scalar_t__ VAR_24 ;
 TYPE_1__ VAR_25 ;
 int FUNC_16 (int ,int ,int ,int ,int ) ;
 int FUNC_17 (int ,int ,int,int,int) ;
 int FUNC_18 () ;
 int FUNC_19 () ;

void FUNC_20(void)
{
 if (VAR_15)
 {
  int VAR_26 = FUNC_9(VAR_1);

  if (VAR_25.key == VAR_2)
   VAR_15 = 0;


  VAR_25.key = VAR_25.mod = VAR_25.plain = 0;
  VAR_25.down = VAR_25.middle = VAR_25.right = 0;

  while (VAR_15 && FUNC_9(VAR_1) < VAR_26 + 200)
  {
   VAR_17 = FUNC_8(VAR_6, VAR_10,
    VAR_21.chapter, VAR_21.page,
    VAR_20,
    VAR_19, FUNC_15(VAR_19));
   if (VAR_17)
   {
    VAR_15 = 0;
    VAR_18 = VAR_21;
    FUNC_13(VAR_18);
   }
   else
   {
    if (VAR_16 > 0)
    {
     if (FUNC_12(VAR_21))
      VAR_15 = 0;
     else
      VAR_21 = FUNC_6(VAR_6, VAR_10, VAR_21);
    }
    else
    {
     if (FUNC_11(VAR_21))
      VAR_15 = 0;
     else
      VAR_21 = FUNC_7(VAR_6, VAR_10, VAR_21);
    }
   }
  }


  if (VAR_15)
   FUNC_10();
 }

 FUNC_1();

 if (VAR_24)
  FUNC_4(VAR_14);

 if (!FUNC_5(VAR_12, VAR_8) || VAR_13 != VAR_9 || VAR_11 != VAR_7)
 {
  FUNC_14();
  FUNC_19();
 }

 if (VAR_22)
 {
  FUNC_16(VAR_4, VAR_0, VAR_3, 0, 0);
  FUNC_17(VAR_5, 0, 4, 4, 1);
  FUNC_0();
  FUNC_18();
 }

 FUNC_2();

 if (VAR_23)
  FUNC_3();
}
