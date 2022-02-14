
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_card {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 scalar_t__ FUNC_1 (struct snd_card*,unsigned int) ;

__attribute__((used)) static int FUNC_2(struct snd_card *VAR_1, unsigned int VAR_2)
{
 unsigned int VAR_3 = 100000;

 while (FUNC_1(VAR_1, VAR_2)) {
  if (--VAR_3 == 0) {

   FUNC_0(VAR_1->dev, "unable to allocate new control numid\n");
   return -VAR_0;
  }
 }
 return 0;
}
