
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ XLogRecPtr ;
typedef int TimestampTz ;
struct TYPE_4__ {scalar_t__ last_lsn; int write_head; int* read_heads; TYPE_1__* buffer; } ;
struct TYPE_3__ {int time; scalar_t__ lsn; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_2__* VAR_3 ;

__attribute__((used)) static void
FUNC_0(XLogRecPtr VAR_4, TimestampTz VAR_5)
{
 bool VAR_6;
 int VAR_7;
 int VAR_8;

 if (!VAR_2)
  return;





 if (VAR_3->last_lsn == VAR_4)
  return;
 VAR_3->last_lsn = VAR_4;







 VAR_7 = (VAR_3->write_head + 1) % VAR_0;
 VAR_6 = 0;
 for (VAR_8 = 0; VAR_8 < VAR_1; ++VAR_8)
 {
  if (VAR_7 == VAR_3->read_heads[VAR_8])
   VAR_6 = 1;
 }






 if (VAR_6)
 {
  VAR_7 = VAR_3->write_head;
  if (VAR_3->write_head > 0)
   VAR_3->write_head--;
  else
   VAR_3->write_head = VAR_0 - 1;
 }


 VAR_3->buffer[VAR_3->write_head].lsn = VAR_4;
 VAR_3->buffer[VAR_3->write_head].time = VAR_5;
 VAR_3->write_head = VAR_7;
}
