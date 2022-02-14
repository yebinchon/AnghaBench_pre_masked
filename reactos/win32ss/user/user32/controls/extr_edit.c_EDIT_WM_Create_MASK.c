
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ selection_end; scalar_t__ selection_start; int hwndSelf; } ;
typedef int RECT ;
typedef int LRESULT ;
typedef scalar_t__* LPCWSTR ;
typedef TYPE_1__ EDITSTATE ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,int ,scalar_t__*,int ,int ) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,int *) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*,int ,int ) ;
 int VAR_0 ;
 int FUNC_6 (int ,int *) ;
 int FUNC_7 (char*,int ) ;
 int FUNC_8 (scalar_t__*) ;

__attribute__((used)) static LRESULT FUNC_9(EDITSTATE *VAR_1, LPCWSTR VAR_2)
{
        RECT VAR_3;

 FUNC_7("%s\n", FUNC_8(VAR_2));






        FUNC_5(VAR_1, 0, VAR_0);
        FUNC_0(VAR_1);



        FUNC_6(VAR_1->hwndSelf, &VAR_3);
        FUNC_3(VAR_1, &VAR_3);

       if (VAR_2 && *VAR_2) {
    FUNC_1(VAR_1, VAR_0, VAR_2, VAR_0, VAR_0);





    VAR_1->selection_start = VAR_1->selection_end = 0;






    FUNC_2(VAR_1);
       }

       FUNC_4(VAR_1);




       return 1;
}
