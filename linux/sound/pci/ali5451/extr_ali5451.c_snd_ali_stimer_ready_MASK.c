
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_ali {TYPE_1__* card; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 unsigned long VAR_2 ;
 unsigned long FUNC_1 (int) ;
 int FUNC_2 (int) ;
 unsigned long FUNC_3 (struct snd_ali*,int ) ;
 int FUNC_4 (unsigned long,unsigned long) ;

__attribute__((used)) static int FUNC_5(struct snd_ali *VAR_3)
{
 unsigned long VAR_4;
 unsigned long VAR_5,VAR_6;

 VAR_5 = FUNC_3(VAR_3, VAR_0);
 VAR_4 = VAR_2 + FUNC_1(250);

 for (;;) {
  VAR_6 = FUNC_3(VAR_3, VAR_0);
  if (VAR_6 != VAR_5)
   return 0;
  if (!FUNC_4(VAR_4, VAR_2))
   break;
  FUNC_2(1);
 }

 FUNC_0(VAR_3->card->dev, "ali_stimer_read: stimer is not ready.\n");
 return -VAR_1;
}
