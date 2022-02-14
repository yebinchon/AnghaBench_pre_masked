
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int PCWSTR ;
typedef int BOOL ;


 size_t FUNC_0 (int *) ;
 int VAR_0 ;
 int * VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static BOOL
FUNC_2(PCWSTR VAR_3)
{
    size_t VAR_4;
    int VAR_5;


    if (!VAR_3) return VAR_0;

    for (VAR_4 = 0; VAR_4 < FUNC_0(VAR_1); ++VAR_4)
    {
        VAR_5 = FUNC_1(VAR_1[VAR_4], VAR_3);
        if (VAR_5 == 0)
        {

            return VAR_2;
        }
        else if (VAR_5 > 0)
        {





            break;
        }
    }


    return VAR_0;
}
