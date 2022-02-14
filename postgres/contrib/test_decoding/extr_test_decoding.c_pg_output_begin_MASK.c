
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ include_xids; } ;
typedef TYPE_1__ TestDecodingData ;
struct TYPE_11__ {int out; } ;
struct TYPE_10__ {int xid; } ;
typedef TYPE_2__ ReorderBufferTXN ;
typedef TYPE_3__ LogicalDecodingContext ;


 int FUNC_0 (TYPE_3__*,int) ;
 int FUNC_1 (TYPE_3__*,int) ;
 int FUNC_2 (int ,char*,int ) ;
 int FUNC_3 (int ,char*) ;

__attribute__((used)) static void
FUNC_4(LogicalDecodingContext *VAR_0, TestDecodingData *VAR_1, ReorderBufferTXN *VAR_2, bool VAR_3)
{
 FUNC_0(VAR_0, VAR_3);
 if (VAR_1->include_xids)
  FUNC_2(VAR_0->out, "BEGIN %u", VAR_2->xid);
 else
  FUNC_3(VAR_0->out, "BEGIN");
 FUNC_1(VAR_0, VAR_3);
}
