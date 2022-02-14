
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int style; int flags; scalar_t__ selection_start; int selection_end; int x_offset; } ;
typedef scalar_t__ INT ;
typedef TYPE_1__ EDITSTATE ;
typedef scalar_t__ BOOL ;


 scalar_t__ FUNC_0 (TYPE_1__*,int ,int ,int *) ;
 int FUNC_1 (TYPE_1__*,int ,int) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,scalar_t__,scalar_t__,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(EDITSTATE *VAR_3, BOOL VAR_4, BOOL VAR_5)
{
 INT VAR_6;


 if (!VAR_5 && (VAR_3->style & VAR_1))
  VAR_6 = FUNC_0(VAR_3, -VAR_3->x_offset,
   FUNC_4(FUNC_1(VAR_3, VAR_3->selection_end, VAR_3->flags & VAR_0)), ((void*)0));
 else
  VAR_6 = 0;
 FUNC_3(VAR_3, VAR_4 ? VAR_3->selection_start : VAR_6, VAR_6, VAR_2);
 FUNC_2(VAR_3);
}
