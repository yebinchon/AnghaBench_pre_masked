
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct key_ctx {scalar_t__ implicit_iv_len; int * hmac; int * cipher; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void
FUNC_3(struct key_ctx *VAR_0)
{
    if (VAR_0->cipher)
    {
        FUNC_0(VAR_0->cipher);
        VAR_0->cipher = ((void*)0);
    }
    if (VAR_0->hmac)
    {
        FUNC_1(VAR_0->hmac);
        FUNC_2(VAR_0->hmac);
        VAR_0->hmac = ((void*)0);
    }
    VAR_0->implicit_iv_len = 0;
}
