
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {TYPE_3__* prev_para; } ;
struct TYPE_7__ {TYPE_1__ para; } ;
struct TYPE_8__ {TYPE_2__ member; } ;
typedef int ME_TextEditor ;
typedef TYPE_3__ ME_DisplayItem ;


 int VAR_0 ;
 TYPE_3__* FUNC_0 (int *,int ,int ,int,int ) ;
 int VAR_1 ;

ME_DisplayItem* FUNC_1(ME_TextEditor *VAR_2)
{
  ME_DisplayItem *VAR_3;
  VAR_3 = FUNC_0(VAR_2, 0, VAR_1, 2, VAR_0);
  return VAR_3->member.para.prev_para;
}
