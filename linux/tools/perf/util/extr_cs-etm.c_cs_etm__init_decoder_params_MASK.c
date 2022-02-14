
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cs_etm_queue {int dummy; } ;
struct cs_etm_decoder_params {int operation; int formatted; int fsyncs; int hsyncs; int frame_aligned; struct cs_etm_queue* data; int packet_printer; } ;
typedef enum cs_etm_decoder_operation { ____Placeholder_cs_etm_decoder_operation } cs_etm_decoder_operation ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_0(struct cs_etm_decoder_params *VAR_3,
           struct cs_etm_queue *VAR_4,
           enum cs_etm_decoder_operation VAR_5)
{
 int VAR_6 = -VAR_1;

 if (!(VAR_5 < VAR_0))
  goto out;

 VAR_3->packet_printer = VAR_2;
 VAR_3->operation = VAR_5;
 VAR_3->data = VAR_4;
 VAR_3->formatted = 1;
 VAR_3->fsyncs = 0;
 VAR_3->hsyncs = 0;
 VAR_3->frame_aligned = 1;

 VAR_6 = 0;
out:
 return VAR_6;
}
