
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_11__ {scalar_t__ nCharOfs; } ;
struct TYPE_8__ {scalar_t__ nCharOfs; TYPE_3__* next_para; } ;
struct TYPE_9__ {TYPE_1__ para; TYPE_4__ run; } ;
struct TYPE_10__ {scalar_t__ type; TYPE_2__ member; } ;
typedef TYPE_3__ ME_DisplayItem ;


 TYPE_3__* FUNC_0 (TYPE_3__*,int ) ;
 int FUNC_1 (char*,int ,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (TYPE_4__*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;

void FUNC_4(ME_DisplayItem *VAR_4, int VAR_5)
{




  if (VAR_4->type == VAR_1)
  {
    FUNC_1("PropagateCharOffset(%s, %d)\n", FUNC_3( &VAR_4->member.run ), VAR_5);
    do {
      VAR_4->member.run.nCharOfs += VAR_5;
      FUNC_2(VAR_4->member.run.nCharOfs >= 0);
      VAR_4 = FUNC_0(VAR_4, VAR_2);
    } while(VAR_4->type == VAR_1);
  }




  if (VAR_4->type == VAR_0)
  {
    do {
      VAR_4->member.para.nCharOfs += VAR_5;
      FUNC_2(VAR_4->member.para.nCharOfs >= 0);
      VAR_4 = VAR_4->member.para.next_para;
    } while(VAR_4->type == VAR_0);
  }



  if (VAR_4->type == VAR_3)
  {
    VAR_4->member.para.nCharOfs += VAR_5;
    FUNC_2(VAR_4->member.para.nCharOfs >= 0);
  }
}
