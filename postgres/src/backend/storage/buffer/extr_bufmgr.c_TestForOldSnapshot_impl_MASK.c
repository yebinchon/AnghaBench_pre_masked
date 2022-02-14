
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ whenTaken; } ;
typedef TYPE_1__* Snapshot ;
typedef int Relation ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 () ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char*) ;

void
FUNC_5(Snapshot VAR_2, Relation VAR_3)
{
 if (FUNC_1(VAR_3)
  && (VAR_2)->whenTaken < FUNC_0())
  FUNC_2(VAR_1,
    (FUNC_3(VAR_0),
     FUNC_4("snapshot too old")));
}
