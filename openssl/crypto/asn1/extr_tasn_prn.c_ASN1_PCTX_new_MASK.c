
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ASN1_PCTX ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int VAR_1 ;
 int * FUNC_1 (int) ;

ASN1_PCTX *FUNC_2(void)
{
    ASN1_PCTX *VAR_2;

    VAR_2 = FUNC_1(sizeof(*VAR_2));
    if (VAR_2 == ((void*)0)) {
        FUNC_0(VAR_0, VAR_1);
        return ((void*)0);
    }
    return VAR_2;
}
