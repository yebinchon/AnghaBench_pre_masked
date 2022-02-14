
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_ice1712 {int i2c; struct ews_spec* spec; } ;
struct ews_spec {int * i2cdevs; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,unsigned char*,int) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct snd_ice1712 *VAR_2, unsigned char VAR_3, unsigned char VAR_4)
{
 unsigned char VAR_5[2];
 struct ews_spec *VAR_6 = VAR_2->spec;

 FUNC_0(VAR_2->i2c);
 VAR_5[0] = VAR_3;
 VAR_5[1] = VAR_4;
 if (FUNC_1(VAR_6->i2cdevs[VAR_1], VAR_5, 2) != 2) {
  FUNC_2(VAR_2->i2c);
  return -VAR_0;
 }
 FUNC_2(VAR_2->i2c);
 return 0;
}
