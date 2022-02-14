
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int LPARAM ;
typedef scalar_t__ INT ;
typedef int HWND ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ,int ,scalar_t__,int ) ;

__attribute__((used)) static INT
FUNC_1(HWND VAR_4)
{
    INT VAR_5;
    INT VAR_6;

    VAR_5 = FUNC_0(VAR_4,
                         VAR_2,
                         0,
                         0);
    if (VAR_5 != VAR_0)
    {
        for (VAR_6 = 0; VAR_6 < VAR_5; VAR_6++)
        {
            if (FUNC_0(VAR_4,
                            VAR_3,
                            VAR_6,
                            (LPARAM) VAR_1) == VAR_1)
            {
                return VAR_6;
            }
        }
    }

    return -1;
}
