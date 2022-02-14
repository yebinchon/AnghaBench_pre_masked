
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hdac_chmap {int dummy; } ;
struct hdac_cea_channel_speaker_allocation {int* speakers; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 unsigned int FUNC_2 (int) ;

__attribute__((used)) static void FUNC_3(struct hdac_chmap *VAR_1,
  struct hdac_cea_channel_speaker_allocation *VAR_2,
  unsigned int *VAR_3, int VAR_4)
{

 int VAR_5 = 0;
 int VAR_6;

 for (VAR_6 = 7; VAR_6 >= 0; VAR_6--) {
  int VAR_7 = 7 - FUNC_1(7 - VAR_6);
  int VAR_8 = VAR_2->speakers[VAR_7];
  if (!VAR_8) {

   if (VAR_2->speakers[VAR_7 + (VAR_7 % 2 ? -1 : 1)])
    VAR_3[VAR_5++] = VAR_0;

   continue;
  }

  VAR_3[VAR_5++] = FUNC_2(VAR_8);
 }

 FUNC_0(VAR_5 != VAR_4);
}
