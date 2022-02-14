
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai {size_t id; } ;
struct cygnus_audio {struct cygnus_aio_port* portinfo; } ;
struct cygnus_aio_port {int dummy; } ;


 struct cygnus_audio* FUNC_0 (struct snd_soc_dai*) ;

__attribute__((used)) static struct cygnus_aio_port *FUNC_1(struct snd_soc_dai *VAR_0)
{
 struct cygnus_audio *VAR_1 = FUNC_0(VAR_0);

 return &VAR_1->portinfo[VAR_0->id];
}
