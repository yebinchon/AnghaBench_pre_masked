
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int DES_cblock ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (unsigned char*,int) ;

int FUNC_3(DES_cblock *VAR_0)
{
    do {
        if (FUNC_2((unsigned char *)VAR_0, sizeof(DES_cblock)) != 1)
            return 0;
    } while (FUNC_0(VAR_0));
    FUNC_1(VAR_0);
    return 1;
}
