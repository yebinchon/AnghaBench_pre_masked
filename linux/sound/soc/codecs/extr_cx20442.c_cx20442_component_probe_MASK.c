
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_soc_component {TYPE_1__* card; int dev; } ;
struct cx20442_priv {int * tty; int por; } ;
struct TYPE_2__ {scalar_t__ pop_time; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,int) ;
 int FUNC_3 (struct cx20442_priv*) ;
 struct cx20442_priv* FUNC_4 (int,int ) ;
 int FUNC_5 (int ,char*) ;
 int FUNC_6 (struct snd_soc_component*,struct cx20442_priv*) ;

__attribute__((used)) static int FUNC_7(struct snd_soc_component *VAR_4)
{
 struct cx20442_priv *VAR_5;

 VAR_5 = FUNC_4(sizeof(struct cx20442_priv), VAR_3);
 if (VAR_5 == ((void*)0))
  return -VAR_1;

 VAR_5->por = FUNC_5(VAR_4->dev, "POR");
 if (FUNC_0(VAR_5->por)) {
  int VAR_6 = FUNC_1(VAR_5->por);

  FUNC_2(VAR_4->dev, "failed to get POR supply (%d)", VAR_6);
  if (VAR_6 == -VAR_0)
   VAR_6 = -VAR_2;
  FUNC_3(VAR_5);
  return VAR_6;
 }

 VAR_5->tty = ((void*)0);

 FUNC_6(VAR_4, VAR_5);
 VAR_4->card->pop_time = 0;

 return 0;
}
