
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {TYPE_2__* next_para; } ;
struct TYPE_6__ {TYPE_3__ para; } ;
struct TYPE_7__ {TYPE_1__ member; } ;
typedef int PARAFORMAT2 ;
typedef int ME_TextEditor ;
typedef TYPE_2__ ME_DisplayItem ;
typedef int BOOL ;


 int FUNC_0 (int *,TYPE_2__**,TYPE_2__**) ;
 int FUNC_1 (int *,TYPE_3__*,int const*) ;
 int VAR_0 ;

BOOL FUNC_2(ME_TextEditor *VAR_1, const PARAFORMAT2 *VAR_2)
{
  ME_DisplayItem *VAR_3, *VAR_4;

  FUNC_0(VAR_1, &VAR_3, &VAR_4);

  do {
    FUNC_1(VAR_1, &VAR_3->member.para, VAR_2);
    if (VAR_3 == VAR_4)
      break;
    VAR_3 = VAR_3->member.para.next_para;
  } while(1);

  return VAR_0;
}
