
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct test_buffer_list_aggregate_ctx {TYPE_1__* one_two_three; } ;
struct buffer {int dummy; } ;
struct TYPE_3__ {int size; } ;


 int FUNC_0 (struct buffer*,int ) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (TYPE_1__*,int,int ) ;
 struct buffer* FUNC_3 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_4(void **VAR_2)
{
    struct test_buffer_list_aggregate_ctx *VAR_3 = *VAR_2;


    FUNC_2(VAR_3->one_two_three, 2, VAR_0);
    FUNC_1(VAR_3->one_two_three->size, 3);
    struct buffer *VAR_4 = FUNC_3(VAR_3->one_two_three);
    FUNC_0(VAR_4, VAR_1);
}
