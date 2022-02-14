
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct test_buffer_list_aggregate_ctx {void* empty_buffers; void* zero_length_strings; void* one_two_three; void* empty; } ;


 void* FUNC_0 (int) ;
 int FUNC_1 (void*,char*) ;
 int FUNC_2 (void*,int *,int ) ;
 struct test_buffer_list_aggregate_ctx* FUNC_3 (int,int) ;
 char* VAR_0 ;
 char* VAR_1 ;
 char* VAR_2 ;

__attribute__((used)) static int FUNC_4(void **VAR_3)
{
    struct test_buffer_list_aggregate_ctx *VAR_4 = FUNC_3(1, sizeof(*VAR_4));
    VAR_4->empty = FUNC_0(0);

    VAR_4->one_two_three = FUNC_0(3);
    FUNC_1(VAR_4->one_two_three, VAR_0);
    FUNC_1(VAR_4->one_two_three, VAR_1);
    FUNC_1(VAR_4->one_two_three, VAR_2);

    VAR_4->zero_length_strings = FUNC_0(2);
    FUNC_1(VAR_4->zero_length_strings, "");
    FUNC_1(VAR_4->zero_length_strings, "");

    VAR_4->empty_buffers = FUNC_0(2);
    uint8_t VAR_5 = 0;
    FUNC_2(VAR_4->empty_buffers, &VAR_5, 0);
    FUNC_2(VAR_4->empty_buffers, &VAR_5, 0);

    *VAR_3 = VAR_4;
    return 0;
}
