
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hdac_chmap {int dummy; } ;
struct hdac_cea_channel_speaker_allocation {int* speakers; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (unsigned char) ;
 struct hdac_cea_channel_speaker_allocation* FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3(struct hdac_chmap *VAR_1,
   int VAR_2, int VAR_3, unsigned char *VAR_4)
{
 struct hdac_cea_channel_speaker_allocation *VAR_5;
 int VAR_6, VAR_7;



 VAR_5 = FUNC_2(VAR_2);
 for (VAR_6 = 0; VAR_6 < VAR_3; ++VAR_6) {
  int VAR_8 = FUNC_1(VAR_4[VAR_6]);
  bool VAR_9 = 0;
  bool VAR_10 = 0;

  if (!VAR_8)
   continue;

  for (VAR_7 = 0 + VAR_6 % 2; VAR_7 < 8; VAR_7 += 2) {
   int VAR_11 = 7 - FUNC_0(VAR_7);
   if (VAR_5->speakers[VAR_11] == VAR_8) {

    VAR_9 = 1;

    if (VAR_6 % 2 == 0 && VAR_6 + 1 < VAR_3) {

     int VAR_12 = 7 - FUNC_0(VAR_7 + 1);
     int VAR_13 = FUNC_1(VAR_4[VAR_6+1]);
     int VAR_14 = VAR_5->speakers[VAR_12];

     if (VAR_13 == VAR_14)
      VAR_10 = 1;
     else
      return -VAR_0;
    }
    break;
   }
  }

  if (!VAR_9)
   return -VAR_0;

  if (VAR_10)
   VAR_6++;
 }

 return 0;
}
