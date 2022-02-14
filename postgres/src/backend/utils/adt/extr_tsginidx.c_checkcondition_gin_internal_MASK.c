
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int* need_recheck; int* map_item_operand; int * check; int * first_item; } ;
struct TYPE_5__ {scalar_t__ weight; } ;
typedef TYPE_1__ QueryOperand ;
typedef int QueryItem ;
typedef int GinTernaryValue ;
typedef TYPE_2__ GinChkVal ;
typedef int ExecPhraseData ;



__attribute__((used)) static GinTernaryValue
FUNC_0(GinChkVal *VAR_0, QueryOperand *VAR_1, ExecPhraseData *VAR_2)
{
 int VAR_3;





 if (VAR_1->weight != 0 || VAR_2 != ((void*)0))
  *(VAR_0->need_recheck) = 1;


 VAR_3 = VAR_0->map_item_operand[((QueryItem *) VAR_1) - VAR_0->first_item];


 return VAR_0->check[VAR_3];
}
