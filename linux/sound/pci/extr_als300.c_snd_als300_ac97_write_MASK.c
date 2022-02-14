
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_als300 {scalar_t__ port; } ;
struct snd_ac97 {struct snd_als300* private_data; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (unsigned short,scalar_t__) ;
 int FUNC_2 (int) ;

__attribute__((used)) static void FUNC_3(struct snd_ac97 *VAR_3,
    unsigned short VAR_4, unsigned short VAR_5)
{
 int VAR_6;
 struct snd_als300 *VAR_7 = VAR_3->private_data;

 for (VAR_6 = 0; VAR_6 < 1000; VAR_6++) {
  if ((FUNC_0(VAR_7->port+VAR_2) & (VAR_1)) == 0)
   break;
  FUNC_2(10);
 }
 FUNC_1((VAR_4 << 24) | VAR_5, VAR_7->port+VAR_0);
}
