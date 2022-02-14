
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ client; } ;
struct snd_seq_port_subscribe {TYPE_1__ sender; } ;
struct snd_opl3 {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct snd_opl3*) ;
 int FUNC_1 (struct snd_opl3*) ;

__attribute__((used)) static int FUNC_2(void *VAR_1, struct snd_seq_port_subscribe * VAR_2)
{
 struct snd_opl3 *VAR_3 = VAR_1;

 FUNC_0(VAR_3);

 if (VAR_2->sender.client != VAR_0)
  FUNC_1(VAR_3);
 return 0;
}
