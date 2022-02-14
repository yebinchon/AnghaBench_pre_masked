
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {unsigned int rounds; size_t key_bits; int tag_late; int enc; int tag_len; int * tag; int * aad_len; int ** aad; scalar_t__ aead; int ciphertext_len; int * ciphertext; int plaintext_len; int * plaintext; int iv_len; int * iv; int key_len; int * key; } ;
struct TYPE_4__ {TYPE_2__* data; } ;
typedef TYPE_1__ EVP_TEST ;
typedef TYPE_2__ CIPHER_DATA ;


 int VAR_0 ;
 int FUNC_0 (char const*) ;
 int FUNC_1 (char const*,int **,int *) ;
 scalar_t__ FUNC_2 (char const*,char*) ;

__attribute__((used)) static int FUNC_3(EVP_TEST *VAR_1, const char *VAR_2,
                             const char *VAR_3)
{
    CIPHER_DATA *VAR_4 = VAR_1->data;
    int VAR_5;

    if (FUNC_2(VAR_2, "Key") == 0)
        return FUNC_1(VAR_3, &VAR_4->key, &VAR_4->key_len);
    if (FUNC_2(VAR_2, "Rounds") == 0) {
        VAR_5 = FUNC_0(VAR_3);
        if (VAR_5 < 0)
            return -1;
        VAR_4->rounds = (unsigned int)VAR_5;
        return 1;
    }
    if (FUNC_2(VAR_2, "IV") == 0)
        return FUNC_1(VAR_3, &VAR_4->iv, &VAR_4->iv_len);
    if (FUNC_2(VAR_2, "Plaintext") == 0)
        return FUNC_1(VAR_3, &VAR_4->plaintext, &VAR_4->plaintext_len);
    if (FUNC_2(VAR_2, "Ciphertext") == 0)
        return FUNC_1(VAR_3, &VAR_4->ciphertext, &VAR_4->ciphertext_len);
    if (FUNC_2(VAR_2, "KeyBits") == 0) {
        VAR_5 = FUNC_0(VAR_3);
        if (VAR_5 < 0)
            return -1;
        VAR_4->key_bits = (size_t)VAR_5;
        return 1;
    }
    if (VAR_4->aead) {
        if (FUNC_2(VAR_2, "AAD") == 0) {
            for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++) {
                if (VAR_4->aad[VAR_5] == ((void*)0))
                    return FUNC_1(VAR_3, &VAR_4->aad[VAR_5], &VAR_4->aad_len[VAR_5]);
            }
            return -1;
        }
        if (FUNC_2(VAR_2, "Tag") == 0)
            return FUNC_1(VAR_3, &VAR_4->tag, &VAR_4->tag_len);
        if (FUNC_2(VAR_2, "SetTagLate") == 0) {
            if (FUNC_2(VAR_3, "TRUE") == 0)
                VAR_4->tag_late = 1;
            else if (FUNC_2(VAR_3, "FALSE") == 0)
                VAR_4->tag_late = 0;
            else
                return -1;
            return 1;
        }
    }

    if (FUNC_2(VAR_2, "Operation") == 0) {
        if (FUNC_2(VAR_3, "ENCRYPT") == 0)
            VAR_4->enc = 1;
        else if (FUNC_2(VAR_3, "DECRYPT") == 0)
            VAR_4->enc = 0;
        else
            return -1;
        return 1;
    }
    return 0;
}
