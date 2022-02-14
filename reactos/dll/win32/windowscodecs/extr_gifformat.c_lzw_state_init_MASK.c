
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lzw_state {short init_code_bits; int clear_code; int eof_code; void* user_ptr; void* user_write_data; scalar_t__ bits_count; scalar_t__ bits_buf; } ;


 int FUNC_0 (struct lzw_state*) ;

__attribute__((used)) static void FUNC_1(struct lzw_state *VAR_0, short VAR_1, void *VAR_2, void *VAR_3)
{
    VAR_0->init_code_bits = VAR_1;
    VAR_0->clear_code = 1 << VAR_1;
    VAR_0->eof_code = VAR_0->clear_code + 1;
    VAR_0->bits_buf = 0;
    VAR_0->bits_count = 0;
    VAR_0->user_write_data = VAR_2;
    VAR_0->user_ptr = VAR_3;

    FUNC_0(VAR_0);
}
