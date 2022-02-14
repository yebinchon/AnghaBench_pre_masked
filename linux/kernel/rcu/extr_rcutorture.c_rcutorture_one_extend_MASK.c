
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct torture_random_state {int dummy; } ;
struct rt_read_seg {int rt_readstate; } ;
struct TYPE_2__ {int (* readlock ) () ;int (* read_delay ) (struct torture_random_state*,struct rt_read_seg*) ;int (* readunlock ) (int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int) ;
 TYPE_1__* VAR_8 ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 int FUNC_9 () ;
 int FUNC_10 () ;
 int FUNC_11 () ;
 int FUNC_12 (int) ;
 int FUNC_13 (struct torture_random_state*,struct rt_read_seg*) ;

__attribute__((used)) static void FUNC_14(int *VAR_9, int VAR_10,
      struct torture_random_state *VAR_11,
      struct rt_read_seg *VAR_12)
{
 int VAR_13 = -1;
 int VAR_14 = *VAR_9;
 int VAR_15 = ~*VAR_9 & VAR_10;
 int VAR_16 = *VAR_9 & ~VAR_10;

 FUNC_0(VAR_14 < 0);
 FUNC_0((VAR_14 >> VAR_7) > 1);
 VAR_12->rt_readstate = VAR_10;


 if (VAR_15 & VAR_0)
  FUNC_1();
 if (VAR_15 & VAR_1)
  FUNC_3();
 if (VAR_15 & VAR_3)
  FUNC_5();
 if (VAR_15 & VAR_4)
  FUNC_7();
 if (VAR_15 & VAR_6)
  FUNC_8();
 if (VAR_15 & VAR_5)
  VAR_13 = VAR_8->readlock() << VAR_7;


 if (VAR_16 & VAR_1)
  FUNC_4();
 if (VAR_16 & VAR_0)
  FUNC_2();
 if (VAR_16 & VAR_3)
  FUNC_6();
 if (VAR_16 & VAR_4)
  FUNC_9();
 if (VAR_16 & VAR_6)
  FUNC_10();
 if (VAR_16 & VAR_5)
  VAR_8->readunlock(VAR_14 >> VAR_7);


 if ((VAR_15 || VAR_16) && *VAR_9 && VAR_10)
  VAR_8->read_delay(VAR_11, VAR_12);


 if (VAR_13 == -1)
  VAR_13 = VAR_14 & ~VAR_2;
 FUNC_0(VAR_13 < 0);
 FUNC_0((VAR_13 >> VAR_7) > 1);
 *VAR_9 = VAR_13 | VAR_10;
 FUNC_0((*VAR_9 >> VAR_7) < 0);
 FUNC_0((*VAR_9 >> VAR_7) > 1);
}
