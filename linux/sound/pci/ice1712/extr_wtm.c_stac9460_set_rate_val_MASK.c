
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wtm_spec {int mute_mutex; } ;
struct snd_ice1712 {struct wtm_spec* spec; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct snd_ice1712*,int ,unsigned char) ;
 int FUNC_3 (struct snd_ice1712*,int,unsigned short*) ;
 unsigned char FUNC_4 (struct snd_ice1712*,int ) ;
 int FUNC_5 (struct snd_ice1712*,int ,unsigned char) ;
 int FUNC_6 (int) ;

__attribute__((used)) static void FUNC_7(struct snd_ice1712 *VAR_1, unsigned int VAR_2)
{
 unsigned char VAR_3, VAR_4;
 unsigned short int VAR_5;
 struct wtm_spec *VAR_6 = VAR_1->spec;

 if (VAR_2 == 0)
  return;
 else if (VAR_2 <= 48000)
  VAR_4 = 0x08;
 else if (VAR_2 <= 96000)
  VAR_4 = 0x11;
 else
  VAR_4 = 0x12;

 VAR_3 = FUNC_4(VAR_1, VAR_0);
 if (VAR_3 == VAR_4)
  return;


 FUNC_0(&VAR_6->mute_mutex);

 VAR_5 = 0xFFFF;
 FUNC_3(VAR_1, 0, &VAR_5);

 FUNC_5(VAR_1, VAR_0, VAR_4);
 FUNC_2(VAR_1, VAR_0, VAR_4);
 FUNC_6(10);


 FUNC_3(VAR_1, 1, &VAR_5);
 FUNC_1(&VAR_6->mute_mutex);
}
