
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int const WCHAR ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,char const*,int,int const*,int) ;

__attribute__((used)) static const WCHAR *FUNC_1(const char *VAR_1)
{
    static WCHAR VAR_2[8][128];
    static int VAR_3;

    if(!VAR_1)
        return ((void*)0);

    VAR_3 = (VAR_3+1) % 8;
    FUNC_0(VAR_0, 0, VAR_1, -1, VAR_2[VAR_3], 128);
    return VAR_2[VAR_3];
}
