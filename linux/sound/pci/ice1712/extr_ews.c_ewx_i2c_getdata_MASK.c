
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_ice1712 {int dummy; } ;
struct snd_i2c_bus {struct snd_ice1712* private_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct snd_ice1712*,int ) ;
 int FUNC_1 (struct snd_ice1712*,int ,int ) ;
 int FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3(struct snd_i2c_bus *VAR_5, int VAR_6)
{
 struct snd_ice1712 *VAR_7 = VAR_5->private_data;
 int VAR_8;

 FUNC_1(VAR_7, VAR_4, ~VAR_0);
 FUNC_1(VAR_7, VAR_3, 0);
 if (VAR_6)
  FUNC_2(5);
 VAR_8 = FUNC_0(VAR_7, VAR_3) & VAR_2 ? 1 : 0;

 FUNC_1(VAR_7, VAR_3, VAR_0);

 FUNC_1(VAR_7, VAR_4, ~VAR_1);
 return VAR_8;
}
