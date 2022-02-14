
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32 ;
typedef int XLogRecPtr ;
struct TYPE_3__ {int write; int flush; int apply; int writeLag; int flushLag; int applyLag; int mutex; void* replyTime; } ;
typedef TYPE_1__ WalSnd ;
typedef void* TimestampTz ;
typedef int TimeOffset ;


 scalar_t__ VAR_0 ;
 void* FUNC_0 () ;
 int VAR_1 ;
 int FUNC_1 (int ,int,void*) ;
 int FUNC_2 (int) ;
 scalar_t__ VAR_2 ;
 TYPE_1__* VAR_3 ;
 int FUNC_3 (int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 () ;
 int FUNC_8 (int) ;
 int VAR_7 ;
 int FUNC_9 (scalar_t__,char*,int ,int ,int ,int ,int ,int ,char*,char*) ;
 scalar_t__ VAR_8 ;
 int FUNC_10 (char*) ;
 int FUNC_11 (int *) ;
 void* FUNC_12 (int *) ;
 char* FUNC_13 (int ) ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_14 (void*) ;

__attribute__((used)) static void
FUNC_15(void)
{
 XLogRecPtr VAR_11,
    VAR_12,
    VAR_13;
 bool VAR_14;
 TimeOffset VAR_15,
    VAR_16,
    VAR_17;
 bool VAR_18;
 TimestampTz VAR_19;
 TimestampTz VAR_20;

 static bool VAR_21 = 0;


 VAR_11 = FUNC_12(&VAR_9);
 VAR_12 = FUNC_12(&VAR_9);
 VAR_13 = FUNC_12(&VAR_9);
 VAR_20 = FUNC_12(&VAR_9);
 VAR_14 = FUNC_11(&VAR_9);

 if (VAR_8 <= VAR_0)
 {
  char *VAR_22;


  VAR_22 = FUNC_13(FUNC_14(VAR_20));

  FUNC_9(VAR_0, "write %X/%X flush %X/%X apply %X/%X%s reply_time %s",
    (uint32) (VAR_11 >> 32), (uint32) VAR_11,
    (uint32) (VAR_12 >> 32), (uint32) VAR_12,
    (uint32) (VAR_13 >> 32), (uint32) VAR_13,
    VAR_14 ? " (reply requested)" : "",
    VAR_22);

  FUNC_10(VAR_22);
 }


 VAR_19 = FUNC_0();
 VAR_15 = FUNC_1(VAR_6, VAR_11, VAR_19);
 VAR_16 = FUNC_1(VAR_5, VAR_12, VAR_19);
 VAR_17 = FUNC_1(VAR_4, VAR_13, VAR_19);
 VAR_18 = 0;
 if (VAR_13 == VAR_10)
 {
  if (VAR_21)
   VAR_18 = 1;
  VAR_21 = 1;
 }
 else
  VAR_21 = 0;


 if (VAR_14)
  FUNC_8(0);





 {
  WalSnd *VAR_23 = VAR_3;

  FUNC_5(&VAR_23->mutex);
  VAR_23->write = VAR_11;
  VAR_23->flush = VAR_12;
  VAR_23->apply = VAR_13;
  if (VAR_15 != -1 || VAR_18)
   VAR_23->writeLag = VAR_15;
  if (VAR_16 != -1 || VAR_18)
   VAR_23->flushLag = VAR_16;
  if (VAR_17 != -1 || VAR_18)
   VAR_23->applyLag = VAR_17;
  VAR_23->replyTime = VAR_20;
  FUNC_6(&VAR_23->mutex);
 }

 if (!VAR_7)
  FUNC_7();




 if (VAR_2 && VAR_12 != VAR_1)
 {
  if (FUNC_4(VAR_2))
   FUNC_2(VAR_12);
  else
   FUNC_3(VAR_12);
 }
}
