
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct hdmi_audio_infoframe {scalar_t__ checksum; } ;



__attribute__((used)) static void FUNC_0(struct hdmi_audio_infoframe *VAR_0)
{
 u8 *VAR_1 = (u8 *)VAR_0;
 u8 VAR_2 = 0;
 int VAR_3;

 VAR_0->checksum = 0;

 for (VAR_3 = 0; VAR_3 < sizeof(*VAR_0); VAR_3++)
  VAR_2 += VAR_1[VAR_3];

 VAR_0->checksum = -VAR_2;
}
