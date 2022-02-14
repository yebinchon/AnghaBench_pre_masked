
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {void* MixMatchesFunc; TYPE_1__* MatchFinder; int GetHeadsFunc; } ;
struct TYPE_7__ {void* Skip; void* GetMatches; scalar_t__ GetPointerToCurrentPos; scalar_t__ GetNumAvailableBytes; scalar_t__ GetIndexByte; scalar_t__ Init; } ;
struct TYPE_6__ {int numHashBytes; int bigHash; } ;
typedef void* Mf_Skip_Func ;
typedef void* Mf_Mix_Matches ;
typedef scalar_t__ Mf_Init_Func ;
typedef scalar_t__ Mf_GetPointerToCurrentPos_Func ;
typedef scalar_t__ Mf_GetNumAvailableBytes_Func ;
typedef void* Mf_GetMatches_Func ;
typedef scalar_t__ Mf_GetIndexByte_Func ;
typedef TYPE_2__ IMatchFinder ;
typedef TYPE_3__ CMatchFinderMt ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;

void FUNC_0(CMatchFinderMt *VAR_15, IMatchFinder *VAR_16)
{
  VAR_16->Init = (Mf_Init_Func)VAR_12;
  VAR_16->GetIndexByte = (Mf_GetIndexByte_Func)VAR_8;
  VAR_16->GetNumAvailableBytes = (Mf_GetNumAvailableBytes_Func)VAR_10;
  VAR_16->GetPointerToCurrentPos = (Mf_GetPointerToCurrentPos_Func)VAR_11;
  VAR_16->GetMatches = (Mf_GetMatches_Func)VAR_9;
  switch(VAR_15->MatchFinder->numHashBytes)
  {
    case 2:
      VAR_15->GetHeadsFunc = VAR_0;
      VAR_15->MixMatchesFunc = (Mf_Mix_Matches)0;
      VAR_16->Skip = (Mf_Skip_Func)VAR_4;
      VAR_16->GetMatches = (Mf_GetMatches_Func)VAR_5;
      break;
    case 3:
      VAR_15->GetHeadsFunc = VAR_1;
      VAR_15->MixMatchesFunc = (Mf_Mix_Matches)VAR_13;
      VAR_16->Skip = (Mf_Skip_Func)VAR_6;
      break;
    default:

      VAR_15->GetHeadsFunc = VAR_15->MatchFinder->bigHash ? VAR_3 : VAR_2;

      VAR_15->MixMatchesFunc = (Mf_Mix_Matches)VAR_14;
      VAR_16->Skip = (Mf_Skip_Func)VAR_7;
      break;







  }
}
