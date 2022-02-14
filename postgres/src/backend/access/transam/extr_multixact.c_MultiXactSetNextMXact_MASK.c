
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int nextOffset; int nextMXact; } ;
typedef int MultiXactOffset ;
typedef int MultiXactId ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 int FUNC_2 () ;
 int VAR_3 ;
 TYPE_1__* VAR_4 ;
 int FUNC_3 (int ,char*,int ,int ) ;

void
FUNC_4(MultiXactId VAR_5,
       MultiXactOffset VAR_6)
{
 FUNC_3(VAR_0, "MultiXact: setting next multi to %u offset %u",
    VAR_5, VAR_6);
 FUNC_0(VAR_3, VAR_2);
 VAR_4->nextMXact = VAR_5;
 VAR_4->nextOffset = VAR_6;
 FUNC_1(VAR_3);
 if (VAR_1)
  FUNC_2();
}
