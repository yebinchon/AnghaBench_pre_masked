
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {int snapshot_type; } ;
typedef TYPE_1__* Snapshot ;
typedef int HeapTuple ;
typedef int Buffer ;


 int FUNC_0 (int ,TYPE_1__*,int ) ;
 int FUNC_1 (int ,TYPE_1__*,int ) ;
 int FUNC_2 (int ,TYPE_1__*,int ) ;
 int FUNC_3 (int ,TYPE_1__*,int ) ;
 int FUNC_4 (int ,TYPE_1__*,int ) ;
 int FUNC_5 (int ,TYPE_1__*,int ) ;
 int FUNC_6 (int ,TYPE_1__*,int ) ;
bool
FUNC_7(HeapTuple VAR_0, Snapshot VAR_1, Buffer VAR_2)
{
 switch (VAR_1->snapshot_type)
 {
  case 131:
   return FUNC_3(VAR_0, VAR_1, VAR_2);
   break;
  case 129:
   return FUNC_5(VAR_0, VAR_1, VAR_2);
   break;
  case 134:
   return FUNC_0(VAR_0, VAR_1, VAR_2);
   break;
  case 128:
   return FUNC_6(VAR_0, VAR_1, VAR_2);
   break;
  case 133:
   return FUNC_1(VAR_0, VAR_1, VAR_2);
   break;
  case 132:
   return FUNC_2(VAR_0, VAR_1, VAR_2);
   break;
  case 130:
   return FUNC_4(VAR_0, VAR_1, VAR_2);
   break;
 }

 return 0;
}
