
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int valcrc; scalar_t__ prefix; } ;
typedef TYPE_1__ QueryOperand ;
typedef int ExecPhraseData ;


 int FUNC_0 (void*,int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static bool
FUNC_2(void *VAR_0, QueryOperand *VAR_1, ExecPhraseData *VAR_2)
{



 if (VAR_1->prefix)
  return 1;
 return FUNC_0(VAR_0, FUNC_1(VAR_1->valcrc));
}
