
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct snd_emux_port* channels; } ;
struct snd_emux_port {TYPE_1__ chset; } ;


 int FUNC_0 (struct snd_emux_port*) ;
 int FUNC_1 (struct snd_emux_port*) ;

__attribute__((used)) static void
FUNC_2(void *VAR_0)
{
 struct snd_emux_port *VAR_1;

 VAR_1 = VAR_0;
 if (VAR_1) {



  FUNC_0(VAR_1->chset.channels);
  FUNC_0(VAR_1);
 }
}
