
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int UINT ;
struct TYPE_3__ {int right; int bottom; } ;
typedef TYPE_1__ RECT ;


 int FUNC_0 (int ,int*) ;
 int FUNC_1 (int ,int*) ;
 int FUNC_2 (int ,TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_3(void)
{
    RECT VAR_3;
    UINT VAR_4, VAR_5;


    FUNC_2(VAR_1, &VAR_3);
    FUNC_1(VAR_2, &VAR_4);
    FUNC_0(VAR_2, &VAR_5);



    if (VAR_5 * VAR_3.right < VAR_3.bottom * VAR_4)
    {
        if (VAR_3.right < VAR_4)
        {

            VAR_0 = (VAR_3.right * 100) / VAR_4;
        }
        else
        {

            VAR_0 = 100;
        }
    }
    else
    {
        if (VAR_3.bottom < VAR_5)
        {

            VAR_0 = (VAR_3.bottom * 100) / VAR_5;
        }
        else
        {

            VAR_0 = 100;
        }
    }
}
