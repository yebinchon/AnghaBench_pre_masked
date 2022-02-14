
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int relNode; int dbNode; int spcNode; } ;
struct TYPE_4__ {TYPE_1__ node; } ;
typedef TYPE_2__ xl_seq_rec ;
typedef scalar_t__ uint8 ;
typedef int XLogReaderState ;
typedef int StringInfo ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 char* FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int ,char*,int ,int ,int ) ;

void
FUNC_3(StringInfo VAR_2, XLogReaderState *VAR_3)
{
 char *VAR_4 = FUNC_0(VAR_3);
 uint8 VAR_5 = FUNC_1(VAR_3) & ~VAR_1;
 xl_seq_rec *VAR_6 = (xl_seq_rec *) VAR_4;

 if (VAR_5 == VAR_0)
  FUNC_2(VAR_2, "rel %u/%u/%u",
       VAR_6->node.spcNode, VAR_6->node.dbNode,
       VAR_6->node.relNode);
}
