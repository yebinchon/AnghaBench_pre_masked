
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_als300 {scalar_t__ port; } ;
struct snd_ac97 {struct snd_als300* private_data; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (scalar_t__) ;
 unsigned short FUNC_1 (scalar_t__) ;
 int FUNC_2 (unsigned short,scalar_t__) ;
 int FUNC_3 (int) ;

__attribute__((used)) static unsigned short FUNC_4(struct snd_ac97 *VAR_5,
       unsigned short VAR_6)
{
 int VAR_7;
 struct snd_als300 *VAR_8 = VAR_5->private_data;

 for (VAR_7 = 0; VAR_7 < 1000; VAR_7++) {
  if ((FUNC_0(VAR_8->port+VAR_4) & (VAR_1)) == 0)
   break;
  FUNC_3(10);
 }
 FUNC_2((VAR_6 << 24) | (1 << 31), VAR_8->port+VAR_0);

 for (VAR_7 = 0; VAR_7 < 1000; VAR_7++) {
  if ((FUNC_0(VAR_8->port+VAR_4) & (VAR_2)) != 0)
   break;
  FUNC_3(10);
 }
 return FUNC_1(VAR_8->port+VAR_3);
}
