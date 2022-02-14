
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mtk_btcvsd_snd_time_buffer_info {int data_count_equi_time; int time_stamp_us; } ;
struct mtk_btcvsd_snd {TYPE_1__* rx; } ;
struct TYPE_2__ {int buf_data_equivalent_time; int time_stamp; } ;



__attribute__((used)) static void FUNC_0(struct mtk_btcvsd_snd *VAR_0,
         struct mtk_btcvsd_snd_time_buffer_info *VAR_1)
{
 VAR_1->time_stamp_us = VAR_0->rx->time_stamp;
 VAR_1->data_count_equi_time = VAR_0->rx->buf_data_equivalent_time;
}
