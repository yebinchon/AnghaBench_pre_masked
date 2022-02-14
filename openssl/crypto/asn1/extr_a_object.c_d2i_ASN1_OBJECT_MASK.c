
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ASN1_OBJECT ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (unsigned char const**,long*,int*,int*,long) ;
 int FUNC_1 (int ,int) ;
 int VAR_3 ;
 int * FUNC_2 (int **,unsigned char const**,long) ;

ASN1_OBJECT *FUNC_3(ASN1_OBJECT **VAR_4, const unsigned char **VAR_5,
                             long VAR_6)
{
    const unsigned char *VAR_7;
    long VAR_8;
    int VAR_9, VAR_10;
    int VAR_11, VAR_12;
    ASN1_OBJECT *VAR_13 = ((void*)0);
    VAR_7 = *VAR_5;
    VAR_11 = FUNC_0(&VAR_7, &VAR_8, &VAR_9, &VAR_10, VAR_6);
    if (VAR_11 & 0x80) {
        VAR_12 = VAR_1;
        goto err;
    }

    if (VAR_9 != VAR_3) {
        VAR_12 = VAR_2;
        goto err;
    }
    VAR_13 = FUNC_2(VAR_4, &VAR_7, VAR_8);
    if (VAR_13)
        *VAR_5 = VAR_7;
    return VAR_13;
 err:
    FUNC_1(VAR_0, VAR_12);
    return ((void*)0);
}
