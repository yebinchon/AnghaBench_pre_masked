
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_ice1712 {struct prodigy192_spec* spec; } ;
struct prodigy192_spec {int mute_mutex; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 unsigned char FUNC_2 (struct snd_ice1712*,scalar_t__,int) ;
 unsigned char FUNC_3 (struct snd_ice1712*,int ) ;
 int FUNC_4 (struct snd_ice1712*,int ,unsigned char) ;
 int FUNC_5 (int) ;

__attribute__((used)) static void FUNC_6(struct snd_ice1712 *VAR_2, unsigned int VAR_3)
{
 unsigned char VAR_4, VAR_5;
 int VAR_6;
 unsigned char VAR_7[7];
 struct prodigy192_spec *VAR_8 = VAR_2->spec;

 if (VAR_3 == 0)
  return;
 else if (VAR_3 <= 48000)
  VAR_5 = 0x08;
 else if (VAR_3 <= 96000)
  VAR_5 = 0x11;
 else
  VAR_5 = 0x12;
 VAR_4 = FUNC_3(VAR_2, VAR_0);
 if (VAR_4 == VAR_5)
  return;


 FUNC_0(&VAR_8->mute_mutex);

 for (VAR_6 = 0; VAR_6 < 7 ; ++VAR_6)
  VAR_7[VAR_6] = FUNC_2(VAR_2,
    VAR_1 + VAR_6, 0);

 FUNC_4(VAR_2, VAR_0, VAR_5);
 FUNC_5(10);


 for (VAR_6 = 0; VAR_6 < 7 ; ++VAR_6) {
  if (VAR_7[VAR_6])
   FUNC_2(VAR_2, VAR_1 + VAR_6, 1);
 }
 FUNC_1(&VAR_8->mute_mutex);
}
