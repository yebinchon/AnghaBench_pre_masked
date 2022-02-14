
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int Self; } ;
typedef TYPE_1__ SYSLINK_INFO ;
typedef int RECT ;
typedef int LRESULT ;
typedef scalar_t__* LPCWSTR ;
typedef int * HDC ;


 scalar_t__ FUNC_0 (int ,int *) ;
 int * FUNC_1 (int ) ;
 int FUNC_2 (int ,int *,int ) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (TYPE_1__*) ;
 scalar_t__ FUNC_5 (TYPE_1__*,scalar_t__*) ;
 int FUNC_6 (TYPE_1__*,int *,int *) ;
 int VAR_0 ;

__attribute__((used)) static LRESULT FUNC_7 (SYSLINK_INFO *VAR_1, LPCWSTR VAR_2)
{

    FUNC_4(VAR_1);

    if(VAR_2 == ((void*)0) || *VAR_2 == 0)
    {
        return VAR_0;
    }


    if(FUNC_5(VAR_1, VAR_2) > 0)
    {
        RECT VAR_3;


        if (FUNC_0(VAR_1->Self, &VAR_3))
        {
            HDC VAR_4 = FUNC_1(VAR_1->Self);
            if (VAR_4 != ((void*)0))
            {
                FUNC_6(VAR_1, VAR_4, &VAR_3);
                FUNC_3(VAR_1->Self, VAR_4);

                FUNC_2(VAR_1->Self, ((void*)0), VAR_0);
            }
        }
    }

    return VAR_0;
}
