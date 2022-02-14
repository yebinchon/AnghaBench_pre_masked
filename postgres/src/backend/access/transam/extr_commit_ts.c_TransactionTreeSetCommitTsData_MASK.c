
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef void* TransactionId ;
typedef int TimestampTz ;
struct TYPE_6__ {void* newestCommitTsXid; } ;
struct TYPE_4__ {int nodeid; int time; } ;
struct TYPE_5__ {TYPE_1__ dataLastCommit; void* xidLastCommit; int commitTsActive; } ;
typedef int RepOriginId ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int FUNC_2 (void*,int,void**,int ,int ,int) ;
 TYPE_3__* VAR_2 ;
 scalar_t__ FUNC_3 (void*,void*) ;
 int FUNC_4 (void*) ;
 int FUNC_5 (void*,int,void**,int ,int ) ;
 TYPE_2__* VAR_3 ;

void
FUNC_6(TransactionId VAR_4, int VAR_5,
          TransactionId *VAR_6, TimestampTz VAR_7,
          RepOriginId VAR_8, bool VAR_9)
{
 int VAR_10;
 TransactionId VAR_11;
 TransactionId VAR_12;
 if (!VAR_3->commitTsActive)
  return;





 if (VAR_9)
  FUNC_5(VAR_4, VAR_5, VAR_6, VAR_7, VAR_8);





 if (VAR_5 > 0)
  VAR_12 = VAR_6[VAR_5 - 1];
 else
  VAR_12 = VAR_4;
 for (VAR_10 = 0, VAR_11 = VAR_4;;)
 {
  int VAR_13 = FUNC_4(VAR_11);
  int VAR_14;

  for (VAR_14 = VAR_10; VAR_14 < VAR_5; VAR_14++)
  {
   if (FUNC_4(VAR_6[VAR_14]) != VAR_13)
    break;
  }


  FUNC_2(VAR_11, VAR_14 - VAR_10, VAR_6 + VAR_10, VAR_7, VAR_8,
        VAR_13);


  if (VAR_14 + 1 >= VAR_5)
   break;





  VAR_11 = VAR_6[VAR_14];
  VAR_10 += VAR_14 - VAR_10 + 1;
 }


 FUNC_0(VAR_0, VAR_1);
 VAR_3->xidLastCommit = VAR_4;
 VAR_3->dataLastCommit.time = VAR_7;
 VAR_3->dataLastCommit.nodeid = VAR_8;


 if (FUNC_3(VAR_2->newestCommitTsXid, VAR_12))
  VAR_2->newestCommitTsXid = VAR_12;
 FUNC_1(VAR_0);
}
