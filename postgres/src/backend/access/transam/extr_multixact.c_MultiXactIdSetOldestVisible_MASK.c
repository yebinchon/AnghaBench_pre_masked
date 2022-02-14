
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
 int VAR_4 ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__,scalar_t__) ;
 TYPE_1__* VAR_5 ;
 size_t VAR_6 ;
 scalar_t__* VAR_7 ;
 scalar_t__* VAR_8 ;
 int FUNC_4 (int ,char*,size_t,scalar_t__) ;

__attribute__((used)) static void
FUNC_5(void)
{
 if (!FUNC_2(VAR_8[VAR_6]))
 {
  MultiXactId VAR_9;
  int VAR_10;

  FUNC_0(VAR_4, VAR_2);






  VAR_9 = VAR_5->nextMXact;
  if (VAR_9 < VAR_1)
   VAR_9 = VAR_1;

  for (VAR_10 = 1; VAR_10 <= VAR_3; VAR_10++)
  {
   MultiXactId VAR_11 = VAR_7[VAR_10];

   if (FUNC_2(VAR_11) &&
    FUNC_3(VAR_11, VAR_9))
    VAR_9 = VAR_11;
  }

  VAR_8[VAR_6] = VAR_9;

  FUNC_1(VAR_4);

  FUNC_4(VAR_0, "MultiXact: setting OldestVisible[%d] = %u",
     VAR_6, VAR_9);
 }
}
