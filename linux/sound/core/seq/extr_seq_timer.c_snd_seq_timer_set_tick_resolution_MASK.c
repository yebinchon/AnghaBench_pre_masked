
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int resolution; } ;
struct snd_seq_timer {int tempo; int ppq; TYPE_1__ tick; } ;


 int FUNC_0 (TYPE_1__*,int ) ;

__attribute__((used)) static void FUNC_1(struct snd_seq_timer *VAR_0)
{
 if (VAR_0->tempo < 1000000)
  VAR_0->tick.resolution = (VAR_0->tempo * 1000) / VAR_0->ppq;
 else {

  unsigned int VAR_1;
  VAR_1 = VAR_0->tempo % VAR_0->ppq;
  VAR_1 = (VAR_1 * 1000) / VAR_0->ppq;
  VAR_0->tick.resolution = (VAR_0->tempo / VAR_0->ppq) * 1000;
  VAR_0->tick.resolution += VAR_1;
 }
 if (VAR_0->tick.resolution <= 0)
  VAR_0->tick.resolution = 1;
 FUNC_0(&VAR_0->tick, 0);
}
