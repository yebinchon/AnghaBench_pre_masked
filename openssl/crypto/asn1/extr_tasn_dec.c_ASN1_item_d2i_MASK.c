
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ASN1_VALUE ;
typedef int ASN1_TLC ;
typedef int ASN1_ITEM ;


 scalar_t__ FUNC_0 (int **,unsigned char const**,long,int const*,int,int ,int ,int *) ;
 int FUNC_1 (int *) ;

ASN1_VALUE *FUNC_2(ASN1_VALUE **VAR_0,
                          const unsigned char **VAR_1, long VAR_2,
                          const ASN1_ITEM *VAR_3)
{
    ASN1_TLC VAR_4;
    ASN1_VALUE *VAR_5 = ((void*)0);

    if (VAR_0 == ((void*)0))
        VAR_0 = &VAR_5;
    FUNC_1(&VAR_4);
    if (FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3, -1, 0, 0, &VAR_4) > 0)
        return *VAR_0;
    return ((void*)0);
}
