
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_ice1712 {int dummy; } ;
struct snd_i2c_bus {struct snd_ice1712* private_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct snd_ice1712*,int ) ;

__attribute__((used)) static int FUNC_1(struct snd_i2c_bus *VAR_2)
{
 struct snd_ice1712 *VAR_3 = VAR_2->private_data;
 return FUNC_0(VAR_3, VAR_1) & VAR_0 ? 1 : 0;
}
