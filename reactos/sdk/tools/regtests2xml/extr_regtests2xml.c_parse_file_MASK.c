
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int succeeded; struct TYPE_4__* next; int result; int testname; } ;
typedef int TEST_RESULT_INFO ;
typedef TYPE_1__* PTEST_RESULT_INFO ;


 int FUNC_0 () ;
 int FUNC_1 (int) ;
 scalar_t__ VAR_0 ;
 TYPE_1__* FUNC_2 (int) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 scalar_t__ FUNC_9 (int ,char*,int) ;
 TYPE_1__* VAR_1 ;

__attribute__((used)) static void
FUNC_10(char *VAR_2)
{
  PTEST_RESULT_INFO VAR_3;

  FUNC_4(VAR_2);

  do
    {
      if (!FUNC_7())
        {
          break;
        }






      VAR_3 = FUNC_2(sizeof(TEST_RESULT_INFO));
      if (VAR_3 == ((void*)0))
        {
       FUNC_3("Out of memory\n");
       FUNC_1(1);
        }


      FUNC_8();


      VAR_0++;


   FUNC_5(')', VAR_3->testname);


      VAR_0++;


      VAR_0++;


      VAR_0 += 7;


      VAR_0++;


   FUNC_6(VAR_3->result);

   if (FUNC_9(VAR_3->result, "Success", 7) == 0)
        {
       VAR_3->succeeded = 1;
        }
      else
        {
          VAR_3->succeeded = 0;
        }

      VAR_3->next = VAR_1;
      VAR_1 = VAR_3;
    } while (1);

  FUNC_0();
}
