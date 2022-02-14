
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ y_offset; int format_rect; int hwndSelf; } ;
typedef int RECT ;
typedef scalar_t__ INT ;
typedef TYPE_1__ EDITSTATE ;


 scalar_t__ FUNC_0 (TYPE_1__*,scalar_t__) ;
 scalar_t__ FUNC_1 (TYPE_1__*,scalar_t__) ;
 scalar_t__ FUNC_2 (TYPE_1__*,scalar_t__) ;
 int FUNC_3 (TYPE_1__*,scalar_t__,scalar_t__,scalar_t__,int *) ;
 int FUNC_4 (TYPE_1__*,int *,int ) ;
 int FUNC_5 (int ,int *) ;
 scalar_t__ FUNC_6 (int *,int *,int *) ;
 int VAR_0 ;
 scalar_t__ FUNC_7 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_8(EDITSTATE *VAR_1, INT VAR_2, INT VAR_3)
{
 INT VAR_4 = FUNC_7(VAR_1);
 INT VAR_5 = FUNC_0(VAR_1, VAR_2);
 INT VAR_6 = FUNC_0(VAR_1, VAR_3);
 INT VAR_7;
 INT VAR_8;
 RECT VAR_9;
 RECT VAR_10;
 RECT VAR_11;
 RECT VAR_12;
 INT VAR_13;

 if ((VAR_6 < VAR_1->y_offset) || (VAR_5 > VAR_1->y_offset + VAR_4))
  return;

 VAR_7 = VAR_2 - FUNC_1(VAR_1, VAR_5);
 VAR_8 = VAR_3 - FUNC_1(VAR_1, VAR_6);
 if (VAR_5 < VAR_1->y_offset) {
  VAR_5 = VAR_1->y_offset;
  VAR_7 = 0;
 }
 if (VAR_6 > VAR_1->y_offset + VAR_4) {
  VAR_6 = VAR_1->y_offset + VAR_4;
  VAR_8 = FUNC_2(VAR_1, FUNC_1(VAR_1, VAR_6));
 }
 FUNC_5(VAR_1->hwndSelf, &VAR_9);
 FUNC_6(&VAR_10, &VAR_9, &VAR_1->format_rect);
 if (VAR_5 == VAR_6) {
  FUNC_3(VAR_1, VAR_5, VAR_7, VAR_8, &VAR_11);
  if (FUNC_6(&VAR_12, &VAR_10, &VAR_11))
   FUNC_4(VAR_1, &VAR_12, VAR_0);
 } else {
  FUNC_3(VAR_1, VAR_5, VAR_7,
    FUNC_2(VAR_1,
     FUNC_1(VAR_1, VAR_5)),
    &VAR_11);
  if (FUNC_6(&VAR_12, &VAR_10, &VAR_11))
   FUNC_4(VAR_1, &VAR_12, VAR_0);
  for (VAR_13 = VAR_5 + 1 ; VAR_13 < VAR_6 ; VAR_13++) {
   FUNC_3(VAR_1, VAR_13, 0,
    FUNC_2(VAR_1,
     FUNC_1(VAR_1, VAR_13)),
    &VAR_11);
   if (FUNC_6(&VAR_12, &VAR_10, &VAR_11))
    FUNC_4(VAR_1, &VAR_12, VAR_0);
  }
  FUNC_3(VAR_1, VAR_6, 0, VAR_8, &VAR_11);
  if (FUNC_6(&VAR_12, &VAR_10, &VAR_11))
   FUNC_4(VAR_1, &VAR_12, VAR_0);
 }
}
