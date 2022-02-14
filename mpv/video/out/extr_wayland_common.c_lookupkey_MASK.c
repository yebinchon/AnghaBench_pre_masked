
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int ,int) ;
 scalar_t__ FUNC_1 (char const*,int) ;

__attribute__((used)) static int FUNC_2(int VAR_1)
{
    const char *VAR_2 = " -+*/<>`~!@#$%^&()_{}:;\"\',.?\\|=[]";

    int VAR_3 = 0;
    if ((VAR_1 >= 'a' && VAR_1 <= 'z') || (VAR_1 >= 'A' && VAR_1 <= 'Z') ||
        (VAR_1 >= '0' && VAR_1 <= '9') ||
        (VAR_1 > 0 && VAR_1 < 256 && FUNC_1(VAR_2, VAR_1)))
        VAR_3 = VAR_1;

    if (!VAR_3)
        VAR_3 = FUNC_0(VAR_0, VAR_1);

    return VAR_3;
}
