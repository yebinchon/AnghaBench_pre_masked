
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct key_ctx {size_t implicit_iv_len; int implicit_iv; int cipher; } ;
typedef int packet_id_type ;
typedef int cipher_kt_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 size_t VAR_1 ;
 int * FUNC_1 (int ) ;
 int FUNC_2 (int const*) ;
 scalar_t__ FUNC_3 (int const*) ;
 int FUNC_4 (int ,int *,size_t) ;

__attribute__((used)) static void
FUNC_5(struct key_ctx *VAR_2, uint8_t *VAR_3, size_t VAR_4)
{
    const cipher_kt_t *VAR_5 = FUNC_1(VAR_2->cipher);


    if (FUNC_3(VAR_5))
    {
        size_t VAR_6 = 0;
        FUNC_0(FUNC_2(VAR_5) >= VAR_0);
        VAR_6 = FUNC_2(VAR_5) - sizeof(packet_id_type);
        FUNC_0(VAR_6 <= VAR_1);
        FUNC_0(VAR_6 <= VAR_4);
        FUNC_4(VAR_2->implicit_iv, VAR_3, VAR_6);
        VAR_2->implicit_iv_len = VAR_6;
    }
}
