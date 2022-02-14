
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ buf_id; scalar_t__ buf_time; } ;
struct TYPE_5__ {int id; } ;
struct TYPE_6__ {int offset; } ;
struct test_packet_id_write_data {TYPE_1__ test_buf_data; TYPE_2__ pis; TYPE_3__ test_buf; } ;
typedef int packet_id_type ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 int VAR_0 ;
 int FUNC_2 (TYPE_2__*,TYPE_3__*,int,int) ;

__attribute__((used)) static void
FUNC_3(void **VAR_1)
{
    struct test_packet_id_write_data *VAR_2 = *VAR_1;

    VAR_2->test_buf.offset = sizeof(packet_id_type);
    VAR_0 = 5010;
    FUNC_0(FUNC_2(&VAR_2->pis, &VAR_2->test_buf, 0, 1));
    FUNC_0(VAR_2->pis.id == 1);
    FUNC_0(VAR_2->test_buf_data.buf_id == FUNC_1(1));
    FUNC_0(VAR_2->test_buf_data.buf_time == 0);
}
