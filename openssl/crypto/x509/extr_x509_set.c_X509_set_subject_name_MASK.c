
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int X509_NAME ;
struct TYPE_4__ {int subject; } ;
struct TYPE_5__ {TYPE_1__ cert_info; } ;
typedef TYPE_2__ X509 ;


 int FUNC_0 (int *,int *) ;

int FUNC_1(X509 *VAR_0, X509_NAME *VAR_1)
{
    if (VAR_0 == ((void*)0))
        return 0;
    return FUNC_0(&VAR_0->cert_info.subject, VAR_1);
}
