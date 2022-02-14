
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_maya44 {int mutex; int * wm; } ;
struct snd_ice1712 {struct snd_maya44* spec; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 () ;
 int FUNC_3 (struct snd_ice1712*,int *,int ,int,unsigned int) ;

__attribute__((used)) static void FUNC_4(struct snd_ice1712 *VAR_6, unsigned int VAR_7)
{
 struct snd_maya44 *VAR_8 = VAR_6->spec;
 unsigned int VAR_9, VAR_10, VAR_11;
 int VAR_12;

 switch (VAR_7) {
 case 192000:
  VAR_9 = VAR_0;
  break;
 case 176400:
  VAR_9 = VAR_0;
  break;
 case 96000:
  VAR_9 = VAR_1;
  break;
 case 88200:
  VAR_9 = VAR_2;
  break;
 case 48000:
  VAR_9 = VAR_3;
  break;
 case 44100:
  VAR_9 = VAR_3;
  break;
 case 32000:
  VAR_9 = VAR_4;
  break;
 case 0:

  return;
 default:
  FUNC_2();
  return;
 }







 VAR_10 = VAR_9;
 if (VAR_10 < VAR_1)
  VAR_10 = VAR_1;

 VAR_11 = VAR_10;
 if (VAR_10 == VAR_1)
  VAR_11 |= 8;
 VAR_11 |= VAR_9 << 4;

 FUNC_0(&VAR_8->mutex);
 for (VAR_12 = 0; VAR_12 < 2; VAR_12++)
  FUNC_3(VAR_6, &VAR_8->wm[VAR_12],
      VAR_5,
      0x180, VAR_11);
 FUNC_1(&VAR_8->mutex);
}
