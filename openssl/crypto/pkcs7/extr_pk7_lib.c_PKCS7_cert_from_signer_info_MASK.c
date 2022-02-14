
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int X509 ;
struct TYPE_10__ {TYPE_1__* sign; } ;
struct TYPE_13__ {TYPE_2__ d; } ;
struct TYPE_12__ {TYPE_3__* issuer_and_serial; } ;
struct TYPE_11__ {int serial; int issuer; } ;
struct TYPE_9__ {int cert; } ;
typedef TYPE_4__ PKCS7_SIGNER_INFO ;
typedef TYPE_5__ PKCS7 ;


 scalar_t__ FUNC_0 (TYPE_5__*) ;
 int * FUNC_1 (int ,int ,int ) ;

X509 *FUNC_2(PKCS7 *VAR_0, PKCS7_SIGNER_INFO *VAR_1)
{
    if (FUNC_0(VAR_0))
        return (FUNC_1(VAR_0->d.sign->cert,
                                               VAR_1->issuer_and_serial->issuer,
                                               VAR_1->
                                               issuer_and_serial->serial));
    else
        return ((void*)0);
}
