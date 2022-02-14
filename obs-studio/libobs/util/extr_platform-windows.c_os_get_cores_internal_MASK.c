
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int ULONG_PTR ;
struct TYPE_5__ {scalar_t__ Relationship; int ProcessorMask; } ;
typedef TYPE_1__* PSYSTEM_LOGICAL_PROCESSOR_INFORMATION ;
typedef int DWORD ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 () ;
 scalar_t__ FUNC_1 (TYPE_1__*,int*) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (TYPE_1__*) ;
 int VAR_3 ;
 TYPE_1__* FUNC_3 (int) ;
 scalar_t__ FUNC_4 (int ) ;
 int VAR_4 ;

__attribute__((used)) static void FUNC_5(void)
{
 PSYSTEM_LOGICAL_PROCESSOR_INFORMATION VAR_5 = ((void*)0), VAR_6 = ((void*)0);
 DWORD VAR_7 = 0;

 if (VAR_2)
  return;

 VAR_2 = 1;

 FUNC_1(VAR_5, &VAR_7);
 if (FUNC_0() != VAR_0)
  return;

 VAR_5 = FUNC_3(VAR_7);

 if (FUNC_1(VAR_5, &VAR_7)) {
  DWORD VAR_8 = VAR_7 / sizeof(*VAR_5);
  VAR_6 = VAR_5;

  for (DWORD VAR_9 = 0; VAR_9 < VAR_8; VAR_9++) {
   if (VAR_6->Relationship == VAR_1) {
    ULONG_PTR VAR_10 = VAR_6->ProcessorMask;

    VAR_4++;
    VAR_3 += FUNC_4(VAR_10);
   }

   VAR_6++;
  }
 }

 FUNC_2(VAR_5);
}
