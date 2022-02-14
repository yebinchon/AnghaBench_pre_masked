
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int SSL ;


 unsigned char* FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_2(SSL *VAR_2, unsigned int VAR_3, const unsigned char **VAR_4,
                      size_t *VAR_5, int *VAR_6, void *VAR_7)
{
    int *VAR_8 = (int *)VAR_7;
    unsigned char *VAR_9;

    if (FUNC_1(VAR_2))
        VAR_1++;
    else
        VAR_0++;

    if (*VAR_8 != FUNC_1(VAR_2)
            || (VAR_9 = FUNC_0(sizeof(*VAR_9))) == ((void*)0))
        return -1;

    *VAR_9 = 1;
    *VAR_4 = VAR_9;
    *VAR_5 = sizeof(char);
    return 1;
}
