
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int remote_lsn; int force; int node_id; } ;
typedef TYPE_1__ xl_replorigin_set ;
struct TYPE_4__ {int node_id; } ;
typedef TYPE_2__ xl_replorigin_drop ;
typedef int uint8 ;
typedef int uint32 ;
typedef int XLogReaderState ;
typedef int StringInfo ;




 int VAR_0 ;
 char* FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,char*,int ,...) ;

void
FUNC_3(StringInfo VAR_1, XLogReaderState *VAR_2)
{
 char *VAR_3 = FUNC_0(VAR_2);
 uint8 VAR_4 = FUNC_1(VAR_2) & ~VAR_0;

 switch (VAR_4)
 {
  case 128:
   {
    xl_replorigin_set *VAR_5;

    VAR_5 = (xl_replorigin_set *) VAR_3;

    FUNC_2(VAR_1, "set %u; lsn %X/%X; force: %d",
         VAR_5->node_id,
         (uint32) (VAR_5->remote_lsn >> 32),
         (uint32) VAR_5->remote_lsn,
         VAR_5->force);
    break;
   }
  case 129:
   {
    xl_replorigin_drop *VAR_6;

    VAR_6 = (xl_replorigin_drop *) VAR_3;

    FUNC_2(VAR_1, "drop %u", VAR_6->node_id);
    break;
   }
 }
}
