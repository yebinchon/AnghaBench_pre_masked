
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ nextMXact; } ;
typedef scalar_t__ MultiXactId ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__,scalar_t__) ;
 TYPE_1__* VAR_4 ;
 scalar_t__* VAR_5 ;
 scalar_t__* VAR_6 ;

MultiXactId
FUNC_4(void)
{
 MultiXactId VAR_7;
 MultiXactId VAR_8;
 int VAR_9;





 FUNC_0(VAR_3, VAR_1);






 VAR_8 = VAR_4->nextMXact;
 if (VAR_8 < VAR_0)
  VAR_8 = VAR_0;

 VAR_7 = VAR_8;
 for (VAR_9 = 1; VAR_9 <= VAR_2; VAR_9++)
 {
  MultiXactId VAR_10;

  VAR_10 = VAR_5[VAR_9];
  if (FUNC_2(VAR_10) &&
   FUNC_3(VAR_10, VAR_7))
   VAR_7 = VAR_10;
  VAR_10 = VAR_6[VAR_9];
  if (FUNC_2(VAR_10) &&
   FUNC_3(VAR_10, VAR_7))
   VAR_7 = VAR_10;
 }

 FUNC_1(VAR_3);

 return VAR_7;
}
