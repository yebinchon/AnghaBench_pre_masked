
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_13__ {unsigned int Repeats; } ;
struct TYPE_12__ {unsigned int (* Init ) (void**,TYPE_2__*,unsigned int) ;int Label; int (* Cleanup ) (void*,TYPE_2__*) ;int (* PassCleanup ) (void*,TYPE_2__*) ;int (* Proc ) (void*,TYPE_2__*,unsigned int) ;} ;
typedef TYPE_1__* PTEST ;
typedef TYPE_2__* PPERF_INFO ;
typedef scalar_t__ DWORD ;


 unsigned int FUNC_0 (TYPE_1__*,TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int ,char*,int ,unsigned int) ;
 int VAR_0 ;
 scalar_t__ FUNC_3 () ;
 int VAR_1 ;
 int FUNC_4 () ;
 int FUNC_5 (scalar_t__,unsigned int,int ,int ) ;
 int VAR_2 ;
 unsigned int FUNC_6 (void**,TYPE_2__*,unsigned int) ;
 int FUNC_7 (void*,TYPE_2__*,unsigned int) ;
 int FUNC_8 (void*,TYPE_2__*) ;
 int FUNC_9 (void*,TYPE_2__*) ;

__attribute__((used)) static void
FUNC_10(PTEST VAR_3, PPERF_INFO VAR_4)
{
  unsigned VAR_5;
  unsigned VAR_6;
  void *VAR_7;
  DWORD VAR_8;
  DWORD VAR_9, VAR_10;

  FUNC_2(VAR_1, L"Calibrating", VAR_3->Label, 0);
  VAR_5 = FUNC_0(VAR_3, VAR_4);
  if (0 == VAR_5)
    {
      return;
    }

  VAR_5 = VAR_3->Init(&VAR_7, VAR_4, VAR_5);
  if (0 == VAR_5)
    {
      return;
    }
  VAR_10 = 0;
  for (VAR_6 = 0; VAR_6 < VAR_4->Repeats; VAR_6++)
    {
      FUNC_2(VAR_1, L"Testing", VAR_3->Label, VAR_6 + 1);
      FUNC_1(VAR_4);
      VAR_8 = FUNC_3();
      (*VAR_3->Proc)(VAR_7, VAR_4, VAR_5);
      VAR_9 = FUNC_3() - VAR_8;
      FUNC_4();
      VAR_10 += VAR_9;
      FUNC_5(VAR_9, VAR_5, VAR_3->Label, VAR_0);
      (*VAR_3->PassCleanup)(VAR_7, VAR_4);
      FUNC_4();
    }
  (*VAR_3->Cleanup)(VAR_7, VAR_4);
  FUNC_5(VAR_10, VAR_6 * VAR_5, VAR_3->Label, VAR_2);
  FUNC_4();
}
