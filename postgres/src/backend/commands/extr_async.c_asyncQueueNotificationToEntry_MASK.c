
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int length; int data; int srcPid; int xid; int dboid; } ;
struct TYPE_5__ {size_t channel_len; size_t payload_len; int data; } ;
typedef TYPE_1__ Notification ;
typedef TYPE_2__ AsyncQueueEntry ;


 int FUNC_0 (int) ;
 size_t VAR_0 ;
 int FUNC_1 () ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,int ,size_t) ;

__attribute__((used)) static void
FUNC_4(Notification *VAR_5, AsyncQueueEntry *VAR_6)
{
 size_t VAR_7 = VAR_5->channel_len;
 size_t VAR_8 = VAR_5->payload_len;
 int VAR_9;

 FUNC_0(VAR_7 < VAR_3);
 FUNC_0(VAR_8 < VAR_4);


 VAR_9 = VAR_0 + VAR_8 + VAR_7;
 VAR_9 = FUNC_2(VAR_9);
 VAR_6->length = VAR_9;
 VAR_6->dboid = VAR_1;
 VAR_6->xid = FUNC_1();
 VAR_6->srcPid = VAR_2;
 FUNC_3(VAR_6->data, VAR_5->data, VAR_7 + VAR_8 + 2);
}
