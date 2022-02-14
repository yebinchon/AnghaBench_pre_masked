
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int flags; int hwndSelf; scalar_t__ region_posy; scalar_t__ region_posx; int selection_start; int bCaptureState; } ;
typedef int LRESULT ;
typedef int INT ;
typedef TYPE_1__ EDITSTATE ;
typedef int DWORD ;
typedef int BOOL ;


 int FUNC_0 (TYPE_1__*,int ,int ,int *) ;
 int FUNC_1 (TYPE_1__*,int *,int *) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,int ,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int ,int,int *) ;
 int VAR_2 ;

__attribute__((used)) static LRESULT FUNC_7(EDITSTATE *VAR_3, DWORD VAR_4, INT VAR_5, INT VAR_6)
{
 INT VAR_7;
 BOOL VAR_8;

 VAR_3->bCaptureState = VAR_2;
 FUNC_4(VAR_3->hwndSelf);
 FUNC_1(VAR_3, &VAR_5, &VAR_6);
 VAR_7 = FUNC_0(VAR_3, VAR_5, VAR_6, &VAR_8);
 FUNC_3(VAR_3, (VAR_4 & VAR_1) ? VAR_3->selection_start : VAR_7, VAR_7, VAR_8);
 FUNC_2(VAR_3);
 VAR_3->region_posx = VAR_3->region_posy = 0;
 FUNC_6(VAR_3->hwndSelf, 0, 100, ((void*)0));

 if (!(VAR_3->flags & VAR_0))
            FUNC_5(VAR_3->hwndSelf);

 return 0;
}
