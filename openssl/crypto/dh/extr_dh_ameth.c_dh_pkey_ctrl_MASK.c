
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int EVP_PKEY ;




 int FUNC_0 (int *) ;
 int FUNC_1 (int ,void*,long) ;
 int FUNC_2 (int ,void*) ;

__attribute__((used)) static int FUNC_3(EVP_PKEY *VAR_0, int VAR_1, long VAR_2, void *VAR_3)
{
    switch (VAR_1) {
    case 128:
        return FUNC_1(FUNC_0(VAR_0), VAR_3, VAR_2);
    case 129:
        return FUNC_2(FUNC_0(VAR_0), VAR_3);
    default:
        return -2;
    }
}
