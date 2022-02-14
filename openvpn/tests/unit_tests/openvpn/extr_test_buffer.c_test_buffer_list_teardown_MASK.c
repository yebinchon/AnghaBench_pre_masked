
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct test_buffer_list_aggregate_ctx {int empty_buffers; int zero_length_strings; int one_two_three; int empty; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct test_buffer_list_aggregate_ctx*) ;

__attribute__((used)) static int FUNC_2(void **VAR_0)
{
    struct test_buffer_list_aggregate_ctx *VAR_1 = *VAR_0;

    FUNC_0(VAR_1->empty);
    FUNC_0(VAR_1->one_two_three);
    FUNC_0(VAR_1->zero_length_strings);
    FUNC_0(VAR_1->empty_buffers);
    FUNC_1(VAR_1);
    return 0;
}
