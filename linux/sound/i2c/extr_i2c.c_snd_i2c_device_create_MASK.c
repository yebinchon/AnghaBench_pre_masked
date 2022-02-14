
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_i2c_device {unsigned char addr; struct snd_i2c_bus* bus; int list; int name; } ;
struct snd_i2c_bus {int devices; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct snd_i2c_device* FUNC_0 (int,int ) ;
 int FUNC_1 (int *,int *) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int ,char const*,int) ;

int FUNC_4(struct snd_i2c_bus *VAR_3, const char *VAR_4,
     unsigned char VAR_5, struct snd_i2c_device **VAR_6)
{
 struct snd_i2c_device *VAR_7;

 *VAR_6 = ((void*)0);
 if (FUNC_2(!VAR_3))
  return -VAR_0;
 VAR_7 = FUNC_0(sizeof(*VAR_7), VAR_2);
 if (VAR_7 == ((void*)0))
  return -VAR_1;
 VAR_7->addr = VAR_5;
 FUNC_3(VAR_7->name, VAR_4, sizeof(VAR_7->name));
 FUNC_1(&VAR_7->list, &VAR_3->devices);
 VAR_7->bus = VAR_3;
 *VAR_6 = VAR_7;
 return 0;
}
