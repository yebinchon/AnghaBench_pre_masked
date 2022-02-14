
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint16 ;
typedef int TransactionId ;
struct TYPE_6__ {int hwlock; } ;
struct TYPE_5__ {int status; int xid; } ;
typedef TYPE_1__ MultiXactMember ;
typedef int MultiXactId ;
typedef size_t LockTupleMode ;
typedef int LOCKMODE ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,TYPE_1__**,int,int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (TYPE_1__*) ;
 TYPE_2__* VAR_0 ;

__attribute__((used)) static bool
FUNC_10(MultiXactId VAR_1, uint16 VAR_2,
      LockTupleMode VAR_3, bool *VAR_4)
{
 int VAR_5;
 MultiXactMember *VAR_6;
 bool VAR_7 = 0;
 LOCKMODE VAR_8 = VAR_0[VAR_3].hwlock;

 if (FUNC_2(VAR_2))
  return 0;

 VAR_5 = FUNC_1(VAR_1, &VAR_6, 0,
          FUNC_3(VAR_2));
 if (VAR_5 >= 0)
 {
  int VAR_9;

  for (VAR_9 = 0; VAR_9 < VAR_5; VAR_9++)
  {
   TransactionId VAR_10;
   LOCKMODE VAR_11;

   if (VAR_7 && (VAR_4 == ((void*)0) || *VAR_4))
    break;

   VAR_11 = FUNC_5(VAR_6[VAR_9].status);


   VAR_10 = VAR_6[VAR_9].xid;
   if (FUNC_7(VAR_10))
   {
    if (VAR_4 != ((void*)0))
     *VAR_4 = 1;
    continue;
   }
   else if (VAR_7)
    continue;


   if (!FUNC_0(VAR_11, VAR_8))
    continue;

   if (FUNC_4(VAR_6[VAR_9].status))
   {

    if (FUNC_6(VAR_10))
     continue;
   }
   else
   {

    if (!FUNC_8(VAR_10))
     continue;
   }
   VAR_7 = 1;
  }
  FUNC_9(VAR_6);
 }

 return VAR_7;
}
