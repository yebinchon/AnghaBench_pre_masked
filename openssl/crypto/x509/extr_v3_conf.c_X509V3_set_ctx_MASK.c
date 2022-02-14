
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int X509_REQ ;
typedef int X509_CRL ;
struct TYPE_3__ {int flags; int * subject_req; int * crl; int * subject_cert; int * issuer_cert; } ;
typedef TYPE_1__ X509V3_CTX ;
typedef int X509 ;



void FUNC_0(X509V3_CTX *VAR_0, X509 *VAR_1, X509 *VAR_2, X509_REQ *VAR_3,
                    X509_CRL *VAR_4, int VAR_5)
{
    VAR_0->issuer_cert = VAR_1;
    VAR_0->subject_cert = VAR_2;
    VAR_0->crl = VAR_4;
    VAR_0->subject_req = VAR_3;
    VAR_0->flags = VAR_5;
}
