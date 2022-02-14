
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct TYPE_4__* ip; struct TYPE_4__* email; struct TYPE_4__* peername; int hosts; int policies; } ;
typedef TYPE_1__ X509_VERIFY_PARAM ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ) ;
 int VAR_1 ;

void FUNC_3(X509_VERIFY_PARAM *VAR_2)
{
    if (VAR_2 == ((void*)0))
        return;
    FUNC_1(VAR_2->policies, VAR_0);
    FUNC_2(VAR_2->hosts, VAR_1);
    FUNC_0(VAR_2->peername);
    FUNC_0(VAR_2->email);
    FUNC_0(VAR_2->ip);
    FUNC_0(VAR_2);
}
