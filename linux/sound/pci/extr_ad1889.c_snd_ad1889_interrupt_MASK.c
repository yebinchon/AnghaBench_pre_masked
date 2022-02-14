
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_ad1889 {scalar_t__ csubs; scalar_t__ psubs; TYPE_1__* card; } ;
typedef int irqreturn_t ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 unsigned long VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 unsigned long FUNC_0 (struct snd_ad1889*,int ) ;
 int FUNC_1 (struct snd_ad1889*,int ,unsigned long) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (int) ;

__attribute__((used)) static irqreturn_t
FUNC_5(int VAR_8, void *VAR_9)
{
 unsigned long VAR_10;
 struct snd_ad1889 *VAR_11 = VAR_9;

 VAR_10 = FUNC_0(VAR_11, VAR_0);


 FUNC_1(VAR_11, VAR_0, VAR_10);

 VAR_10 &= VAR_5;

 if (FUNC_4(!VAR_10))
  return VAR_7;

 if (VAR_10 & (VAR_2|VAR_3))
  FUNC_2(VAR_11->card->dev,
   "Unexpected master or target abort interrupt!\n");

 if ((VAR_10 & VAR_4) && VAR_11->psubs)
  FUNC_3(VAR_11->psubs);
 if ((VAR_10 & VAR_1) && VAR_11->csubs)
  FUNC_3(VAR_11->csubs);

 return VAR_6;
}
