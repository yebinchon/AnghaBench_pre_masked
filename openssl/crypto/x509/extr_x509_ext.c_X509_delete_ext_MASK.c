
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int X509_EXTENSION ;
struct TYPE_4__ {int extensions; } ;
struct TYPE_5__ {TYPE_1__ cert_info; } ;
typedef TYPE_2__ X509 ;


 int * FUNC_0 (int ,int) ;

X509_EXTENSION *FUNC_1(X509 *VAR_0, int VAR_1)
{
    return FUNC_0(VAR_0->cert_info.extensions, VAR_1);
}
