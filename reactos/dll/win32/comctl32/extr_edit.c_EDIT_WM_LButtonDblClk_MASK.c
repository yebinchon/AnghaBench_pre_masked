
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int hwndSelf; scalar_t__ region_posy; scalar_t__ region_posx; int bCaptureState; scalar_t__ selection_end; } ;
typedef int LRESULT ;
typedef scalar_t__ INT ;
typedef TYPE_1__ EDITSTATE ;


 scalar_t__ FUNC_0 (TYPE_1__*,scalar_t__,scalar_t__,scalar_t__,int ) ;
 scalar_t__ FUNC_1 (TYPE_1__*,scalar_t__) ;
 scalar_t__ FUNC_2 (TYPE_1__*,scalar_t__) ;
 scalar_t__ FUNC_3 (TYPE_1__*,scalar_t__) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*,scalar_t__,scalar_t__,int ) ;
 int VAR_0 ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,int ,int,int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static LRESULT FUNC_8(EDITSTATE *VAR_4)
{
 INT VAR_5;
 INT VAR_6 = VAR_4->selection_end;
 INT VAR_7;
 INT VAR_8;
 INT VAR_9;

 VAR_4->bCaptureState = VAR_1;
 FUNC_6(VAR_4->hwndSelf);

 VAR_7 = FUNC_1(VAR_4, VAR_6);
 VAR_8 = FUNC_2(VAR_4, VAR_7);
 VAR_9 = FUNC_3(VAR_4, VAR_6);
 VAR_5 = VAR_8 + FUNC_0(VAR_4, VAR_8, VAR_6 - VAR_8, VAR_9, VAR_2);
 VAR_6 = VAR_8 + FUNC_0(VAR_4, VAR_8, VAR_6 - VAR_8, VAR_9, VAR_3);
 FUNC_5(VAR_4, VAR_5, VAR_6, VAR_0);
 FUNC_4(VAR_4);
 VAR_4->region_posx = VAR_4->region_posy = 0;
 FUNC_7(VAR_4->hwndSelf, 0, 100, ((void*)0));
 return 0;
}
