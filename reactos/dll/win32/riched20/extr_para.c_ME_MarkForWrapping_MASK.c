
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {TYPE_3__ const* next_para; } ;
struct TYPE_8__ {TYPE_1__ para; } ;
struct TYPE_9__ {TYPE_2__ member; } ;
typedef int ME_TextEditor ;
typedef TYPE_3__ const ME_DisplayItem ;


 int FUNC_0 (int *,TYPE_3__ const*) ;

__attribute__((used)) static void FUNC_1(ME_TextEditor *VAR_0, ME_DisplayItem *VAR_1, const ME_DisplayItem *VAR_2)
{
  while(VAR_1 != VAR_2)
  {
    FUNC_0(VAR_0, VAR_1);
    VAR_1 = VAR_1->member.para.next_para;
  }
}
