
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_ak4531 {int (* private_free ) (struct snd_ak4531*) ;} ;


 int FUNC_0 (struct snd_ak4531*) ;
 int FUNC_1 (struct snd_ak4531*) ;

__attribute__((used)) static int FUNC_2(struct snd_ak4531 *VAR_0)
{
 if (VAR_0) {
  if (VAR_0->private_free)
   VAR_0->private_free(VAR_0);
  FUNC_0(VAR_0);
 }
 return 0;
}
