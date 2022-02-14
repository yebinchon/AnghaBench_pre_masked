
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef void* uint32 ;
struct TYPE_4__ {int mutex; int replyTime; } ;
typedef TYPE_1__ WalSnd ;
typedef void* TransactionId ;
typedef int TimestampTz ;
struct TYPE_5__ {void* xmin; } ;


 scalar_t__ VAR_0 ;
 void* VAR_1 ;
 TYPE_3__* VAR_2 ;
 int * VAR_3 ;
 TYPE_1__* VAR_4 ;
 int FUNC_0 (void*,void*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (void*,void*) ;
 scalar_t__ FUNC_4 (void*) ;
 scalar_t__ FUNC_5 (void*,void*) ;
 int FUNC_6 (scalar_t__,char*,void*,void*,void*,void*,char*) ;
 scalar_t__ VAR_5 ;
 int FUNC_7 (char*) ;
 void* FUNC_8 (int *,int) ;
 int FUNC_9 (int *) ;
 char* FUNC_10 (int ) ;
 int VAR_6 ;
 int FUNC_11 (int ) ;

__attribute__((used)) static void
FUNC_12(void)
{
 TransactionId VAR_7;
 uint32 VAR_8;
 TransactionId VAR_9;
 uint32 VAR_10;
 TimestampTz VAR_11;






 VAR_11 = FUNC_9(&VAR_6);
 VAR_7 = FUNC_8(&VAR_6, 4);
 VAR_8 = FUNC_8(&VAR_6, 4);
 VAR_9 = FUNC_8(&VAR_6, 4);
 VAR_10 = FUNC_8(&VAR_6, 4);

 if (VAR_5 <= VAR_0)
 {
  char *VAR_12;


  VAR_12 = FUNC_10(FUNC_11(VAR_11));

  FUNC_6(VAR_0, "hot standby feedback xmin %u epoch %u, catalog_xmin %u epoch %u reply_time %s",
    VAR_7,
    VAR_8,
    VAR_9,
    VAR_10,
    VAR_12);

  FUNC_7(VAR_12);
 }





 {
  WalSnd *VAR_13 = VAR_4;

  FUNC_1(&VAR_13->mutex);
  VAR_13->replyTime = VAR_11;
  FUNC_2(&VAR_13->mutex);
 }





 if (!FUNC_4(VAR_7)
  && !FUNC_4(VAR_9))
 {
  VAR_2->xmin = VAR_1;
  if (VAR_3 != ((void*)0))
   FUNC_0(VAR_7, VAR_9);
  return;
 }





 if (FUNC_4(VAR_7) &&
  !FUNC_3(VAR_7, VAR_8))
  return;

 if (FUNC_4(VAR_9) &&
  !FUNC_3(VAR_9, VAR_10))
  return;
 if (VAR_3 != ((void*)0))
  FUNC_0(VAR_7, VAR_9);
 else
 {
  if (FUNC_4(VAR_9)
   && FUNC_5(VAR_9, VAR_7))
   VAR_2->xmin = VAR_9;
  else
   VAR_2->xmin = VAR_7;
 }
}
