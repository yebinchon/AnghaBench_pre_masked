
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int style; int flags; int selection_start; int selection_end; } ;
typedef int INT ;
typedef TYPE_1__ EDITSTATE ;
typedef scalar_t__ BOOL ;


 int FUNC_0 (TYPE_1__*,int,int ,scalar_t__*) ;
 int FUNC_1 (TYPE_1__*,int ,int) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,int ,int ,scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_6(EDITSTATE *VAR_3, BOOL VAR_4, BOOL VAR_5)
{
 BOOL VAR_6 = VAR_2;
 INT VAR_7;


 if (!VAR_5 && (VAR_3->style & VAR_1))
  VAR_7 = FUNC_0(VAR_3, 0x3fffffff,
   FUNC_4(FUNC_1(VAR_3, VAR_3->selection_end, VAR_3->flags & VAR_0)), &VAR_6);
 else
  VAR_7 = FUNC_5(VAR_3);
 FUNC_3(VAR_3, VAR_4 ? VAR_3->selection_start : VAR_7, VAR_7, VAR_6);
 FUNC_2(VAR_3);
}
