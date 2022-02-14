
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ XLogRecPtr ;
struct TYPE_3__ {scalar_t__ lsn; scalar_t__ time; } ;
typedef TYPE_1__ WalTimeSample ;
typedef scalar_t__ TimestampTz ;
typedef int TimeOffset ;
struct TYPE_4__ {size_t* read_heads; size_t write_head; TYPE_1__* buffer; TYPE_1__* last_read; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 TYPE_2__* VAR_1 ;

__attribute__((used)) static TimeOffset
FUNC_1(int VAR_2, XLogRecPtr VAR_3, TimestampTz VAR_4)
{
 TimestampTz VAR_5 = 0;


 while (VAR_1->read_heads[VAR_2] != VAR_1->write_head &&
     VAR_1->buffer[VAR_1->read_heads[VAR_2]].lsn <= VAR_3)
 {
  VAR_5 = VAR_1->buffer[VAR_1->read_heads[VAR_2]].time;
  VAR_1->last_read[VAR_2] =
   VAR_1->buffer[VAR_1->read_heads[VAR_2]];
  VAR_1->read_heads[VAR_2] =
   (VAR_1->read_heads[VAR_2] + 1) % VAR_0;
 }
 if (VAR_1->read_heads[VAR_2] == VAR_1->write_head)
  VAR_1->last_read[VAR_2].time = 0;

 if (VAR_5 > VAR_4)
 {

  return -1;
 }
 else if (VAR_5 == 0)
 {
  if (VAR_1->read_heads[VAR_2] == VAR_1->write_head)
  {

   return -1;
  }
  else if (VAR_1->last_read[VAR_2].time != 0)
  {

   double VAR_6;
   WalTimeSample VAR_7 = VAR_1->last_read[VAR_2];
   WalTimeSample VAR_8 = VAR_1->buffer[VAR_1->read_heads[VAR_2]];

   if (VAR_3 < VAR_7.lsn)
   {





    return -1;
   }

   FUNC_0(VAR_7.lsn < VAR_8.lsn);

   if (VAR_7.time > VAR_8.time)
   {

    return -1;
   }


   VAR_6 =
    (double) (VAR_3 - VAR_7.lsn) / (double) (VAR_8.lsn - VAR_7.lsn);


   VAR_5 = (TimestampTz)
    ((double) VAR_7.time + (VAR_8.time - VAR_7.time) * VAR_6);
  }
  else
  {







   VAR_5 = VAR_1->buffer[VAR_1->read_heads[VAR_2]].time;
  }
 }


 FUNC_0(VAR_5 != 0);
 return VAR_4 - VAR_5;
}
