
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hdac_chmap {int dummy; } ;
struct hdac_cea_channel_speaker_allocation {int ca_index; int channels; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_0(struct hdac_chmap *VAR_2,
  struct hdac_cea_channel_speaker_allocation *VAR_3, int VAR_4)
{
 if (VAR_3->ca_index == 0x00 && VAR_4 == 2)
  return VAR_0;


 if (VAR_3->channels != VAR_4)
  return -1;


 return VAR_1;
}
