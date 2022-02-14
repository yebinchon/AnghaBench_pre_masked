
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_pmac {int control_mask; int rate_index; scalar_t__ format; int (* set_format ) (struct snd_pmac*) ;TYPE_1__* awacs; } ;
struct TYPE_2__ {int byteswap; int control; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (struct snd_pmac*) ;

__attribute__((used)) static void FUNC_2(struct snd_pmac *VAR_1)
{

 FUNC_0(&VAR_1->awacs->control, VAR_1->control_mask | (VAR_1->rate_index << 8));
 FUNC_0(&VAR_1->awacs->byteswap, VAR_1->format == VAR_0 ? 1 : 0);
 if (VAR_1->set_format)
  VAR_1->set_format(VAR_1);
}
