
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_12__ {int * SER_Handler; } ;
struct TYPE_9__ {TYPE_4__ SUF_Registration; TYPE_2__ volatile* SUF_TargetTryLevel; TYPE_3__* SUF_Frame; } ;
typedef TYPE_1__ _SEH2UnwindFrame_t ;
struct TYPE_10__ {struct TYPE_10__* ST_Next; } ;
typedef TYPE_2__ _SEH2TryLevel_t ;
struct TYPE_11__ {TYPE_2__* SF_TopTryLevel; } ;
typedef TYPE_3__ _SEH2Frame_t ;


 int FUNC_0 (TYPE_3__*,TYPE_2__ volatile*) ;
 int FUNC_1 (TYPE_4__*) ;
 int FUNC_2 () ;
 int VAR_0 ;

__attribute__((used)) static
void FUNC_3(_SEH2Frame_t * VAR_1, volatile _SEH2TryLevel_t * VAR_2)
{
 volatile _SEH2TryLevel_t * VAR_3;
 _SEH2UnwindFrame_t VAR_4;

 VAR_4.SUF_Frame = VAR_1;
 VAR_4.SUF_TargetTryLevel = VAR_2;

 VAR_4.SUF_Registration.SER_Handler = &VAR_0;
 FUNC_1(&VAR_4.SUF_Registration);

 for(VAR_3 = VAR_1->SF_TopTryLevel; VAR_3 && VAR_3 != VAR_2; VAR_3 = VAR_3->ST_Next)
 {
  VAR_1->SF_TopTryLevel = VAR_3->ST_Next;
  FUNC_0(VAR_1, VAR_3);
 }

 FUNC_2();
}
