
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ int32 ;
struct TYPE_2__ {scalar_t__ stawidth; } ;
typedef int Oid ;
typedef int HeapTuple ;
typedef TYPE_1__* Form_pg_statistic ;
typedef int AttrNumber ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int VAR_0 ;
 int FUNC_6 (int ,int ,int ,int ) ;
 scalar_t__ FUNC_7 (int ,int ) ;
 scalar_t__ FUNC_8 (int ,int ) ;

int32
FUNC_9(Oid VAR_1, AttrNumber VAR_2)
{
 HeapTuple VAR_3;
 int32 VAR_4;

 if (&FUNC_7)
 {
  VAR_4 = FUNC_7) (VAR_1, VAR_2);
  if (VAR_4 > 0)
   return VAR_4;
 }
 VAR_3 = FUNC_6(VAR_0,
       FUNC_4(VAR_1),
       FUNC_3(VAR_2),
       FUNC_0(0));
 if (FUNC_2(VAR_3))
 {
  VAR_4 = ((Form_pg_statistic) FUNC_1(VAR_3))->stawidth;
  FUNC_5(VAR_3);
  if (VAR_4 > 0)
   return VAR_4;
 }
 return 0;
}
