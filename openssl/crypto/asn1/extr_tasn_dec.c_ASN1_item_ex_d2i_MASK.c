
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ASN1_VALUE ;
typedef int ASN1_TLC ;
typedef int ASN1_ITEM ;


 int FUNC_0 (int **,int const*) ;
 int FUNC_1 (int **,unsigned char const**,long,int const*,int,int,char,int *,int ) ;

int FUNC_2(ASN1_VALUE **VAR_0, const unsigned char **VAR_1, long VAR_2,
                     const ASN1_ITEM *VAR_3,
                     int VAR_4, int VAR_5, char VAR_6, ASN1_TLC *VAR_7)
{
    int VAR_8;
    VAR_8 = FUNC_1(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4, VAR_5, VAR_6, VAR_7, 0);
    if (VAR_8 <= 0)
        FUNC_0(VAR_0, VAR_3);
    return VAR_8;
}
