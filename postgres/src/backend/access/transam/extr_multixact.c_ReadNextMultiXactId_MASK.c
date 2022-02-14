
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
 TYPE_1__* VAR_3 ;

MultiXactId
FUNC_2(void)
{
 MultiXactId VAR_4;


 FUNC_0(VAR_2, VAR_1);
 VAR_4 = VAR_3->nextMXact;
 FUNC_1(VAR_2);

 if (VAR_4 < VAR_0)
  VAR_4 = VAR_0;

 return VAR_4;
}
