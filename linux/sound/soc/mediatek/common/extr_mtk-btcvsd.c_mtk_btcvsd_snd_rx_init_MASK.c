
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mtk_btcvsd_snd {TYPE_1__* rx; TYPE_1__* rx_packet_buf; } ;
struct TYPE_2__ {int stream; scalar_t__ rw_cnt; scalar_t__ timeout; int buf_size; int packet_size; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*,int ,int) ;

__attribute__((used)) static int FUNC_1(struct mtk_btcvsd_snd *VAR_3)
{
 FUNC_0(VAR_3->rx, 0, sizeof(*VAR_3->rx));
 FUNC_0(VAR_3->rx_packet_buf, 0, sizeof(VAR_3->rx_packet_buf));

 VAR_3->rx->packet_size = VAR_1;
 VAR_3->rx->buf_size = VAR_0;
 VAR_3->rx->timeout = 0;
 VAR_3->rx->rw_cnt = 0;
 VAR_3->rx->stream = VAR_2;
 return 0;
}
