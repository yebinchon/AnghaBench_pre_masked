
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hdac_chmap {int dummy; } ;
struct hdac_cea_channel_speaker_allocation {scalar_t__* speakers; } ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(
  struct hdac_chmap *VAR_1,
  struct hdac_cea_channel_speaker_allocation *VAR_2,
  int VAR_3)
{
 int VAR_4;







 int VAR_5 = 0;


 if ((VAR_3 % 2) != 0)
  return -1;

 for (VAR_4 = 0; VAR_4 < 7; VAR_4 += 2) {
  if (VAR_2->speakers[VAR_4] || VAR_2->speakers[VAR_4+1])
   VAR_5++;
 }

 if (VAR_5 * 2 != VAR_3)
  return -1;

 return VAR_0;
}
