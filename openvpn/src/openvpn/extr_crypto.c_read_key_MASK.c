
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct key_type {int cipher_length; int hmac_length; } ;
struct key {int* cipher; int* hmac; } ;
struct buffer {int dummy; } ;


 int FUNC_0 (struct key) ;
 int VAR_0 ;
 int FUNC_1 (struct buffer*,int*,int) ;
 int FUNC_2 (int ,char*,...) ;

int
FUNC_3(struct key *VAR_1, const struct key_type *VAR_2, struct buffer *VAR_3)
{
    uint8_t VAR_4;
    uint8_t VAR_5;

    FUNC_0(*VAR_1);
    if (!FUNC_1(VAR_3, &VAR_4, 1))
    {
        goto read_err;
    }
    if (!FUNC_1(VAR_3, &VAR_5, 1))
    {
        goto read_err;
    }

    if (VAR_4 != VAR_2->cipher_length || VAR_5 != VAR_2->hmac_length)
    {
        goto key_len_err;
    }

    if (!FUNC_1(VAR_3, VAR_1->cipher, VAR_4))
    {
        goto read_err;
    }
    if (!FUNC_1(VAR_3, VAR_1->hmac, VAR_5))
    {
        goto read_err;
    }

    return 1;

read_err:
    FUNC_2(VAR_0, "TLS Error: error reading key from remote");
    return -1;

key_len_err:
    FUNC_2(VAR_0,
        "TLS Error: key length mismatch, local cipher/hmac %d/%d, remote cipher/hmac %d/%d",
        VAR_2->cipher_length, VAR_2->hmac_length, VAR_4, VAR_5);
    return 0;
}
