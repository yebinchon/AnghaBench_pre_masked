
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ XLogRecPtr ;
struct TYPE_3__ {scalar_t__ roident; scalar_t__ remote_lsn; scalar_t__ local_lsn; int lock; } ;
typedef TYPE_1__ ReplicationState ;
typedef scalar_t__ RepOriginId ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *) ;
 int VAR_1 ;
 int * VAR_2 ;
 int FUNC_2 (scalar_t__) ;
 int VAR_3 ;
 TYPE_1__* VAR_4 ;

XLogRecPtr
FUNC_3(RepOriginId VAR_5, bool VAR_6)
{
 int VAR_7;
 XLogRecPtr VAR_8 = VAR_0;
 XLogRecPtr VAR_9 = VAR_0;


 FUNC_0(VAR_2, VAR_1);

 for (VAR_7 = 0; VAR_7 < VAR_3; VAR_7++)
 {
  ReplicationState *VAR_10;

  VAR_10 = &VAR_4[VAR_7];

  if (VAR_10->roident == VAR_5)
  {
   FUNC_0(&VAR_10->lock, VAR_1);

   VAR_9 = VAR_10->remote_lsn;
   VAR_8 = VAR_10->local_lsn;

   FUNC_1(&VAR_10->lock);

   break;
  }
 }

 FUNC_1(VAR_2);

 if (VAR_6 && VAR_8 != VAR_0)
  FUNC_2(VAR_8);

 return VAR_9;
}
