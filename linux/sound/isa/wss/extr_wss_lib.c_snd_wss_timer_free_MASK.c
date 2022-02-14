
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_wss {int * timer; } ;
struct snd_timer {struct snd_wss* private_data; } ;



__attribute__((used)) static void FUNC_0(struct snd_timer *VAR_0)
{
 struct snd_wss *VAR_1 = VAR_0->private_data;
 VAR_1->timer = ((void*)0);
}
