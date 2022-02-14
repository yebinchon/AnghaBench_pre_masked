
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int X509 ;
typedef int SSL ;


 unsigned char* FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_2(SSL *VAR_2, unsigned int VAR_3, unsigned int VAR_4,
                      const unsigned char **VAR_5, size_t *VAR_6, X509 *VAR_7,
                      size_t VAR_8, int *VAR_9, void *VAR_10)
{
    int *VAR_11 = (int *)VAR_10;
    unsigned char *VAR_12;

    if (FUNC_1(VAR_2))
        VAR_1++;
    else
        VAR_0++;

    if (*VAR_11 != FUNC_1(VAR_2)
            || (VAR_12 = FUNC_0(sizeof(*VAR_12))) == ((void*)0))
        return -1;

    *VAR_12 = 1;
    *VAR_5 = VAR_12;
    *VAR_6 = sizeof(*VAR_12);
    return 1;
}
