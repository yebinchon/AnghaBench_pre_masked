
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ selection_start; scalar_t__ selection_end; } ;
typedef scalar_t__ INT ;
typedef TYPE_1__ EDITSTATE ;
typedef int BOOL ;


 scalar_t__ FUNC_0 (TYPE_1__*,scalar_t__,scalar_t__,scalar_t__,int ) ;
 scalar_t__ FUNC_1 (TYPE_1__*,scalar_t__) ;
 scalar_t__ FUNC_2 (TYPE_1__*,scalar_t__) ;
 scalar_t__ FUNC_3 (TYPE_1__*,scalar_t__) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*,scalar_t__,scalar_t__,int ) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_6(EDITSTATE *VAR_2, BOOL VAR_3)
{
 INT VAR_4 = VAR_2->selection_start;
 INT VAR_5 = VAR_2->selection_end;
 INT VAR_6;
 INT VAR_7;
 INT VAR_8;

 VAR_6 = FUNC_1(VAR_2, VAR_5);
 VAR_7 = FUNC_3(VAR_2, VAR_5);
 VAR_8 = FUNC_2(VAR_2, VAR_6);
 if (VAR_5 - VAR_8 == 0) {
  if (VAR_6) {
   VAR_8 = FUNC_2(VAR_2, VAR_6 - 1);
   VAR_5 = VAR_8 + FUNC_3(VAR_2, VAR_8);
  }
 } else {
  VAR_5 = VAR_8 + FUNC_0(VAR_2, VAR_8, VAR_5 - VAR_8, VAR_7, VAR_1);
 }
 if (!VAR_3)
  VAR_4 = VAR_5;
 FUNC_5(VAR_2, VAR_4, VAR_5, VAR_0);
 FUNC_4(VAR_2);
}
