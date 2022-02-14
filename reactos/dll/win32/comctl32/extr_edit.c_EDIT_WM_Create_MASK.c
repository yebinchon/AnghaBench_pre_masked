
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


typedef scalar_t__ WCHAR ;
struct TYPE_9__ {int hwndSelf; scalar_t__ selection_end; scalar_t__ selection_start; } ;
typedef int RECT ;
typedef int LRESULT ;
typedef TYPE_1__ EDITSTATE ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,int ,scalar_t__ const*,int ,int ,int ) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,int *) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*,int ,int ) ;
 int VAR_0 ;
 int FUNC_6 (int ,int *) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (char*,int ) ;
 int VAR_1 ;
 int FUNC_9 (scalar_t__ const*) ;
 int FUNC_10 (scalar_t__ const*) ;

__attribute__((used)) static LRESULT FUNC_11(EDITSTATE *VAR_2, const WCHAR *VAR_3)
{
    RECT VAR_4;

    FUNC_8("%s\n", FUNC_9(VAR_3));







    FUNC_5(VAR_2, 0, VAR_0);
    FUNC_0(VAR_2);



    FUNC_6(VAR_2->hwndSelf, &VAR_4);
    FUNC_3(VAR_2, &VAR_4);

    if (VAR_3 && *VAR_3)
    {
        FUNC_1(VAR_2, VAR_0, VAR_3, FUNC_10(VAR_3), VAR_0, VAR_0);





        VAR_2->selection_start = VAR_2->selection_end = 0;






        FUNC_2(VAR_2);
    }


    FUNC_4(VAR_2);
    FUNC_7(VAR_2->hwndSelf, VAR_1);





    return 1;
}
