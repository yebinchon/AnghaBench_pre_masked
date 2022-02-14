
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {short selection_start; short selection_end; int flags; short line_height; } ;
typedef int LRESULT ;
typedef short INT ;
typedef TYPE_1__ EDITSTATE ;
typedef int BOOL ;


 short FUNC_0 (TYPE_1__*,short,short,int*) ;
 int FUNC_1 (TYPE_1__*,short,int) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,short,short,int) ;
 int VAR_0 ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;

__attribute__((used)) static void FUNC_6(EDITSTATE *VAR_1, BOOL VAR_2)
{
 INT VAR_3 = VAR_1->selection_start;
 INT VAR_4 = VAR_1->selection_end;
 BOOL VAR_5 = (VAR_1->flags & VAR_0);
 LRESULT VAR_6 = FUNC_1(VAR_1, VAR_4, VAR_5);
 INT VAR_7 = (short)FUNC_5(VAR_6);
 INT VAR_8 = (short)FUNC_4(VAR_6);

 VAR_4 = FUNC_0(VAR_1, VAR_7, VAR_8 + VAR_1->line_height, &VAR_5);
 if (!VAR_2)
  VAR_3 = VAR_4;
 FUNC_3(VAR_1, VAR_3, VAR_4, VAR_5);
 FUNC_2(VAR_1);
}
