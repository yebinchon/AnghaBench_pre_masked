
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct snd_soc_component {int dummy; } ;


 int FUNC_0 (int const*) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct snd_soc_component*,int ,int) ;

__attribute__((used)) static int FUNC_4(struct snd_soc_component *VAR_1,
      u32 VAR_2)
{
 static const u32 VAR_3[] = {
  [0] = 8000,
  [1] = 12000,
  [2] = 16000,
  [3] = 24000,
  [4] = 7350,
  [5] = 11025,
  [6] = 14700,
  [7] = 22050,
  [10] = 32000,
  [11] = 48000,
  [14] = 29400,
  [15] = 44100,
 };
 static const u32 VAR_4[] = {
  [0] = 256,
  [1] = 128,
  [2] = 64,
  [3] = 32
 };
 int VAR_5, VAR_6;

 for (VAR_5 = 0; VAR_5 < FUNC_0(VAR_4); VAR_5++) {
  for (VAR_6 = 0; VAR_6 < FUNC_0(VAR_3); VAR_6++) {
   if (VAR_2 == VAR_4[VAR_5] * VAR_3[VAR_6]) {
    FUNC_3(VAR_1, VAR_0,
           FUNC_2(VAR_5) | FUNC_1(VAR_6));
    return 0;
   }
  }
 }

 return 0;
}
