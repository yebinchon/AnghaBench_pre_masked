
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int XLogRecPtr ;
typedef int TransactionId ;
typedef scalar_t__ TimestampTz ;
struct TYPE_2__ {int delayChkpt; } ;
typedef int SharedInvalidationMessage ;
typedef int RelFileNode ;


 scalar_t__ VAR_0 ;
 int FUNC_0 () ;
 scalar_t__ FUNC_1 () ;
 scalar_t__ VAR_1 ;
 TYPE_1__* VAR_2 ;
 int VAR_3 ;
 int FUNC_2 () ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int ,int,int *) ;
 int FUNC_5 (int ,int,int *,scalar_t__,scalar_t__,int) ;
 int VAR_4 ;
 int FUNC_6 (int ) ;
 int VAR_5 ;
 int FUNC_7 (scalar_t__,int,int *,int,int *,int,int *,int,int,int,int ,char const*) ;
 int FUNC_8 (int ,int ) ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;

__attribute__((used)) static void
FUNC_9(TransactionId VAR_9,
        int VAR_10,
        TransactionId *VAR_11,
        int VAR_12,
        RelFileNode *VAR_13,
        int VAR_14,
        SharedInvalidationMessage *VAR_15,
        bool VAR_16,
        const char *VAR_17)
{
 XLogRecPtr VAR_18;
 TimestampTz VAR_19 = FUNC_1();
 bool VAR_20;





 VAR_20 = (VAR_6 != VAR_1 &&
      VAR_6 != VAR_0);

 FUNC_2();


 VAR_2->delayChkpt = 1;






 VAR_18 = FUNC_7(VAR_19,
         VAR_10, VAR_11, VAR_12, VAR_13,
         VAR_14, VAR_15,
         VAR_16, 0,
         VAR_3 | VAR_4,
         VAR_9, VAR_17);


 if (VAR_20)

  FUNC_8(VAR_7,
           VAR_5);
 if (!VAR_20 || VAR_8 == 0)
  VAR_8 = VAR_19;

 FUNC_5(VAR_9, VAR_10, VAR_11,
           VAR_8,
           VAR_6, 0);
 FUNC_6(VAR_18);


 FUNC_4(VAR_9, VAR_10, VAR_11);


 VAR_2->delayChkpt = 0;

 FUNC_0();







 FUNC_3(VAR_18, 1);
}
