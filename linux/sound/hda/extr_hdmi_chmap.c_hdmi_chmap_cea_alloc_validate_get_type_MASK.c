
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hdac_chmap {int dummy; } ;
struct hdac_cea_channel_speaker_allocation {int channels; } ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(struct hdac_chmap *VAR_1,
  struct hdac_cea_channel_speaker_allocation *VAR_2, int VAR_3)
{

 if (VAR_2->channels != VAR_3)
  return -1;


 return VAR_0;
}
