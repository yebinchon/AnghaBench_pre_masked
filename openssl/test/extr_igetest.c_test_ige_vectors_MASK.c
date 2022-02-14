
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ige_test {int length; scalar_t__ encrypt; unsigned char* key; unsigned char* iv; unsigned char* in; int out; } ;
typedef int iv ;
typedef int AES_KEY ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (unsigned char*,unsigned char*,int,int *,unsigned char*,scalar_t__) ;
 int FUNC_1 (unsigned char*,int,int *) ;
 int FUNC_2 (unsigned char*,int,int *) ;
 int VAR_2 ;
 int FUNC_3 (char*,int) ;
 int FUNC_4 (int,int) ;
 int FUNC_5 (int ,int,unsigned char*,int) ;
 struct ige_test* VAR_3 ;
 int FUNC_6 (unsigned char*,unsigned char*,int) ;
 int FUNC_7 (char*,unsigned char*,int) ;

__attribute__((used)) static int FUNC_8(int VAR_4)
{
    const struct ige_test *const VAR_5 = &VAR_3[VAR_4];
    AES_KEY VAR_6;
    unsigned char VAR_7[VAR_2];
    unsigned char VAR_8[VAR_0 * 2];
    int VAR_9 = 1;

    if (!FUNC_4(VAR_5->length, VAR_2))
        return 0;

    if (VAR_5->encrypt == VAR_1)
        FUNC_2(VAR_5->key, 8 * sizeof(VAR_5->key), &VAR_6);
    else
        FUNC_1(VAR_5->key, 8 * sizeof(VAR_5->key), &VAR_6);
    FUNC_6(VAR_8, VAR_5->iv, sizeof(VAR_8));
    FUNC_0(VAR_5->in, VAR_7, VAR_5->length, &VAR_6, VAR_8, VAR_5->encrypt);

    if (!FUNC_5(VAR_5->out, VAR_5->length, VAR_7, VAR_5->length)) {
        FUNC_3("IGE test vector %d failed", VAR_4);
        FUNC_7("key", VAR_5->key, sizeof(VAR_5->key));
        FUNC_7("iv", VAR_5->iv, sizeof(VAR_5->iv));
        FUNC_7("in", VAR_5->in, VAR_5->length);
        VAR_9 = 0;
    }


    FUNC_6(VAR_8, VAR_5->iv, sizeof(VAR_8));
    FUNC_6(VAR_7, VAR_5->in, VAR_5->length);
    FUNC_0(VAR_7, VAR_7, VAR_5->length, &VAR_6, VAR_8, VAR_5->encrypt);

    if (!FUNC_5(VAR_5->out, VAR_5->length, VAR_7, VAR_5->length)) {
        FUNC_3("IGE test vector %d failed (with in == out)", VAR_4);
        FUNC_7("key", VAR_5->key, sizeof(VAR_5->key));
        FUNC_7("iv", VAR_5->iv, sizeof(VAR_5->iv));
        FUNC_7("in", VAR_5->in, VAR_5->length);
        VAR_9 = 0;
    }

    return VAR_9;
}
