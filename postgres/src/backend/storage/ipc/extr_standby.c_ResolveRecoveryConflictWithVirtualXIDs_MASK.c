
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ pid_t ;
typedef int VirtualTransactionId ;
typedef int TimestampTz ;
typedef int ProcSignalReason ;


 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int FUNC_2 () ;
 int VAR_0 ;
 scalar_t__ FUNC_3 (int ,int ,int) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int ,int) ;
 scalar_t__ FUNC_6 () ;
 char* FUNC_7 (int*) ;
 int FUNC_8 (char*,char const*,int) ;
 scalar_t__ FUNC_9 (int) ;
 int FUNC_10 (char*) ;
 int FUNC_11 (long) ;
 int FUNC_12 (char*,int) ;
 int VAR_1 ;
 int FUNC_13 (char*,char*) ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static void
FUNC_14(VirtualTransactionId *VAR_3,
            ProcSignalReason VAR_4)
{
 TimestampTz VAR_5;
 char *VAR_6;


 if (!FUNC_4(*VAR_3))
  return;

 VAR_5 = FUNC_2();
 VAR_6 = ((void*)0);

 while (FUNC_4(*VAR_3))
 {

  VAR_1 = VAR_0;


  while (!FUNC_5(*VAR_3, 0))
  {




   if (VAR_2 && VAR_6 == ((void*)0) &&
    FUNC_3(VAR_5, FUNC_2(),
             500))
   {
    const char *VAR_7;
    int VAR_8;

    VAR_7 = FUNC_7(&VAR_8);
    VAR_6 = (char *) FUNC_9(VAR_8 + 8 + 1);
    FUNC_8(VAR_6, VAR_7, VAR_8);
    FUNC_13(VAR_6 + VAR_8, " waiting");
    FUNC_12(VAR_6, 0);
    VAR_6[VAR_8] = '\0';
   }


   if (FUNC_6())
   {
    pid_t VAR_9;




    FUNC_0(FUNC_4(*VAR_3));
    VAR_9 = FUNC_1(*VAR_3, VAR_4);





    if (VAR_9 != 0)
     FUNC_11(5000L);
   }
  }


  VAR_3++;
 }


 if (VAR_6)
 {
  FUNC_12(VAR_6, 0);
  FUNC_10(VAR_6);
 }
}
