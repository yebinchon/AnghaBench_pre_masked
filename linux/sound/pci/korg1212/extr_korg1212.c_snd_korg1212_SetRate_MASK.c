
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_korg1212 {size_t clkSource; int clkSrcRate; int clkRate; size_t cardState; } ;
typedef enum ClockSourceIndex { ____Placeholder_ClockSourceIndex } ClockSourceIndex ;


 int * VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;






 int VAR_4 ;
 int FUNC_0 (char*,int,int ) ;
 int FUNC_1 (struct snd_korg1212*,int ,int ,int ,int ,int ) ;
 int FUNC_2 (struct snd_korg1212*) ;
 int * VAR_5 ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct snd_korg1212 *VAR_6, int VAR_7)
{
        static enum ClockSourceIndex VAR_8[] = {
  133,
  129,
  131
 };
        static enum ClockSourceIndex VAR_9[] = {
  132,
  128,
  130
 };
        int VAR_10, VAR_11;

 if (!FUNC_2 (VAR_6))
  return -VAR_1;

 switch (VAR_7) {
 case 44100:
  VAR_10 = VAR_8[VAR_6->clkSource];
  break;

 case 48000:
  VAR_10 = VAR_9[VAR_6->clkSource];
  break;

 default:
  return -VAR_2;
 }

        VAR_6->clkSrcRate = VAR_10;
        VAR_6->clkRate = VAR_7;

 FUNC_3(VAR_3);
 VAR_11 = FUNC_1(VAR_6, VAR_4,
       VAR_0[VAR_6->clkSrcRate],
       0, 0, 0);
 if (VAR_11)
  FUNC_0("K1212_DEBUG: Set Clock Source Selector - RC = %d [%s]\n",
       VAR_11, VAR_5[VAR_6->cardState]);

        return 0;
}
