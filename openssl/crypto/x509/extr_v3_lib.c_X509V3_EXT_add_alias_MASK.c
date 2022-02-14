
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int ext_nid; int ext_flags; } ;
typedef TYPE_1__ X509V3_EXT_METHOD ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (TYPE_1__*) ;
 TYPE_1__* FUNC_2 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int ,int ) ;

int FUNC_4(int VAR_4, int VAR_5)
{
    const X509V3_EXT_METHOD *VAR_6;
    X509V3_EXT_METHOD *VAR_7;

    if ((VAR_6 = FUNC_2(VAR_5)) == ((void*)0)) {
        FUNC_3(VAR_2, VAR_3);
        return 0;
    }
    if ((VAR_7 = FUNC_0(sizeof(*VAR_7))) == ((void*)0)) {
        FUNC_3(VAR_2, VAR_0);
        return 0;
    }
    *VAR_7 = *VAR_6;
    VAR_7->ext_nid = VAR_4;
    VAR_7->ext_flags |= VAR_1;
    return FUNC_1(VAR_7);
}
