
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int (* scan_cb ) (TYPE_1__*) ;} ;
typedef TYPE_1__ ASN1_SCTX ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int VAR_1 ;
 TYPE_1__* FUNC_1 (int) ;

ASN1_SCTX *FUNC_2(int (*VAR_2) (ASN1_SCTX *VAR_3))
{
    ASN1_SCTX *VAR_4 = FUNC_1(sizeof(*VAR_4));

    if (VAR_4 == ((void*)0)) {
        FUNC_0(VAR_0, VAR_1);
        return ((void*)0);
    }
    VAR_4->scan_cb = VAR_2;
    return VAR_4;
}
