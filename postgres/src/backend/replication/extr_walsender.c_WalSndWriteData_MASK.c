
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_7__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int int64 ;
typedef int XLogRecPtr ;
typedef int TransactionId ;
typedef scalar_t__ TimestampTz ;
struct TYPE_11__ {int sock; } ;
struct TYPE_10__ {int data; } ;
struct TYPE_9__ {TYPE_1__* out; } ;
struct TYPE_8__ {int len; int * data; } ;
typedef TYPE_2__ LogicalDecodingContext ;


 int FUNC_0 () ;
 int VAR_0 ;
 scalar_t__ FUNC_1 () ;
 int VAR_1 ;
 TYPE_7__* VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int ) ;
 int FUNC_3 () ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 () ;
 scalar_t__ FUNC_7 (int ,int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_8 (int ,int,int ,long,int ) ;
 int FUNC_9 () ;
 long FUNC_10 (scalar_t__) ;
 int FUNC_11 () ;
 int FUNC_12 () ;
 int VAR_10 ;
 int FUNC_13 (int *,int ,int) ;
 scalar_t__ FUNC_14 () ;
 int FUNC_15 () ;
 int FUNC_16 (char,int *,int ) ;
 int FUNC_17 (TYPE_3__*,scalar_t__) ;
 int FUNC_18 (TYPE_3__*) ;
 TYPE_3__ VAR_11 ;
 int VAR_12 ;

__attribute__((used)) static void
FUNC_19(LogicalDecodingContext *VAR_13, XLogRecPtr VAR_14, TransactionId VAR_15,
    bool VAR_16)
{
 TimestampTz VAR_17;






 FUNC_18(&VAR_11);
 VAR_17 = FUNC_1();
 FUNC_17(&VAR_11, VAR_17);
 FUNC_13(&VAR_13->out->data[1 + sizeof(int64) + sizeof(int64)],
     VAR_11.data, sizeof(int64));


 FUNC_16('d', VAR_13->out->data, VAR_13->out->len);

 FUNC_0();


 if (FUNC_14() != 0)
  FUNC_12();


 if (VAR_17 < FUNC_7(VAR_10,
            VAR_12 / 2) &&
  !FUNC_15())
 {
  return;
 }


 for (;;)
 {
  int VAR_18;
  long VAR_19;


  FUNC_3();


  FUNC_9();


  FUNC_11();

  if (!FUNC_15())
   break;

  VAR_19 = FUNC_10(FUNC_1());

  VAR_18 = VAR_6 | VAR_5 |
   VAR_8 | VAR_7 | VAR_9;


  (void) FUNC_8(VAR_1, VAR_18,
         VAR_2->sock, VAR_19,
         VAR_4);


  FUNC_4(VAR_1);

  FUNC_0();


  if (VAR_0)
  {
   VAR_0 = 0;
   FUNC_2(VAR_3);
   FUNC_6();
  }


  if (FUNC_14() != 0)
   FUNC_12();
 }


 FUNC_5(VAR_1);
}
