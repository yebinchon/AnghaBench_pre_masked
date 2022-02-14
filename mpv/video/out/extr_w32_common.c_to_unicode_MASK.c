
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wchar_t ;
typedef int UINT ;
typedef int BYTE ;


 scalar_t__ FUNC_0 (int,int) ;
 int FUNC_1 (int*) ;
 int FUNC_2 (int ,int ,int const*,int*,int ,int ) ;
 int FUNC_3 () ;
 int FUNC_4 (int,int) ;

__attribute__((used)) static int FUNC_5(UINT VAR_0, UINT VAR_1, const BYTE VAR_2[256])
{




    wchar_t VAR_3[10] = { 0 };


    FUNC_3();

    int VAR_4 = FUNC_2(VAR_0, VAR_1, VAR_2, VAR_3, FUNC_1(VAR_3), 0);




    if (VAR_4 < 0)
        VAR_4 = -VAR_4;
    if (VAR_4 >= 2 && FUNC_0(VAR_3[VAR_4 - 2], VAR_3[VAR_4 - 1]))
        return FUNC_4(VAR_3[VAR_4 - 2], VAR_3[VAR_4 - 1]);
    if (VAR_4 >= 1)
        return VAR_3[VAR_4 - 1];

    return 0;
}
