
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int id; } ;
struct test_packet_id_write_data {int test_buf; TYPE_1__ pis; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*,int *,int,int) ;

__attribute__((used)) static void
FUNC_2(void **VAR_0)
{
    struct test_packet_id_write_data *VAR_1 = *VAR_0;

    VAR_1->pis.id = ~0;
    FUNC_0(FUNC_1(&VAR_1->pis, &VAR_1->test_buf, 0, 0));
}
