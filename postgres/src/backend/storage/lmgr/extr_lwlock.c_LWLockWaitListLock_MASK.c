
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int uint32 ;
struct TYPE_10__ {int spin_delay_count; } ;
typedef TYPE_1__ lwlock_stats ;
struct TYPE_12__ {int state; } ;
struct TYPE_11__ {int delays; } ;
typedef TYPE_2__ SpinDelayStatus ;
typedef TYPE_3__ LWLock ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;
 TYPE_1__* FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void
FUNC_6(LWLock *VAR_1)
{
 uint32 VAR_2;







 while (1)
 {

  VAR_2 = FUNC_4(&VAR_1->state, VAR_0);
  if (!(VAR_2 & VAR_0))
   break;


  {
   SpinDelayStatus VAR_3;

   FUNC_2(&VAR_3);

   while (VAR_2 & VAR_0)
   {
    FUNC_3(&VAR_3);
    VAR_2 = FUNC_5(&VAR_1->state);
   }



   FUNC_0(&VAR_3);
  }





 }




}
