
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32 ;
typedef int XLogSegNo ;
typedef int XLogRecPtr ;
typedef int TransactionId ;
struct TYPE_3__ {int name; } ;
struct TYPE_4__ {TYPE_1__ data; } ;
typedef int ReplicationSlot ;


 int VAR_0 ;
 TYPE_2__* VAR_1 ;
 char* FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int ,int) ;
 int FUNC_2 (char*,int ,char*,char*,int,int,int) ;
 int VAR_2 ;

__attribute__((used)) static void
FUNC_3(char *VAR_3, ReplicationSlot *VAR_4, TransactionId VAR_5,
       XLogSegNo VAR_6)
{
 XLogRecPtr VAR_7;

 FUNC_1(VAR_6, 0, VAR_2, VAR_7);

 FUNC_2(VAR_3, VAR_0, "pg_replslot/%s/xid-%u-lsn-%X-%X.spill",
    FUNC_0(VAR_1->data.name),
    VAR_5,
    (uint32) (VAR_7 >> 32), (uint32) VAR_7);
}
