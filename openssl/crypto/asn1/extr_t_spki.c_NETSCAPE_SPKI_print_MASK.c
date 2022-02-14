
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_11__ {int data; scalar_t__ length; } ;
struct TYPE_8__ {int * algorithm; } ;
struct TYPE_10__ {TYPE_3__* signature; TYPE_2__ sig_algor; TYPE_1__* spkac; } ;
struct TYPE_9__ {int length; scalar_t__ data; } ;
struct TYPE_7__ {TYPE_5__* challenge; int pubkey; } ;
typedef TYPE_4__ NETSCAPE_SPKI ;
typedef int EVP_PKEY ;
typedef int BIO ;
typedef int ASN1_OBJECT ;
typedef TYPE_5__ ASN1_IA5STRING ;


 int FUNC_0 (int *,char*,...) ;
 int FUNC_1 (int *,char*,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int *,int,int *) ;
 int VAR_0 ;
 char* FUNC_4 (int) ;
 int FUNC_5 (int *) ;
 int * FUNC_6 (int ) ;
 int FUNC_7 (int **,int *,int *,int *,int ) ;

int FUNC_8(BIO *VAR_1, NETSCAPE_SPKI *VAR_2)
{
    EVP_PKEY *VAR_3;
    ASN1_IA5STRING *VAR_4;
    ASN1_OBJECT *VAR_5;
    int VAR_6, VAR_7;
    char *VAR_8;
    FUNC_0(VAR_1, "Netscape SPKI:\n");
    FUNC_7(&VAR_5, ((void*)0), ((void*)0), ((void*)0), VAR_2->spkac->pubkey);
    VAR_6 = FUNC_5(VAR_5);
    FUNC_0(VAR_1, "  Public Key Algorithm: %s\n",
               (VAR_6 == VAR_0) ? "UNKNOWN" : FUNC_4(VAR_6));
    VAR_3 = FUNC_6(VAR_2->spkac->pubkey);
    if (VAR_3 == ((void*)0))
        FUNC_0(VAR_1, "  Unable to load public key\n");
    else {
        FUNC_3(VAR_1, VAR_3, 4, ((void*)0));
        FUNC_2(VAR_3);
    }
    VAR_4 = VAR_2->spkac->challenge;
    if (VAR_4->length)
        FUNC_0(VAR_1, "  Challenge String: %s\n", VAR_4->data);
    VAR_6 = FUNC_5(VAR_2->sig_algor.algorithm);
    FUNC_0(VAR_1, "  Signature Algorithm: %s",
               (VAR_6 == VAR_0) ? "UNKNOWN" : FUNC_4(VAR_6));

    VAR_7 = VAR_2->signature->length;
    VAR_8 = (char *)VAR_2->signature->data;
    for (VAR_6 = 0; VAR_6 < VAR_7; VAR_6++) {
        if ((VAR_6 % 18) == 0)
            FUNC_1(VAR_1, "\n      ", 7);
        FUNC_0(VAR_1, "%02x%s", (unsigned char)VAR_8[VAR_6],
                   ((VAR_6 + 1) == VAR_7) ? "" : ":");
    }
    FUNC_1(VAR_1, "\n", 1);
    return 1;
}
