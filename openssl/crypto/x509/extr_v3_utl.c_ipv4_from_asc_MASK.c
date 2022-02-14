
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char const*,char*,int*,int*,int*,int*) ;

__attribute__((used)) static int FUNC_1(unsigned char *VAR_0, const char *VAR_1)
{
    int VAR_2, VAR_3, VAR_4, VAR_5;
    if (FUNC_0(VAR_1, "%d.%d.%d.%d", &VAR_2, &VAR_3, &VAR_4, &VAR_5) != 4)
        return 0;
    if ((VAR_2 < 0) || (VAR_2 > 255) || (VAR_3 < 0) || (VAR_3 > 255)
        || (VAR_4 < 0) || (VAR_4 > 255) || (VAR_5 < 0) || (VAR_5 > 255))
        return 0;
    VAR_0[0] = VAR_2;
    VAR_0[1] = VAR_3;
    VAR_0[2] = VAR_4;
    VAR_0[3] = VAR_5;
    return 1;
}
