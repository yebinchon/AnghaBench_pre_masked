
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int plaintext; int ciphertext; } ;
struct TYPE_5__ {int length; int data; } ;
typedef TYPE_1__ SSL3_RECORD ;
typedef TYPE_2__ RECORD_DATA ;


 int FUNC_0 (unsigned char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ,int ,unsigned char*,size_t) ;
 int FUNC_3 (unsigned char*) ;
 unsigned char* FUNC_4 (int ,size_t*) ;

__attribute__((used)) static int FUNC_5(SSL3_RECORD *VAR_0, RECORD_DATA *VAR_1, int VAR_2)
{
    int VAR_3 = 0;
    unsigned char *VAR_4;
    size_t VAR_5;

    if (VAR_2)
        VAR_4 = FUNC_4(VAR_1->ciphertext, &VAR_5);
    else
        VAR_4 = FUNC_4(VAR_1->plaintext, &VAR_5);

    if (!FUNC_3(VAR_4)) {
        FUNC_1("Failed to get reference data");
        goto err;
    }

    if (!FUNC_2(VAR_0->data, VAR_0->length, VAR_4, VAR_5))
        goto err;

    VAR_3 = 1;

 err:
    FUNC_0(VAR_4);
    return VAR_3;
}
