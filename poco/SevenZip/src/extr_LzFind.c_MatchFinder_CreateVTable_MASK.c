
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int numHashBytes; int btMode; } ;
struct TYPE_5__ {void* Skip; void* GetMatches; scalar_t__ GetPointerToCurrentPos; scalar_t__ GetNumAvailableBytes; scalar_t__ GetIndexByte; scalar_t__ Init; } ;
typedef void* Mf_Skip_Func ;
typedef scalar_t__ Mf_Init_Func ;
typedef scalar_t__ Mf_GetPointerToCurrentPos_Func ;
typedef scalar_t__ Mf_GetNumAvailableBytes_Func ;
typedef void* Mf_GetMatches_Func ;
typedef scalar_t__ Mf_GetIndexByte_Func ;
typedef TYPE_1__ IMatchFinder ;
typedef TYPE_2__ CMatchFinder ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;

void FUNC_0(CMatchFinder *VAR_12, IMatchFinder *VAR_13)
{
  VAR_13->Init = (Mf_Init_Func)VAR_11;
  VAR_13->GetIndexByte = (Mf_GetIndexByte_Func)VAR_8;
  VAR_13->GetNumAvailableBytes = (Mf_GetNumAvailableBytes_Func)VAR_9;
  VAR_13->GetPointerToCurrentPos = (Mf_GetPointerToCurrentPos_Func)VAR_10;
  if (!VAR_12->btMode)
  {
    VAR_13->GetMatches = (Mf_GetMatches_Func)VAR_6;
    VAR_13->Skip = (Mf_Skip_Func)VAR_7;
  }
  else if (VAR_12->numHashBytes == 2)
  {
    VAR_13->GetMatches = (Mf_GetMatches_Func)VAR_0;
    VAR_13->Skip = (Mf_Skip_Func)VAR_1;
  }
  else if (VAR_12->numHashBytes == 3)
  {
    VAR_13->GetMatches = (Mf_GetMatches_Func)VAR_2;
    VAR_13->Skip = (Mf_Skip_Func)VAR_3;
  }
  else
  {
    VAR_13->GetMatches = (Mf_GetMatches_Func)VAR_4;
    VAR_13->Skip = (Mf_Skip_Func)VAR_5;
  }
}
