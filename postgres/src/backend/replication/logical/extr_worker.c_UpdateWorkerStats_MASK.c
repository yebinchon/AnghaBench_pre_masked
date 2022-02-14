
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* XLogRecPtr ;
typedef void* TimestampTz ;
struct TYPE_2__ {void* reply_time; void* reply_lsn; int last_recv_time; void* last_send_time; void* last_lsn; } ;


 int FUNC_0 () ;
 TYPE_1__* VAR_0 ;

__attribute__((used)) static void
FUNC_1(XLogRecPtr VAR_1, TimestampTz VAR_2, bool VAR_3)
{
 VAR_0->last_lsn = VAR_1;
 VAR_0->last_send_time = VAR_2;
 VAR_0->last_recv_time = FUNC_0();
 if (VAR_3)
 {
  VAR_0->reply_lsn = VAR_1;
  VAR_0->reply_time = VAR_2;
 }
}
