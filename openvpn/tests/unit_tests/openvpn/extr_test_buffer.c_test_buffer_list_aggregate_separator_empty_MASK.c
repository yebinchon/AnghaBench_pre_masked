
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct test_buffer_list_aggregate_ctx {TYPE_1__* empty; } ;
struct TYPE_2__ {int head; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*,int,int ) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_2(void **VAR_1)
{
    struct test_buffer_list_aggregate_ctx *VAR_2 = *VAR_1;


    FUNC_1(VAR_2->empty, 3, VAR_0);
    FUNC_0(VAR_2->empty->head);
}
