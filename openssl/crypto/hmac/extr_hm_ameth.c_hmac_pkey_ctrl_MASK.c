
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int EVP_PKEY ;



 int VAR_0 ;

__attribute__((used)) static int FUNC_0(EVP_PKEY *VAR_1, int VAR_2, long VAR_3, void *VAR_4)
{
    switch (VAR_2) {
    case 128:
        *(int *)VAR_4 = VAR_0;
        return 1;

    default:
        return -2;
    }
}
