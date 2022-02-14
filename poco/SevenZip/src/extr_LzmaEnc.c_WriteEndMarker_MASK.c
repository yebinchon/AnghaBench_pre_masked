
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t UInt32 ;
struct TYPE_3__ {size_t state; int posAlignEncoder; int rc; int * posSlotEncoder; int ProbPrices; int fastMode; int lenEnc; int * isRep; int ** isMatch; } ;
typedef TYPE_1__ CLzmaEnc ;


 size_t FUNC_0 (size_t) ;
 size_t VAR_0 ;
 int FUNC_1 (int *,int *,size_t,size_t,int,int ) ;
 int FUNC_2 (int *,int *,int) ;
 int FUNC_3 (int *,size_t,int) ;
 int FUNC_4 (int *,int ,int,int) ;
 int FUNC_5 (int *,int ,size_t,int ) ;
 int VAR_1 ;
 size_t* VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static void FUNC_6(CLzmaEnc *VAR_5, UInt32 VAR_6)
{
  UInt32 VAR_7;
  FUNC_2(&VAR_5->rc, &VAR_5->isMatch[VAR_5->state][VAR_6], 1);
  FUNC_2(&VAR_5->rc, &VAR_5->isRep[VAR_5->state], 0);
  VAR_5->state = VAR_2[VAR_5->state];
  VAR_7 = VAR_0;
  FUNC_1(&VAR_5->lenEnc, &VAR_5->rc, VAR_7 - VAR_0, VAR_6, !VAR_5->fastMode, VAR_5->ProbPrices);
  FUNC_4(&VAR_5->rc, VAR_5->posSlotEncoder[FUNC_0(VAR_7)], VAR_4, (1 << VAR_4) - 1);
  FUNC_3(&VAR_5->rc, (((UInt32)1 << 30) - 1) >> VAR_3, 30 - VAR_3);
  FUNC_5(&VAR_5->rc, VAR_5->posAlignEncoder, VAR_3, VAR_1);
}
