
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


struct TYPE_18__ {int * record; int origptr; int endptr; } ;
typedef TYPE_2__ XLogRecordBuffer ;
typedef int XLogReaderState ;
struct TYPE_19__ {int reorder; TYPE_1__* reader; } ;
struct TYPE_17__ {int EndRecPtr; int ReadRecPtr; } ;
typedef int RmgrIds ;
typedef TYPE_3__ LogicalDecodingContext ;


 int FUNC_0 (TYPE_3__*,TYPE_2__*) ;
 int FUNC_1 (TYPE_3__*,TYPE_2__*) ;
 int FUNC_2 (TYPE_3__*,TYPE_2__*) ;
 int FUNC_3 (TYPE_3__*,TYPE_2__*) ;
 int FUNC_4 (TYPE_3__*,TYPE_2__*) ;
 int FUNC_5 (TYPE_3__*,TYPE_2__*) ;
 int VAR_0 ;
 int FUNC_6 (int ,int ,int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int ,char*,int ) ;

void
FUNC_10(LogicalDecodingContext *VAR_1, XLogReaderState *VAR_2)
{
 XLogRecordBuffer VAR_3;

 VAR_3.origptr = VAR_1->reader->ReadRecPtr;
 VAR_3.endptr = VAR_1->reader->EndRecPtr;
 VAR_3.record = VAR_2;


 switch ((RmgrIds) FUNC_7(VAR_2))
 {




  case 128:
   FUNC_4(VAR_1, &VAR_3);
   break;

  case 129:
   FUNC_5(VAR_1, &VAR_3);
   break;

  case 131:
   FUNC_3(VAR_1, &VAR_3);
   break;

  case 141:
   FUNC_0(VAR_1, &VAR_3);
   break;

  case 140:
   FUNC_1(VAR_1, &VAR_3);
   break;

  case 139:
   FUNC_2(VAR_1, &VAR_3);
   break;






  case 133:
  case 148:
  case 146:
  case 130:
  case 138:
  case 136:
  case 149:
  case 142:
  case 144:
  case 143:
  case 134:
  case 132:
  case 150:
  case 147:
  case 135:
  case 145:

   FUNC_6(VAR_1->reorder, FUNC_8(VAR_2),
         VAR_3.origptr);
   break;
  case 137:
   FUNC_9(VAR_0, "unexpected RM_NEXT_ID rmgr_id: %u", (RmgrIds) FUNC_7(VAR_3.record));
 }
}
