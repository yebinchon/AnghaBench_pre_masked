
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct audio_repack {scalar_t__ packet_buffer; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct audio_repack*,int ,int) ;

void FUNC_2(struct audio_repack *VAR_0)
{
 if (VAR_0->packet_buffer)
  FUNC_0(VAR_0->packet_buffer);

 FUNC_1(VAR_0, 0, sizeof(*VAR_0));
}
