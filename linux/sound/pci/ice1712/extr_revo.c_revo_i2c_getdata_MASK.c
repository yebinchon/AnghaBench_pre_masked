
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_ice1712 {int dummy; } ;
struct snd_i2c_bus {struct snd_ice1712* private_data; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct snd_ice1712*,int ) ;
 int FUNC_1 (int) ;

__attribute__((used)) static int FUNC_2(struct snd_i2c_bus *VAR_1, int VAR_2)
{
 struct snd_ice1712 *VAR_3 = VAR_1->private_data;
 int VAR_4;

 if (VAR_2)
  FUNC_1(5);
 VAR_4 = FUNC_0(VAR_3, VAR_0) ? 1 : 0;
 return VAR_4;
}
