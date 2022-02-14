
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_seq_device {int (* private_free ) (struct snd_seq_device*) ;} ;
struct device {int dummy; } ;


 int FUNC_0 (struct snd_seq_device*) ;
 int FUNC_1 (struct snd_seq_device*) ;
 struct snd_seq_device* FUNC_2 (struct device*) ;

__attribute__((used)) static void FUNC_3(struct device *VAR_0)
{
 struct snd_seq_device *VAR_1 = FUNC_2(VAR_0);

 if (VAR_1->private_free)
  VAR_1->private_free(VAR_1);
 FUNC_0(VAR_1);
}
