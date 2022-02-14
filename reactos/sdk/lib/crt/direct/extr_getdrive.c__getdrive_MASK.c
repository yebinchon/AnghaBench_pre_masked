
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WCHAR ;


 int FUNC_0 (int,int*) ;
 int VAR_0 ;
 int FUNC_1 (int) ;

int FUNC_2(void)
{
    WCHAR VAR_1[VAR_0];
    if (FUNC_0( VAR_0, VAR_1 )>=2)
    {
        VAR_1[0]=FUNC_1(VAR_1[0]);
        if (VAR_1[0] >= L'A' && VAR_1[0] <= L'Z' && VAR_1[1] == L':')
            return VAR_1[0] - L'A' + 1;
    }
    return 0;
}
