
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hdac_chmap {int dummy; } ;
struct hdac_cea_channel_speaker_allocation {int* speakers; } ;


 int FUNC_0 (int) ;
 unsigned int FUNC_1 (int) ;

__attribute__((used)) static void FUNC_2(struct hdac_chmap *VAR_0,
  struct hdac_cea_channel_speaker_allocation *VAR_1,
  unsigned int *VAR_2, int VAR_3)
{
 int VAR_4 = 0;
 int VAR_5;

 for (VAR_5 = 7; VAR_5 >= 0; VAR_5--) {
  int VAR_6 = VAR_1->speakers[VAR_5];

  if (!VAR_6)
   continue;

  VAR_2[VAR_4++] = FUNC_1(VAR_6);
 }

 FUNC_0(VAR_4 != VAR_3);
}
