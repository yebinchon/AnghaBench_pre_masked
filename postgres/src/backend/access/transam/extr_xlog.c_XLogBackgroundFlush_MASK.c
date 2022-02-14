
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32 ;
struct TYPE_5__ {int Write; int Flush; } ;
typedef TYPE_1__ XLogwrtRqst ;
typedef scalar_t__ TimestampTz ;
struct TYPE_7__ {int Flush; int Write; } ;
struct TYPE_6__ {int asyncXactLSN; TYPE_4__ LogwrtResult; int info_lck; TYPE_1__ LogwrtRqst; } ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 () ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ) ;
 int VAR_2 ;
 TYPE_4__ VAR_3 ;
 scalar_t__ FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (scalar_t__,scalar_t__,int ) ;
 int VAR_4 ;
 int FUNC_10 (int) ;
 int FUNC_11 () ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_12 (int,int ,int ) ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 TYPE_3__* VAR_9 ;
 int FUNC_13 () ;
 int FUNC_14 (TYPE_1__,int) ;
 int FUNC_15 (int ,char*,int ,int ,int ,int ,int ,int ,int ,int ) ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;

bool
FUNC_16(void)
{
 XLogwrtRqst VAR_13;
 bool VAR_14 = 1;
 static TimestampTz VAR_15;
 TimestampTz VAR_16;
 int VAR_17;


 if (FUNC_5())
  return 0;


 FUNC_7(&VAR_9->info_lck);
 VAR_3 = VAR_9->LogwrtResult;
 VAR_13 = VAR_9->LogwrtRqst;
 FUNC_8(&VAR_9->info_lck);


 VAR_13.Write -= VAR_13.Write % VAR_7;


 if (VAR_13.Write <= VAR_3.Flush)
 {
  FUNC_7(&VAR_9->info_lck);
  VAR_13.Write = VAR_9->asyncXactLSN;
  FUNC_8(&VAR_9->info_lck);
  VAR_14 = 0;
 }






 if (VAR_13.Write <= VAR_3.Flush)
 {
  if (VAR_10 >= 0)
  {
   if (!FUNC_12(VAR_3.Write, VAR_11,
         VAR_12))
   {
    FUNC_13();
   }
  }
  return 0;
 }





 VAR_16 = FUNC_2();
 VAR_17 =
  VAR_13.Write / VAR_7 - VAR_3.Flush / VAR_7;

 if (VAR_6 == 0 || VAR_15 == 0)
 {

  VAR_13.Flush = VAR_13.Write;
  VAR_15 = VAR_16;
 }
 else if (FUNC_9(VAR_15, VAR_16, VAR_5))
 {





  VAR_13.Flush = VAR_13.Write;
  VAR_15 = VAR_16;
 }
 else if (VAR_17 >= VAR_6)
 {

  VAR_13.Flush = VAR_13.Write;
  VAR_15 = VAR_16;
 }
 else
 {

  VAR_13.Flush = 0;
 }
 FUNC_6();


 FUNC_10(VAR_13.Write);
 FUNC_3(VAR_4, VAR_2);
 VAR_3 = VAR_9->LogwrtResult;
 if (VAR_13.Write > VAR_3.Write ||
  VAR_13.Flush > VAR_3.Flush)
 {
  FUNC_14(VAR_13, VAR_14);
 }
 FUNC_4(VAR_4);

 FUNC_1();


 FUNC_11();





 FUNC_0(VAR_0, 1);






 return 1;
}
