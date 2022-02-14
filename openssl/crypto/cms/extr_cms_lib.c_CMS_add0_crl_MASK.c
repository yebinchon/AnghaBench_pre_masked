
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int X509_CRL ;
struct TYPE_4__ {int * crl; } ;
struct TYPE_5__ {TYPE_1__ d; int type; } ;
typedef TYPE_2__ CMS_RevocationInfoChoice ;
typedef int CMS_ContentInfo ;


 int VAR_0 ;
 TYPE_2__* FUNC_0 (int *) ;

int FUNC_1(CMS_ContentInfo *VAR_1, X509_CRL *VAR_2)
{
    CMS_RevocationInfoChoice *VAR_3;
    VAR_3 = FUNC_0(VAR_1);
    if (!VAR_3)
        return 0;
    VAR_3->type = VAR_0;
    VAR_3->d.crl = VAR_2;
    return 1;
}
