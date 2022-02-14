
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int BIO ;
typedef int ASN1_VALUE ;
typedef int ASN1_PCTX ;
typedef int ASN1_ITEM ;


 int FUNC_0 (int *,char*,long) ;
 int FUNC_1 (int const*,long) ;
 int FUNC_2 (long*,int const**,int ) ;

__attribute__((used)) static int FUNC_3(BIO *VAR_0, const ASN1_VALUE **VAR_1, const ASN1_ITEM *VAR_2,
                      int VAR_3, const ASN1_PCTX *VAR_4)
{
    long VAR_5;

    FUNC_2(&VAR_5, VAR_1, FUNC_1(*VAR_1, VAR_5));
    return FUNC_0(VAR_0, "%ld\n", VAR_5);
}
