
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_ff {TYPE_2__* spec; } ;
struct TYPE_4__ {TYPE_1__* protocol; } ;
struct TYPE_3__ {int (* switch_fetching_mode ) (struct snd_ff*,int) ;int (* finish_session ) (struct snd_ff*) ;} ;


 int FUNC_0 (struct snd_ff*) ;
 int FUNC_1 (struct snd_ff*,int) ;

__attribute__((used)) static inline void FUNC_2(struct snd_ff *VAR_0)
{
 VAR_0->spec->protocol->finish_session(VAR_0);
 VAR_0->spec->protocol->switch_fetching_mode(VAR_0, 0);
}
