
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ starting; scalar_t__ menu_is_active; } ;
struct TYPE_6__ {int bottom; int top; } ;
typedef TYPE_1__ RECT ;


 int VAR_0 ;
 int FUNC_0 (int ,TYPE_1__*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int,TYPE_1__*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,TYPE_1__*) ;
 int FUNC_5 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_2__ VAR_5 ;
 int FUNC_6 (int ,int ,int ) ;
 scalar_t__ FUNC_7 () ;
 int VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static int
FUNC_8(
    int VAR_8)
{
    static int VAR_9 = -1;

    RECT VAR_10, VAR_11;
    int VAR_12;
    int VAR_13;

    if (VAR_5.menu_is_active)
 VAR_12 = FUNC_1(VAR_7);
    else
 VAR_12 = 0;

    if (VAR_12 == 0)
 VAR_13 = 0;
    else
    {
 if (FUNC_7())
 {
     if (VAR_5.starting)
  VAR_13 = FUNC_3(VAR_4);
     else
     {
  RECT VAR_14, VAR_15;
  int VAR_16 = FUNC_3(VAR_3);
  int VAR_17 = FUNC_3(VAR_2);







  FUNC_4(VAR_6, &VAR_14);
  FUNC_0(VAR_6, &VAR_15);
  VAR_13 = VAR_14 - VAR_14 - (VAR_15 - VAR_15
     + 2 * VAR_16 * (!FUNC_5(VAR_6)) + VAR_17);
     }
 }
 else
 {







     FUNC_2(VAR_6, VAR_7, 0, &VAR_10);
     if (VAR_5.starting)
  VAR_13 = VAR_10 - VAR_10 + 1;
     else
     {
  FUNC_2(VAR_6, VAR_7, VAR_12 - 1, &VAR_11);
  VAR_13 = VAR_11 - VAR_10 + 1;
     }
 }
    }

    if (VAR_8 && VAR_13 != VAR_9)
    {
 VAR_9 = VAR_13;
 FUNC_6(VAR_0, VAR_0, VAR_1);
    }

    return VAR_13;
}
