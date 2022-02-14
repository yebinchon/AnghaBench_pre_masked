
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int XLogRecord ;
typedef scalar_t__ XLogRecPtr ;
struct TYPE_7__ {scalar_t__ sentPtr; int mutex; } ;
typedef TYPE_1__ WalSnd ;
struct TYPE_9__ {scalar_t__ EndRecPtr; } ;
struct TYPE_8__ {TYPE_3__* reader; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 () ;
 int VAR_1 ;
 int FUNC_1 (TYPE_2__*,TYPE_3__*) ;
 TYPE_1__* VAR_2 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int VAR_3 ;
 int * FUNC_4 (TYPE_3__*,int ,char**) ;
 int FUNC_5 (int ,char*,char*) ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 TYPE_2__* VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;

__attribute__((used)) static void
FUNC_6(void)
{
 XLogRecord *VAR_9;
 char *VAR_10;
 XLogRecPtr VAR_11;







 VAR_3 = 0;

 VAR_9 = FUNC_4(VAR_6->reader, VAR_7, &VAR_10);
 VAR_7 = VAR_1;


 if (VAR_10 != ((void*)0))
  FUNC_5(VAR_0, "%s", VAR_10);




 VAR_11 = FUNC_0();

 if (VAR_9 != ((void*)0))
 {





  FUNC_1(VAR_6, VAR_6->reader);

  VAR_8 = VAR_6->reader->EndRecPtr;
 }


 if (VAR_6->reader->EndRecPtr >= VAR_11)
  VAR_3 = 1;






 if (VAR_3 && VAR_5)
  VAR_4 = 1;


 {
  WalSnd *VAR_12 = VAR_2;

  FUNC_2(&VAR_12->mutex);
  VAR_12->sentPtr = VAR_8;
  FUNC_3(&VAR_12->mutex);
 }
}
