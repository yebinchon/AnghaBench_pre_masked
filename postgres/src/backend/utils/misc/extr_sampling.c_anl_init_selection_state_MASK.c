
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__* randstate; } ;


 double FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 TYPE_1__ VAR_0 ;
 int FUNC_2 () ;
 int FUNC_3 (scalar_t__*) ;
 int FUNC_4 (int ,scalar_t__*) ;

double
FUNC_5(int VAR_1)
{

 if (VAR_0.randstate[0] == 0)
  FUNC_4(FUNC_2(), VAR_0.randstate);


 return FUNC_0(-FUNC_1(FUNC_3(VAR_0.randstate)) / VAR_1);
}
