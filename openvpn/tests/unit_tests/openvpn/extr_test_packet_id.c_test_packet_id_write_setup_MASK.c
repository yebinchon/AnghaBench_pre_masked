
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int capacity; void* data; } ;
struct test_packet_id_write_data {TYPE_1__ test_buf; int test_buf_data; } ;


 struct test_packet_id_write_data* FUNC_0 (int,int) ;

__attribute__((used)) static int
FUNC_1(void **VAR_0) {
    struct test_packet_id_write_data *VAR_1 =
            FUNC_0(1, sizeof(struct test_packet_id_write_data));

    if (!VAR_1)
    {
        return -1;
    }

    VAR_1->test_buf.data = (void *) &VAR_1->test_buf_data;
    VAR_1->test_buf.capacity = sizeof(VAR_1->test_buf_data);

    *VAR_0 = VAR_1;
    return 0;
}
