
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int VOID ;
typedef int HWND ;
typedef scalar_t__ HTREEITEM ;


 int FUNC_0 (int ,scalar_t__) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ,scalar_t__) ;

__attribute__((used)) static VOID
FUNC_3(HWND VAR_0)
{
    HTREEITEM VAR_1;


    VAR_1 = FUNC_1(VAR_0);
    if (VAR_1)
    {

        FUNC_0(VAR_0, VAR_1);


        while (VAR_1)
        {

            VAR_1 = FUNC_2(VAR_0, VAR_1);
            if (VAR_1)
            {

                FUNC_0(VAR_0, VAR_1);
            }
        }
    }
}
