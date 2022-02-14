
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_ice1712 {int i2c_mutex; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct snd_ice1712*,int ) ;
 unsigned char VAR_3 ;
 unsigned char FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (unsigned char,int ) ;
 int FUNC_5 (struct snd_ice1712*) ;

unsigned char FUNC_6(struct snd_ice1712 *VAR_4,
      unsigned char VAR_5, unsigned char VAR_6)
{
 unsigned char VAR_7;

 FUNC_2(&VAR_4->i2c_mutex);
 FUNC_5(VAR_4);
 FUNC_4(VAR_6, FUNC_0(VAR_4, VAR_0));
 FUNC_4(VAR_5 & ~VAR_3, FUNC_0(VAR_4, VAR_2));
 FUNC_5(VAR_4);
 VAR_7 = FUNC_1(FUNC_0(VAR_4, VAR_1));
 FUNC_3(&VAR_4->i2c_mutex);



 return VAR_7;
}
