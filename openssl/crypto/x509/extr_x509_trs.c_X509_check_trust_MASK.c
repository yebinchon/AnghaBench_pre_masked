
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int (* check_trust ) (TYPE_1__*,int *,int) ;} ;
typedef TYPE_1__ X509_TRUST ;
typedef int X509 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,int *,int) ;
 int FUNC_3 (int ,int *,int) ;
 int FUNC_4 (TYPE_1__*,int *,int) ;

int FUNC_5(X509 *VAR_3, int VAR_4, int VAR_5)
{
    X509_TRUST *VAR_6;
    int VAR_7;


    if (VAR_4 == VAR_1)
        return FUNC_3(VAR_0, VAR_3,
                         VAR_5 | VAR_2);
    VAR_7 = FUNC_1(VAR_4);
    if (VAR_7 == -1)
        return FUNC_2(VAR_4, VAR_3, VAR_5);
    VAR_6 = FUNC_0(VAR_7);
    return VAR_6->check_trust(VAR_6, VAR_3, VAR_5);
}
