
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct test_buffer_list_aggregate_ctx {struct buffer_list* zero_length_strings; } ;
struct buffer_list {int size; } ;
struct buffer {int dummy; } ;


 int FUNC_0 (struct buffer*,char*) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (struct buffer_list*,int,int ) ;
 struct buffer* FUNC_3 (struct buffer_list*) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_4(void **VAR_1)
{
    struct test_buffer_list_aggregate_ctx *VAR_2 = *VAR_1;
    struct buffer_list *VAR_3 = VAR_2->zero_length_strings;


    FUNC_2(VAR_3, 1<<16, VAR_0);
    FUNC_1(VAR_3->size, 1);
    struct buffer *VAR_4 = FUNC_3(VAR_3);
    FUNC_0(VAR_4, "");
}
