
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct torture_random_state {int dummy; } ;
struct TYPE_2__ {int nrealwriters_stress; } ;


 TYPE_1__ VAR_0 ;
 int FUNC_0 (unsigned long const) ;
 int FUNC_1 () ;
 int FUNC_2 (struct torture_random_state*) ;

__attribute__((used)) static void FUNC_3(struct torture_random_state *VAR_1)
{
 const unsigned long VAR_2 = 100;


 if (!(FUNC_2(VAR_1) %
       (VAR_0.nrealwriters_stress * 2000 * VAR_2)))
  FUNC_0(VAR_2);
 if (!(FUNC_2(VAR_1) % (VAR_0.nrealwriters_stress * 20000)))
  FUNC_1();
}
