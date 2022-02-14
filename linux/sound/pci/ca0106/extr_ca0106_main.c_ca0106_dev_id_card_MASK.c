
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_card {int dummy; } ;
struct snd_ca0106 {struct snd_card* card; } ;



__attribute__((used)) static struct snd_card *FUNC_0(void *VAR_0)
{
 return ((struct snd_ca0106 *)VAR_0)->card;
}
