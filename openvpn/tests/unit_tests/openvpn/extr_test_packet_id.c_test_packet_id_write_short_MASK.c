
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ buf_id; scalar_t__ buf_time; } ;
struct TYPE_4__ {int id; } ;
struct test_packet_id_write_data {TYPE_1__ test_buf_data; TYPE_2__ pis; int test_buf; } ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 int VAR_0 ;
 int FUNC_2 (TYPE_2__*,int *,int,int) ;

__attribute__((used)) static void
FUNC_3(void **VAR_1)
{
    struct test_packet_id_write_data *VAR_2 = *VAR_1;

    VAR_0 = 5010;
    FUNC_0(FUNC_2(&VAR_2->pis, &VAR_2->test_buf, 0, 0));
    FUNC_0(VAR_2->pis.id == 1);
    FUNC_0(VAR_2->test_buf_data.buf_id == FUNC_1(1));
    FUNC_0(VAR_2->test_buf_data.buf_time == 0);
}
