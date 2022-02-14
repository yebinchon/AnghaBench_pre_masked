
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int TransactionId ;
typedef scalar_t__ TimestampTz ;
struct TYPE_4__ {int xmin; } ;
struct TYPE_3__ {scalar_t__ next_map_update; scalar_t__ threshold_timestamp; int count_used; scalar_t__ head_timestamp; int head_offset; int * xid_by_minute; int mutex_threshold; int threshold_xid; int mutex_latest_xmin; int latest_xmin; } ;
typedef int Relation ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;
 int VAR_0 ;
 TYPE_2__* VAR_1 ;
 scalar_t__ FUNC_4 (int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (scalar_t__,int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (int ,int ) ;
 scalar_t__ FUNC_10 (int ) ;
 scalar_t__ FUNC_11 (int ,int ) ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 TYPE_1__* VAR_6 ;
 scalar_t__ VAR_7 ;

TransactionId
FUNC_12(TransactionId VAR_8,
         Relation VAR_9)
{
 if (FUNC_10(VAR_8)
  && VAR_7 >= 0
  && FUNC_5(VAR_9))
 {
  TimestampTz VAR_10 = FUNC_1();
  TransactionId VAR_11 = VAR_8;
  TransactionId VAR_12;
  TimestampTz VAR_13;
  bool VAR_14 = 0;

  FUNC_7(&VAR_6->mutex_latest_xmin);
  VAR_12 = VAR_6->latest_xmin;
  VAR_13 = VAR_6->next_map_update;
  FUNC_8(&VAR_6->mutex_latest_xmin);
  if (VAR_7 == 0)
  {
   if (FUNC_11(VAR_12, VAR_1->xmin)
    && FUNC_9(VAR_12, VAR_11))
    VAR_11 = VAR_12;

   VAR_10 -= 5 * VAR_5;
   FUNC_6(VAR_10, VAR_11);

   return VAR_11;
  }

  VAR_10 = FUNC_0(VAR_10)
   - (VAR_7 * VAR_4);


  FUNC_7(&VAR_6->mutex_threshold);
  if (VAR_10 == VAR_6->threshold_timestamp)
  {
   VAR_11 = VAR_6->threshold_xid;
   VAR_14 = 1;
  }
  FUNC_8(&VAR_6->mutex_threshold);

  if (!VAR_14)
  {
   if (VAR_10 == VAR_13)
   {
    VAR_11 = VAR_12;
    if (FUNC_4(VAR_11, VAR_8))
     FUNC_6(VAR_10, VAR_11);
   }
   else
   {
    FUNC_2(VAR_3, VAR_0);

    if (VAR_6->count_used > 0
     && VAR_10 >= VAR_6->head_timestamp)
    {
     int VAR_15;

     VAR_15 = ((VAR_10 - VAR_6->head_timestamp)
         / VAR_4);
     if (VAR_15 > VAR_6->count_used - 1)
      VAR_15 = VAR_6->count_used - 1;
     VAR_15 = (VAR_6->head_offset + VAR_15)
      % VAR_2;
     VAR_11 = VAR_6->xid_by_minute[VAR_15];

     if (FUNC_4(VAR_11, VAR_8))
      FUNC_6(VAR_10, VAR_11);
    }

    FUNC_3(VAR_3);
   }
  }
  if (FUNC_10(VAR_12)
   && FUNC_11(VAR_12, VAR_11))
   VAR_11 = VAR_12;

  if (FUNC_4(VAR_11, VAR_8))
   return VAR_11;
 }

 return VAR_8;
}
