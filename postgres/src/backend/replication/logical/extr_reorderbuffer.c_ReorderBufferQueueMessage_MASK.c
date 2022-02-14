
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int XLogRecPtr ;
typedef scalar_t__ TransactionId ;
struct TYPE_15__ {int (* message ) (TYPE_4__*,int *,int ,int,char const*,int ,char const*) ;int context; } ;
struct TYPE_12__ {int message; int message_size; int prefix; } ;
struct TYPE_13__ {TYPE_1__ msg; } ;
struct TYPE_14__ {TYPE_2__ data; int action; } ;
typedef int Snapshot ;
typedef int Size ;
typedef int ReorderBufferTXN ;
typedef TYPE_3__ ReorderBufferChange ;
typedef TYPE_4__ ReorderBuffer ;
typedef int MemoryContext ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int VAR_1 ;
 TYPE_3__* FUNC_6 (TYPE_4__*) ;
 int FUNC_7 (TYPE_4__*,scalar_t__,int ,TYPE_3__*) ;
 int * FUNC_8 (TYPE_4__*,scalar_t__,int,int *,int ,int) ;
 int FUNC_9 (int volatile,int *) ;
 int FUNC_10 (int) ;
 int FUNC_11 (int ,char const*,int ) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (char const*) ;
 int FUNC_14 (TYPE_4__*,int *,int ,int,char const*,int ,char const*) ;

void
FUNC_15(ReorderBuffer *VAR_2, TransactionId VAR_3,
        Snapshot VAR_4, XLogRecPtr VAR_5,
        bool VAR_6, const char *VAR_7,
        Size VAR_8, const char *VAR_9)
{
 if (VAR_6)
 {
  MemoryContext VAR_10;
  ReorderBufferChange *VAR_11;

  FUNC_0(VAR_3 != VAR_0);

  VAR_10 = FUNC_1(VAR_2->context);

  VAR_11 = FUNC_6(VAR_2);
  VAR_11->action = VAR_1;
  VAR_11->data.msg.prefix = FUNC_13(VAR_7);
  VAR_11->data.msg.message_size = VAR_8;
  VAR_11->data.msg.message = FUNC_12(VAR_8);
  FUNC_11(VAR_11->data.msg.message, VAR_9, VAR_8);

  FUNC_7(VAR_2, VAR_3, VAR_5, VAR_11);

  FUNC_1(VAR_10);
 }
 else
 {
  ReorderBufferTXN *VAR_12 = ((void*)0);
  volatile Snapshot VAR_13 = VAR_4;

  if (VAR_3 != VAR_0)
   VAR_12 = FUNC_8(VAR_2, VAR_3, 1, ((void*)0), VAR_5, 1);


  FUNC_9(VAR_13, ((void*)0));
  FUNC_5();
  {
   VAR_2->message(VAR_2, VAR_12, VAR_5, 0, VAR_7, VAR_8, VAR_9);

   FUNC_10(0);
  }
  FUNC_2();
  {
   FUNC_10(1);
   FUNC_4();
  }
  FUNC_3();
 }
}
