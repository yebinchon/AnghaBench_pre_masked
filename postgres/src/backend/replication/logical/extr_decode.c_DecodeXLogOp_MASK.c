
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8 ;
struct TYPE_5__ {int origptr; int record; } ;
typedef TYPE_1__ XLogRecordBuffer ;
struct TYPE_6__ {int reorder; int * snapshot_builder; } ;
typedef int SnapBuild ;
typedef TYPE_2__ LogicalDecodingContext ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int *,int ) ;
 int VAR_1 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,char*,int) ;

__attribute__((used)) static void
FUNC_5(LogicalDecodingContext *VAR_2, XLogRecordBuffer *VAR_3)
{
 SnapBuild *VAR_4 = VAR_2->snapshot_builder;
 uint8 VAR_5 = FUNC_2(VAR_3->record) & ~VAR_1;

 FUNC_0(VAR_2->reorder, FUNC_3(VAR_3->record),
       VAR_3->origptr);

 switch (VAR_5)
 {

  case 137:
  case 136:
   FUNC_1(VAR_4, VAR_3->origptr);

   break;
  case 138:





   break;
  case 131:
  case 132:
  case 128:
  case 139:
  case 130:
  case 129:
  case 133:
  case 134:
  case 135:
   break;
  default:
   FUNC_4(VAR_0, "unexpected RM_XLOG_ID record type: %u", VAR_5);
 }
}
