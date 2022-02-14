
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int SSL ;


 size_t FUNC_0 (int *,unsigned char const**) ;
 int FUNC_1 (int ,size_t,unsigned char const*,size_t) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_2(SSL *VAR_2, void *VAR_3)
{
    int *VAR_4 = (int *)VAR_3;
    const unsigned char *VAR_5;
    size_t VAR_6;

    if (*VAR_4 != 1 && *VAR_4 != 2)
        return 0;

    VAR_6 = FUNC_0(VAR_2, &VAR_5);
    if (!FUNC_1(VAR_1, VAR_6, VAR_5, VAR_6))
        return 0;

    VAR_0 = 1;
    return 1;
}
