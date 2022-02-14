
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct snd_cs46xx {TYPE_1__* card; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct snd_cs46xx*,int ) ;

__attribute__((used)) static int FUNC_3(struct snd_cs46xx * VAR_3,int VAR_4)
{
 u32 VAR_5, VAR_6 = 0;



 for(VAR_5 = 0; VAR_5 < 50; VAR_5++){
  VAR_6 = FUNC_2(VAR_3, VAR_0);

  if( !(VAR_6 & VAR_2) )
   break;

  FUNC_1(VAR_4);
 }

 if(VAR_6 & VAR_2) {
  FUNC_0(VAR_3->card->dev,
   "failure waiting for FIFO command to complete\n");
  return -VAR_1;
 }

 return 0;
}
