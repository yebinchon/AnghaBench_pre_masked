
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ nextMXact; } ;
typedef scalar_t__ MultiXactId ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (scalar_t__) ;
 TYPE_1__* VAR_4 ;
 size_t VAR_5 ;
 scalar_t__* VAR_6 ;
 int FUNC_3 (int ,char*,size_t,scalar_t__) ;

void
FUNC_4(void)
{
 if (!FUNC_2(VAR_6[VAR_5]))
 {
  MultiXactId VAR_7;
  FUNC_0(VAR_3, VAR_2);






  VAR_7 = VAR_4->nextMXact;
  if (VAR_7 < VAR_1)
   VAR_7 = VAR_1;

  VAR_6[VAR_5] = VAR_7;

  FUNC_1(VAR_3);

  FUNC_3(VAR_0, "MultiXact: setting OldestMember[%d] = %u",
     VAR_5, VAR_7);
 }
}
