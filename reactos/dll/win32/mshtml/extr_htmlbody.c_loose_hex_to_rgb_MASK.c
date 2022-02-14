
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char WCHAR ;


 int FUNC_0 (char const*,int) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (char const*) ;

__attribute__((used)) static int FUNC_3(const WCHAR *VAR_0)
{
    int VAR_1, VAR_2;

    VAR_1 = FUNC_2(VAR_0);
    if(*VAR_0 == '#') {
        VAR_0++;
        VAR_1--;
    }
    if(VAR_1 <= 3)
        return 0;

    VAR_2 = FUNC_1(VAR_1/3 + (VAR_1%3 ? 1 : 0), 4);
    return (FUNC_0(VAR_0, VAR_2) << 16)
        | (FUNC_0(VAR_0+VAR_2, VAR_2) << 8)
        | FUNC_0(VAR_0+2*VAR_2, VAR_2);
}
