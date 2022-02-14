
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ selection_start; scalar_t__ selection_end; int style; int line_count; } ;
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
 int VAR_2 ;

__attribute__((used)) static void FUNC_6(EDITSTATE *VAR_3, BOOL VAR_4)
{
 INT VAR_5 = VAR_3->selection_start;
 INT VAR_6 = VAR_3->selection_end;
 INT VAR_7;
 INT VAR_8;
 INT VAR_9;

 VAR_7 = FUNC_1(VAR_3, VAR_6);
 VAR_8 = FUNC_3(VAR_3, VAR_6);
 VAR_9 = FUNC_2(VAR_3, VAR_7);
 if (VAR_6 - VAR_9 == VAR_8) {
  if ((VAR_3->style & VAR_0) && (VAR_7 != VAR_3->line_count - 1))
   VAR_6 = FUNC_2(VAR_3, VAR_7 + 1);
 } else {
  VAR_6 = VAR_9 + FUNC_0(VAR_3,
    VAR_9, VAR_6 - VAR_9 + 1, VAR_8, VAR_2);
 }
 if (!VAR_4)
  VAR_5 = VAR_6;
 FUNC_5(VAR_3, VAR_5, VAR_6, VAR_1);
 FUNC_4(VAR_3);
}
