
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int nid; } ;
typedef TYPE_1__ ASN1_STRING_TABLE ;


 TYPE_1__* FUNC_0 (TYPE_1__*,int ,int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (scalar_t__,TYPE_1__*) ;
 TYPE_1__* FUNC_4 (scalar_t__,int) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;

ASN1_STRING_TABLE *FUNC_5(int VAR_3)
{
    int VAR_4;
    ASN1_STRING_TABLE VAR_5;


    FUNC_1(VAR_0, ((void*)0));

    VAR_5.nid = VAR_3;
    if (VAR_1) {
        VAR_4 = FUNC_3(VAR_1, &VAR_5);
        if (VAR_4 >= 0)
            return FUNC_4(VAR_1, VAR_4);
    }
    return FUNC_0(&VAR_5, VAR_2, FUNC_2(VAR_2));
}
