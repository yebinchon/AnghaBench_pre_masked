
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ start_time; scalar_t__ available; scalar_t__ length; scalar_t__ kbps; int on_data_arg; int (* on_data ) (int ,int) ;} ;
typedef TYPE_1__ prog_state ;
typedef scalar_t__ int64_t ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (int) ;

__attribute__((used)) static void FUNC_6(prog_state *VAR_0)
{
 int VAR_1 = 0;

 VAR_0->start_time = FUNC_1();

 while (!VAR_1)
 {




  FUNC_5(200000);


  FUNC_2(VAR_0);


  if (VAR_0->available < VAR_0->length)
  {
   int64_t VAR_2 = (FUNC_1() - VAR_0->start_time) * VAR_0->kbps;
   if (VAR_2 > VAR_0->length)
    VAR_2 = VAR_0->length;
   VAR_0->available = VAR_2;
  }
  else
  {
   VAR_1 = 1;
  }

  FUNC_4(VAR_0);


  if (VAR_0->on_data)
   VAR_0->on_data(VAR_0->on_data_arg, VAR_1);
 }
}
