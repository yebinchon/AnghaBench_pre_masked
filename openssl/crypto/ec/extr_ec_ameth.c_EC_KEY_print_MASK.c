
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int EC_KEY ;
typedef int BIO ;


 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (int const*) ;
 int FUNC_1 (int *,int const*,int,int ) ;

int FUNC_2(BIO *VAR_2, const EC_KEY *VAR_3, int VAR_4)
{
    int VAR_5 = FUNC_0(VAR_3) != ((void*)0);

    return FUNC_1(VAR_2, VAR_3, VAR_4,
                VAR_5 ? VAR_0 : VAR_1);
}
