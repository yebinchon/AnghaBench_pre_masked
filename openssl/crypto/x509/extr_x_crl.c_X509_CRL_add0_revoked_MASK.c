
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int X509_REVOKED ;
struct TYPE_5__ {int modified; } ;
struct TYPE_6__ {TYPE_1__ enc; int * revoked; } ;
typedef TYPE_2__ X509_CRL_INFO ;
struct TYPE_7__ {TYPE_2__ crl; } ;
typedef TYPE_3__ X509_CRL ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int * FUNC_1 (int ) ;
 int FUNC_2 (int *,int *) ;

int FUNC_3(X509_CRL *VAR_3, X509_REVOKED *VAR_4)
{
    X509_CRL_INFO *VAR_5;

    VAR_5 = &VAR_3->crl;
    if (VAR_5->revoked == ((void*)0))
        VAR_5->revoked = FUNC_1(VAR_2);
    if (VAR_5->revoked == ((void*)0) || !FUNC_2(VAR_5->revoked, VAR_4)) {
        FUNC_0(VAR_0, VAR_1);
        return 0;
    }
    VAR_5->enc.modified = 1;
    return 1;
}
