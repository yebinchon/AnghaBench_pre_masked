
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ac97_pcm {TYPE_2__* r; } ;
struct TYPE_4__ {TYPE_1__** codec; } ;
struct TYPE_3__ {unsigned int* rates; } ;







 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned char FUNC_0 (struct ac97_pcm*,unsigned int,int,int) ;

__attribute__((used)) static unsigned int FUNC_1(struct ac97_pcm *VAR_9, unsigned int VAR_10, unsigned short VAR_11, int VAR_12)
{
 int VAR_13, VAR_14;
 unsigned int VAR_15 = ~0;
 unsigned char VAR_16;

 for (VAR_13 = 3; VAR_13 < 12; VAR_13++) {
  if (!(VAR_11 & (1 << VAR_13)))
   continue;
  VAR_16 = FUNC_0(VAR_9, VAR_10, VAR_13, VAR_12);
  switch (VAR_16) {
  case 132: VAR_14 = VAR_1; break;
  case 128: VAR_14 = VAR_5; break;
  case 131: VAR_14 = VAR_2; break;
  case 130: VAR_14 = VAR_0; break;
  case 129: VAR_14 = VAR_3; break;
  default: VAR_14 = VAR_4; break;
  }
  VAR_15 &= VAR_9->r[VAR_12].codec[VAR_10]->rates[VAR_14];
 }
 if (!VAR_12)
  VAR_15 &= ~(VAR_6 | VAR_7 |
      VAR_8);
 return VAR_15;
}
