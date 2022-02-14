
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_ac97 {int scaps; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct snd_ac97*,int ) ;
 int FUNC_2 (struct snd_ac97*,int ,int) ;
 scalar_t__ FUNC_3 (unsigned long,int) ;

__attribute__((used)) static int FUNC_4(struct snd_ac97 *VAR_8, int VAR_9, int VAR_10)
{
 unsigned long VAR_11;
 unsigned short VAR_12;

 VAR_11 = VAR_7 + VAR_9;
 do {


  FUNC_1(VAR_8, VAR_2);
  FUNC_1(VAR_8, VAR_4);
  FUNC_1(VAR_8, VAR_5);

  if (VAR_10) {
   VAR_12 = FUNC_1(VAR_8, VAR_0);
   if (VAR_12 != 0xffff && (VAR_12 & 1) != 0)
    return 0;
  }
  if (VAR_8->scaps & VAR_3) {

   VAR_12 = FUNC_1(VAR_8, VAR_4);
   if (VAR_12 != 0 && VAR_12 != 0xffff)
    return 0;
  } else {




   FUNC_2(VAR_8, VAR_1, 0x8a05);
   if ((FUNC_1(VAR_8, VAR_1) & 0x7fff) == 0x0a05)
    return 0;
  }
  FUNC_0(1);
 } while (FUNC_3(VAR_11, VAR_7));
 return -VAR_6;
}
