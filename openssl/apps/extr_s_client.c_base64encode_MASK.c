
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (unsigned char*,void const*,size_t) ;
 char* FUNC_1 (size_t,char*) ;
 int FUNC_2 (int) ;

__attribute__((used)) static char *FUNC_3 (const void *VAR_0, size_t VAR_1)
{
    int VAR_2;
    size_t VAR_3;
    char *VAR_4;


    VAR_3 = (VAR_1 / 3);
    if (VAR_1 % 3 > 0)
        VAR_3++;
    VAR_3 <<= 2;
    VAR_4 = FUNC_1(VAR_3 + 1, "base64 encode buffer");

    VAR_2 = FUNC_0((unsigned char *)VAR_4, VAR_0, VAR_1);
    FUNC_2(VAR_2 <= (int)VAR_3);
    if (VAR_2 < 0)
        *VAR_4 = '\0';
    return VAR_4;
}
