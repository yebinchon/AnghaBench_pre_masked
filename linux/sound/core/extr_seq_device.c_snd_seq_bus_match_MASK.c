
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_seq_driver {scalar_t__ argsize; int id; } ;
struct snd_seq_device {scalar_t__ argsize; int id; } ;
struct device_driver {int dummy; } ;
struct device {int dummy; } ;


 scalar_t__ FUNC_0 (int ,int ) ;
 struct snd_seq_device* FUNC_1 (struct device*) ;
 struct snd_seq_driver* FUNC_2 (struct device_driver*) ;

__attribute__((used)) static int FUNC_3(struct device *VAR_0, struct device_driver *VAR_1)
{
 struct snd_seq_device *VAR_2 = FUNC_1(VAR_0);
 struct snd_seq_driver *VAR_3 = FUNC_2(VAR_1);

 return FUNC_0(VAR_3->id, VAR_2->id) == 0 &&
  VAR_3->argsize == VAR_2->argsize;
}
