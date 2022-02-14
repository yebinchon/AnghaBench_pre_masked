
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int X509 ;
typedef int SSL ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_1(SSL *VAR_2, unsigned int VAR_3, unsigned int VAR_4,
                        const unsigned char *VAR_5, size_t VAR_6, X509 *VAR_7,
                        size_t VAR_8, int *VAR_9, void *VAR_10)
{
    int *VAR_11 = (int *)VAR_10;

    if (FUNC_0(VAR_2))
        VAR_1++;
    else
        VAR_0++;

    if (*VAR_11 != FUNC_0(VAR_2)
            || VAR_6 != sizeof(char) || *VAR_5 != 1)
        return -1;

    return 1;
}
