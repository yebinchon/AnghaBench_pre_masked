
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t uint32 ;
typedef scalar_t__ TransactionId ;
struct TYPE_3__ {size_t xcnt; scalar_t__* xip; int xmax; int xmin; } ;
typedef TYPE_1__* Snapshot ;


 int FUNC_0 (int) ;
 int FUNC_1 () ;
 TYPE_1__* FUNC_2 () ;
 int FUNC_3 (scalar_t__,int ) ;
 scalar_t__ FUNC_4 (scalar_t__,int ) ;
 int FUNC_5 (scalar_t__) ;
 scalar_t__ FUNC_6 (scalar_t__,int ) ;

__attribute__((used)) static bool
FUNC_7(TransactionId VAR_0)
{
 Snapshot VAR_1;
 uint32 VAR_2;

 FUNC_0(FUNC_5(VAR_0));
 FUNC_0(!FUNC_3(VAR_0, FUNC_1()));

 VAR_1 = FUNC_2();

 if (FUNC_6(VAR_0, VAR_1->xmin))
  return 0;

 if (FUNC_4(VAR_0, VAR_1->xmax))
  return 1;

 for (VAR_2 = 0; VAR_2 < VAR_1->xcnt; VAR_2++)
 {
  if (VAR_0 == VAR_1->xip[VAR_2])
   return 1;
 }

 return 0;
}
