
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ spins; scalar_t__ delays; int cur_delay; int func; int line; int file; } ;
typedef TYPE_1__ SpinDelayStatus ;


 double VAR_0 ;
 scalar_t__ VAR_1 ;
 void* VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 () ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int) ;
 scalar_t__ FUNC_4 () ;
 int FUNC_5 (int ,int ,int ) ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;

void
FUNC_6(SpinDelayStatus *VAR_6)
{

 FUNC_0();


 if (++(VAR_6->spins) >= VAR_4)
 {
  if (++(VAR_6->delays) > VAR_3)
   FUNC_5(VAR_6->file, VAR_6->line, VAR_6->func);

  if (VAR_6->cur_delay == 0)
   VAR_6->cur_delay = VAR_2;

  FUNC_3(VAR_6->cur_delay);







  VAR_6->cur_delay += (int) (VAR_6->cur_delay *
         ((double) FUNC_4() / (double) VAR_1) + 0.5);

  if (VAR_6->cur_delay > VAR_0)
   VAR_6->cur_delay = VAR_2;

  VAR_6->spins = 0;
 }
}
