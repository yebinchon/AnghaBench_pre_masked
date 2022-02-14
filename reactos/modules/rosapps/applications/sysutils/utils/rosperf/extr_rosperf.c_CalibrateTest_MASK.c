
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_11__ {scalar_t__ Seconds; } ;
struct TYPE_10__ {unsigned int (* Init ) (void**,TYPE_2__*,unsigned int) ;int (* Cleanup ) (void*,TYPE_2__*) ;int (* PassCleanup ) (void*,TYPE_2__*) ;int (* Proc ) (void*,TYPE_2__*,unsigned int) ;} ;
typedef TYPE_1__* PTEST ;
typedef TYPE_2__* PPERF_INFO ;
typedef scalar_t__ DWORD ;


 int FUNC_0 (TYPE_2__*) ;
 scalar_t__ VAR_0 ;
 double VAR_1 ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 () ;
 scalar_t__ VAR_2 ;
 unsigned int FUNC_3 (void**,TYPE_2__*,unsigned int) ;
 int FUNC_4 (void*,TYPE_2__*,unsigned int) ;
 int FUNC_5 (void*,TYPE_2__*) ;
 int FUNC_6 (void*,TYPE_2__*) ;

__attribute__((used)) static unsigned
FUNC_7(PTEST VAR_3, PPERF_INFO VAR_4)
{




  unsigned VAR_5, VAR_6;
  unsigned VAR_7;
  void *VAR_8;
  DWORD VAR_9;
  DWORD VAR_10;
  VAR_5 = 1;
  for (;;)
    {
      FUNC_0(VAR_4);
      VAR_6 = (*VAR_3->Init)(&VAR_8, VAR_4, VAR_5);
      FUNC_2();
      if (0 == VAR_6)
        {
          return 0;
        }
      VAR_9 = FUNC_1();
      (*VAR_3->Proc)(VAR_8, VAR_4, VAR_5);
      VAR_10 = FUNC_1() - VAR_9;
      (*VAR_3->PassCleanup) (VAR_8, VAR_4);
      (*VAR_3->Cleanup)(VAR_8, VAR_4);
      FUNC_2();

      if (VAR_6 != VAR_5)
        {


          return VAR_6;
        }

      if (2000 <= VAR_10)
        {
          break;
        }


      if (VAR_10 <= 10)
        {
          VAR_5 *= 10;
        }
      else
        {

          VAR_5 = (int)(2500 * (double) VAR_5 / (double) VAR_10) + 1;
        }
    }

  VAR_5 = (int) ((double) VAR_4->Seconds * 1000.0 * (double) VAR_5 / (double) VAR_10) + 1;



  VAR_5--;
  VAR_7 = 1;
  while (9 < VAR_5)
    {
      VAR_5 /= 10;
      VAR_7 *= 10;
    }
  VAR_5 = (VAR_5 + 1) * VAR_7;

  return VAR_5;
}
