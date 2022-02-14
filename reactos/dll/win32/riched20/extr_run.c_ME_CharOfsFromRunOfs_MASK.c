
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int nCharOfs; } ;
struct TYPE_7__ {int nCharOfs; } ;
struct TYPE_9__ {TYPE_2__ run; TYPE_1__ para; } ;
struct TYPE_10__ {scalar_t__ type; TYPE_3__ member; } ;
typedef int ME_TextEditor ;
typedef TYPE_4__ ME_DisplayItem ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

int FUNC_1(ME_TextEditor *VAR_2, const ME_DisplayItem *VAR_3,
                         const ME_DisplayItem *VAR_4, int VAR_5)
{
  FUNC_0(VAR_4 && VAR_4->type == VAR_1);
  FUNC_0(VAR_3 && VAR_3->type == VAR_0);
  return VAR_3->member.para.nCharOfs + VAR_4->member.run.nCharOfs + VAR_5;
}
