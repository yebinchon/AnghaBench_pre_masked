
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WCHAR ;


 scalar_t__ FUNC_0 (int) ;

__attribute__((used)) static int FUNC_1(const WCHAR *VAR_0, int VAR_1)
{
    int VAR_2 = 0;
    WCHAR VAR_3;

    if(VAR_1 > 2)
        VAR_1 = 2;

    while(VAR_1--) {
        if(!*VAR_0)
            VAR_2 *= 16;
        else if(FUNC_0(VAR_3 = *VAR_0++))
            VAR_2 = VAR_2*16 + (VAR_3-'0');
        else if('a' <= VAR_3 && VAR_3 <= 'f')
            VAR_2 = VAR_2*16 + (VAR_3-'a') + 10;
        else if('A' <= VAR_3 && VAR_3 <= 'F')
            VAR_2 = VAR_2*16 + (VAR_3-'A') + 10;
        else
            VAR_2 *= 16;
    }

    return VAR_2;
}
