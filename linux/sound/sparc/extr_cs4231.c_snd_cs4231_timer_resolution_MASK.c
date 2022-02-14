
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_timer {int dummy; } ;
struct snd_cs4231 {int* image; } ;


 size_t VAR_0 ;
 struct snd_cs4231* FUNC_0 (struct snd_timer*) ;

__attribute__((used)) static unsigned long FUNC_1(struct snd_timer *VAR_1)
{
 struct snd_cs4231 *VAR_2 = FUNC_0(VAR_1);

 return VAR_2->image[VAR_0] & 1 ? 9969 : 9920;
}
