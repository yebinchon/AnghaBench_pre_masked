
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* TransactionId ;
typedef scalar_t__ TimestampTz ;
struct TYPE_2__ {scalar_t__ next_map_update; scalar_t__ head_offset; int head_timestamp; scalar_t__ count_used; void** xid_by_minute; int mutex_latest_xmin; void* latest_xmin; } ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (void*,void*) ;
 int FUNC_7 (void*) ;
 scalar_t__ FUNC_8 (void*,void*) ;
 int VAR_4 ;
 int FUNC_9 (int ,char*,long) ;
 TYPE_1__* VAR_5 ;
 scalar_t__ VAR_6 ;

void
FUNC_10(TimestampTz VAR_7, TransactionId VAR_8)
{
 TimestampTz VAR_9;
 TransactionId VAR_10;
 TimestampTz VAR_11;
 bool VAR_12 = 0;


 FUNC_1(VAR_6 >= 0);

 VAR_9 = FUNC_0(VAR_7);





 FUNC_4(&VAR_5->mutex_latest_xmin);
 VAR_10 = VAR_5->latest_xmin;
 VAR_11 = VAR_5->next_map_update;
 if (VAR_9 > VAR_11)
 {
  VAR_5->next_map_update = VAR_9;
  VAR_12 = 1;
 }
 if (FUNC_6(VAR_8, VAR_10))
  VAR_5->latest_xmin = VAR_8;
 FUNC_5(&VAR_5->mutex_latest_xmin);


 if (!VAR_12)
  return;


 if (VAR_6 == 0)
  return;







 if (VAR_7 < 0)
 {
  FUNC_9(VAR_0,
    "MaintainOldSnapshotTimeMapping called with negative whenTaken = %ld",
    (long) VAR_7);
  return;
 }
 if (!FUNC_7(VAR_8))
 {
  FUNC_9(VAR_0,
    "MaintainOldSnapshotTimeMapping called with xmin = %lu",
    (unsigned long) VAR_8);
  return;
 }

 FUNC_2(VAR_3, VAR_1);

 FUNC_1(VAR_5->head_offset >= 0);
 FUNC_1(VAR_5->head_offset < VAR_2);
 FUNC_1((VAR_5->head_timestamp % VAR_4) == 0);
 FUNC_1(VAR_5->count_used >= 0);
 FUNC_1(VAR_5->count_used <= VAR_2);

 if (VAR_5->count_used == 0)
 {

  VAR_5->head_offset = 0;
  VAR_5->head_timestamp = VAR_9;
  VAR_5->count_used = 1;
  VAR_5->xid_by_minute[0] = VAR_8;
 }
 else if (VAR_9 < VAR_5->head_timestamp)
 {

  FUNC_3(VAR_3);
  FUNC_9(VAR_0,
    "MaintainOldSnapshotTimeMapping called with old whenTaken = %ld",
    (long) VAR_7);
  return;
 }
 else if (VAR_9 <= (VAR_5->head_timestamp +
     ((VAR_5->count_used - 1)
      * VAR_4)))
 {

  int VAR_13 = (VAR_5->head_offset
         + ((VAR_9 - VAR_5->head_timestamp)
         / VAR_4))
  % VAR_2;

  if (FUNC_8(VAR_5->xid_by_minute[VAR_13], VAR_8))
   VAR_5->xid_by_minute[VAR_13] = VAR_8;
 }
 else
 {

  int VAR_14 = ((VAR_9 - VAR_5->head_timestamp)
          / VAR_4);

  VAR_5->head_timestamp = VAR_9;

  if (VAR_14 >= VAR_2)
  {

   VAR_5->head_offset = 0;
   VAR_5->count_used = 1;
   VAR_5->xid_by_minute[0] = VAR_8;
  }
  else
  {

   int VAR_15;

   for (VAR_15 = 0; VAR_15 < VAR_14; VAR_15++)
   {
    if (VAR_5->count_used == VAR_2)
    {

     int VAR_16 = VAR_5->head_offset;

     if (VAR_16 == (VAR_2 - 1))
      VAR_5->head_offset = 0;
     else
      VAR_5->head_offset = VAR_16 + 1;
     VAR_5->xid_by_minute[VAR_16] = VAR_8;
    }
    else
    {

     int VAR_17 = (VAR_5->head_offset
           + VAR_5->count_used)
     % VAR_2;

     VAR_5->count_used++;
     VAR_5->xid_by_minute[VAR_17] = VAR_8;
    }
   }
  }
 }

 FUNC_3(VAR_3);
}
