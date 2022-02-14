
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ffmpeg_decode {scalar_t__ packet_buffer; scalar_t__ frame; scalar_t__ decoder; scalar_t__ hw_frame; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (struct ffmpeg_decode*,int ,int) ;

void FUNC_4(struct ffmpeg_decode *VAR_0)
{
 if (VAR_0->hw_frame)
  FUNC_0(VAR_0->hw_frame);

 if (VAR_0->decoder) {
  FUNC_1(VAR_0->decoder);
  FUNC_0(VAR_0->decoder);
 }

 if (VAR_0->frame)
  FUNC_0(VAR_0->frame);

 if (VAR_0->packet_buffer)
  FUNC_2(VAR_0->packet_buffer);

 FUNC_3(VAR_0, 0, sizeof(*VAR_0));
}
