
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_wss {int hardware; int* image; } ;
struct snd_timer {int dummy; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 struct snd_wss* FUNC_0 (struct snd_timer*) ;

__attribute__((used)) static unsigned long FUNC_1(struct snd_timer *VAR_2)
{
 struct snd_wss *VAR_3 = FUNC_0(VAR_2);
 if (VAR_3->hardware & VAR_1)
  return 14467;
 else
  return VAR_3->image[VAR_0] & 1 ? 9969 : 9920;
}
