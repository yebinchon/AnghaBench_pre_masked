
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (unsigned char*,unsigned char const*,int) ;

__attribute__((used)) static size_t FUNC_1(const unsigned char *VAR_0,
                                          unsigned char *VAR_1, size_t VAR_2)
{
    size_t VAR_3;

    if ((VAR_3 = VAR_2 % 16) == 0)
        VAR_3 = 16;
    VAR_2 -= 16 + VAR_3;
    FUNC_0(VAR_1, VAR_0, VAR_2);

    FUNC_0(VAR_1 + VAR_2, VAR_0 + VAR_2 + 16, VAR_3);
    FUNC_0(VAR_1 + VAR_2 + VAR_3, VAR_0 + VAR_2, 16);
    VAR_2 += 16 + VAR_3;
    VAR_3 = 16;

    return VAR_3;
}
