
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vmbus_channel {int dummy; } ;
struct TYPE_2__ {int pkt_type; size_t data_size; } ;
struct hvs_send_buf {TYPE_1__ hdr; } ;


 int VAR_0 ;
 int FUNC_0 (struct vmbus_channel*,TYPE_1__*,int,int ,int ,int ) ;

__attribute__((used)) static int FUNC_1(struct vmbus_channel *VAR_1,
    struct hvs_send_buf *VAR_2, size_t VAR_3)
{
 VAR_2->hdr.pkt_type = 1;
 VAR_2->hdr.data_size = VAR_3;
 return FUNC_0(VAR_1, &VAR_2->hdr,
    sizeof(VAR_2->hdr) + VAR_3,
    0, VAR_0, 0);
}
