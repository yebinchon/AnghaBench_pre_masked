
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int fetched_cipher; int tag; int * aad; int plaintext; int ciphertext; int iv; int key; } ;
struct TYPE_4__ {TYPE_2__* data; } ;
typedef TYPE_1__ EVP_TEST ;
typedef TYPE_2__ CIPHER_DATA ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(EVP_TEST *VAR_1)
{
    int VAR_2;
    CIPHER_DATA *VAR_3 = VAR_1->data;

    FUNC_1(VAR_3->key);
    FUNC_1(VAR_3->iv);
    FUNC_1(VAR_3->ciphertext);
    FUNC_1(VAR_3->plaintext);
    for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++)
        FUNC_1(VAR_3->aad[VAR_2]);
    FUNC_1(VAR_3->tag);
    FUNC_0(VAR_3->fetched_cipher);
}
