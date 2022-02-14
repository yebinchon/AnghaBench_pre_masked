
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int) ;
 scalar_t__ FUNC_1 (char const*,int) ;

__attribute__((used)) static int FUNC_2(int VAR_3)
{
    const char *VAR_4 = " -+*/<>`~!@#$%^&()_{}:;\"\',.?\\|=[]";
    int VAR_5 = 0;
    if ((VAR_3 >= 'a' && VAR_3 <= 'z') ||
        (VAR_3 >= 'A' && VAR_3 <= 'Z') ||
        (VAR_3 >= '0' && VAR_3 <= '9') ||
        (VAR_3 > 0 && VAR_3 < 256 && FUNC_1(VAR_4, VAR_3)))
        VAR_5 = VAR_3;

    if (!VAR_5)
        VAR_5 = FUNC_0(VAR_2, VAR_3);


    if (!VAR_5 && VAR_3 >= 0x10080001 && VAR_3 <= 0x1008FFFF) {
        VAR_5 = VAR_1 + (VAR_3 - 0x10080000);
        if (VAR_5 > VAR_0)
            VAR_5 = 0;
    }

    return VAR_5;
}
