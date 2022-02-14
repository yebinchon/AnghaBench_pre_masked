
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int X509_ATTRIBUTE ;
struct TYPE_3__ {int signedAttrs; } ;
typedef TYPE_1__ CMS_SignerInfo ;


 scalar_t__ FUNC_0 (int *,int *) ;

int FUNC_1(CMS_SignerInfo *VAR_0, X509_ATTRIBUTE *VAR_1)
{
    if (FUNC_0(&VAR_0->signedAttrs, VAR_1))
        return 1;
    return 0;
}
