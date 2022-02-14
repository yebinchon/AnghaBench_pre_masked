
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bi_ige_test {int length; scalar_t__ encrypt; int keysize; int in; int iv; int key2; int key1; int out; } ;
typedef int AES_KEY ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,unsigned char*,int,int *,int *,int ,scalar_t__) ;
 int FUNC_1 (int ,int,int *) ;
 int FUNC_2 (int ,int,int *) ;
 int VAR_1 ;
 int FUNC_3 (int,int) ;
 int FUNC_4 (int ,int,unsigned char*,int) ;
 struct bi_ige_test* VAR_2 ;
 int FUNC_5 (char*,int ,int) ;

__attribute__((used)) static int FUNC_6(int VAR_3)
{
    const struct bi_ige_test *const VAR_4 = &VAR_2[VAR_3];
    AES_KEY VAR_5;
    AES_KEY VAR_6;
    unsigned char VAR_7[VAR_1];

        if (!FUNC_3(VAR_4->length, VAR_1))
            return 0;

    if (VAR_4->encrypt == VAR_0) {
        FUNC_2(VAR_4->key1, 8 * VAR_4->keysize, &VAR_5);
        FUNC_2(VAR_4->key2, 8 * VAR_4->keysize, &VAR_6);
    } else {
        FUNC_1(VAR_4->key1, 8 * VAR_4->keysize, &VAR_5);
        FUNC_1(VAR_4->key2, 8 * VAR_4->keysize, &VAR_6);
    }

    FUNC_0(VAR_4->in, VAR_7, VAR_4->length, &VAR_5, &VAR_6, VAR_4->iv,
                       VAR_4->encrypt);

    if (!FUNC_4(VAR_4->out, VAR_4->length, VAR_7, VAR_4->length)) {
        FUNC_5("key 1", VAR_4->key1, sizeof(VAR_4->key1));
        FUNC_5("key 2", VAR_4->key2, sizeof(VAR_4->key2));
        FUNC_5("iv", VAR_4->iv, sizeof(VAR_4->iv));
        FUNC_5("in", VAR_4->in, VAR_4->length);
        return 0;
    }

    return 1;
}
