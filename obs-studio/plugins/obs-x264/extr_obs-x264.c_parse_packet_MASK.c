
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ b_keyframe; int i_dts; int i_pts; } ;
typedef TYPE_1__ x264_picture_t ;
struct TYPE_8__ {int i_payload; int p_payload; } ;
typedef TYPE_2__ x264_nal_t ;
struct TYPE_9__ {int num; int array; } ;
struct obs_x264 {TYPE_5__ packet_data; } ;
struct encoder_packet {int keyframe; int dts; int pts; int type; int size; int data; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_5__,int ,int ) ;
 int FUNC_1 (TYPE_5__,int ) ;

__attribute__((used)) static void FUNC_2(struct obs_x264 *VAR_1,
    struct encoder_packet *VAR_2, x264_nal_t *VAR_3,
    int VAR_4, x264_picture_t *VAR_5)
{
 if (!VAR_4)
  return;

 FUNC_1(VAR_1->packet_data, 0);

 for (int VAR_6 = 0; VAR_6 < VAR_4; VAR_6++) {
  x264_nal_t *VAR_7 = VAR_3 + VAR_6;
  FUNC_0(VAR_1->packet_data, VAR_7->p_payload,
       VAR_7->i_payload);
 }

 VAR_2->data = VAR_1->packet_data.array;
 VAR_2->size = VAR_1->packet_data.num;
 VAR_2->type = VAR_0;
 VAR_2->pts = VAR_5->i_pts;
 VAR_2->dts = VAR_5->i_dts;
 VAR_2->keyframe = VAR_5->b_keyframe != 0;
}
