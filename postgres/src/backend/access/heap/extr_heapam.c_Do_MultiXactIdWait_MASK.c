
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint16 ;
typedef int XLTW_Oper ;
typedef int TransactionId ;
struct TYPE_4__ {int status; int xid; } ;
typedef int Relation ;
typedef int MultiXactStatus ;
typedef TYPE_1__ MultiXactMember ;
typedef int MultiXactId ;
typedef int ItemPointer ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,TYPE_1__**,int,int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 (int ,int ,int ,int ) ;
 int FUNC_9 (TYPE_1__*) ;

__attribute__((used)) static bool
FUNC_10(MultiXactId VAR_0, MultiXactStatus VAR_1,
       uint16 VAR_2, bool VAR_3,
       Relation VAR_4, ItemPointer VAR_5, XLTW_Oper VAR_6,
       int *VAR_7)
{
 bool VAR_8 = 1;
 MultiXactMember *VAR_9;
 int VAR_10;
 int VAR_11 = 0;


 VAR_10 = FUNC_3(VAR_2) ? -1 :
  FUNC_2(VAR_0, &VAR_9, 0,
         FUNC_4(VAR_2));

 if (VAR_10 >= 0)
 {
  int VAR_12;

  for (VAR_12 = 0; VAR_12 < VAR_10; VAR_12++)
  {
   TransactionId VAR_13 = VAR_9[VAR_12].xid;
   MultiXactStatus VAR_14 = VAR_9[VAR_12].status;

   if (FUNC_6(VAR_13))
   {
    VAR_11++;
    continue;
   }

   if (!FUNC_1(FUNC_5(VAR_14),
          FUNC_5(VAR_1)))
   {
    if (VAR_7 && FUNC_7(VAR_13))
     VAR_11++;
    continue;
   }
   if (VAR_3)
   {
    VAR_8 = FUNC_0(VAR_13);
    if (!VAR_8)
     break;
   }
   else
    FUNC_8(VAR_13, VAR_4, VAR_5, VAR_6);
  }

  FUNC_9(VAR_9);
 }

 if (VAR_7)
  *VAR_7 = VAR_11;

 return VAR_8;
}
