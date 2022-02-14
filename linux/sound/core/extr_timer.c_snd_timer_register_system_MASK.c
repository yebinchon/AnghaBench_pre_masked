
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_timer_system_private {int tlist; struct snd_timer* snd_timer; } ;
struct snd_timer {int private_free; struct snd_timer_system_private* private_data; int hw; int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct snd_timer_system_private* FUNC_0 (int,int ) ;
 int FUNC_1 (struct snd_timer*) ;
 int VAR_3 ;
 int FUNC_2 (char*,int ,struct snd_timer**) ;
 int FUNC_3 (struct snd_timer*) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (int *,int ,int ) ;

__attribute__((used)) static int FUNC_6(void)
{
 struct snd_timer *VAR_6;
 struct snd_timer_system_private *VAR_7;
 int VAR_8;

 VAR_8 = FUNC_2("system", VAR_2, &VAR_6);
 if (VAR_8 < 0)
  return VAR_8;
 FUNC_4(VAR_6->name, "system timer");
 VAR_6->hw = VAR_5;
 VAR_7 = FUNC_0(sizeof(*VAR_7), VAR_1);
 if (VAR_7 == ((void*)0)) {
  FUNC_1(VAR_6);
  return -VAR_0;
 }
 VAR_7->snd_timer = VAR_6;
 FUNC_5(&VAR_7->tlist, VAR_4, 0);
 VAR_6->private_data = VAR_7;
 VAR_6->private_free = VAR_3;
 return FUNC_3(VAR_6);
}
