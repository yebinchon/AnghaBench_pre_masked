
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ UInt32 ;
struct TYPE_3__ {scalar_t__ high; int choice2; scalar_t__ mid; int choice; scalar_t__ low; } ;
typedef int CRangeEnc ;
typedef TYPE_1__ CLenEnc ;


 int FUNC_0 (int *,int *,int) ;
 int FUNC_1 (int *,scalar_t__,scalar_t__,scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;

__attribute__((used)) static void FUNC_2(CLenEnc *VAR_5, CRangeEnc *VAR_6, UInt32 VAR_7, UInt32 VAR_8)
{
  if (VAR_7 < VAR_2)
  {
    FUNC_0(VAR_6, &VAR_5->choice, 0);
    FUNC_1(VAR_6, VAR_5->low + (VAR_8 << VAR_1), VAR_1, VAR_7);
  }
  else
  {
    FUNC_0(VAR_6, &VAR_5->choice, 1);
    if (VAR_7 < VAR_2 + VAR_4)
    {
      FUNC_0(VAR_6, &VAR_5->choice2, 0);
      FUNC_1(VAR_6, VAR_5->mid + (VAR_8 << VAR_3), VAR_3, VAR_7 - VAR_2);
    }
    else
    {
      FUNC_0(VAR_6, &VAR_5->choice2, 1);
      FUNC_1(VAR_6, VAR_5->high, VAR_0, VAR_7 - VAR_2 - VAR_4);
    }
  }
}
