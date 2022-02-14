
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32 ;
struct TYPE_2__ {int held; scalar_t__ childLocks; } ;
typedef int PREDICATELOCKTARGETTAG ;
typedef TYPE_1__ LOCALPREDICATELOCK ;


 scalar_t__ FUNC_0 (int const*) ;
 scalar_t__ FUNC_1 (int const*) ;
 int FUNC_2 (int const*,int ,int ) ;
 int FUNC_3 (int const*) ;
 scalar_t__ FUNC_4 (int const) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_5 (int const*) ;
 int FUNC_6 (int const*) ;
 scalar_t__ FUNC_7 (int ,int const*,int ,int ,int*) ;

__attribute__((used)) static void
FUNC_8(const PREDICATELOCKTARGETTAG *VAR_4)
{
 uint32 VAR_5;
 bool VAR_6;
 LOCALPREDICATELOCK *VAR_7;


 if (FUNC_5(VAR_4))
  return;

 if (FUNC_1(VAR_4))
  return;


 VAR_5 = FUNC_6(VAR_4);


 VAR_7 = (LOCALPREDICATELOCK *)
  FUNC_7(VAR_1,
         VAR_4, VAR_5,
         VAR_0, &VAR_6);
 VAR_7->held = 1;
 if (!VAR_6)
  VAR_7->childLocks = 0;


 FUNC_2(VAR_4, VAR_5, VAR_2);






 if (FUNC_0(VAR_4))
 {





 }
 else
 {

  if (FUNC_4(*VAR_4) != VAR_3)
   FUNC_3(VAR_4);
 }
}
