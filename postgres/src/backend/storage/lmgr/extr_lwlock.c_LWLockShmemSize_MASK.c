
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int tranche_name; } ;
typedef scalar_t__ Size ;
typedef int NamedLWLockTranche ;
typedef int LWLockPadded ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 () ;
 scalar_t__ FUNC_1 (scalar_t__,scalar_t__) ;
 int VAR_4 ;
 scalar_t__ FUNC_2 (int,int) ;
 scalar_t__ FUNC_3 (int ) ;

Size
FUNC_4(void)
{
 Size VAR_5;
 int VAR_6;
 int VAR_7 = VAR_1;

 VAR_7 += FUNC_0();


 VAR_5 = FUNC_2(VAR_7, sizeof(LWLockPadded));


 VAR_5 = FUNC_1(VAR_5, sizeof(int) + VAR_0);


 VAR_5 = FUNC_1(VAR_5, FUNC_2(VAR_3, sizeof(NamedLWLockTranche)));


 for (VAR_6 = 0; VAR_6 < VAR_3; VAR_6++)
  VAR_5 = FUNC_1(VAR_5, FUNC_3(VAR_2[VAR_6].tranche_name) + 1);


 VAR_4 = 0;

 return VAR_5;
}
