
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ int32 ;
struct TYPE_5__ {scalar_t__* arre; scalar_t__* arrb; } ;
struct TYPE_4__ {scalar_t__ valcrc; scalar_t__ prefix; } ;
typedef TYPE_1__ QueryOperand ;
typedef int ExecPhraseData ;
typedef TYPE_2__ CHKVAL ;



__attribute__((used)) static bool
FUNC_0(void *VAR_0, QueryOperand *VAR_1, ExecPhraseData *VAR_2)
{
 int32 *VAR_3 = ((CHKVAL *) VAR_0)->arrb;
 int32 *VAR_4 = ((CHKVAL *) VAR_0)->arre;
 int32 *VAR_5;






 if (VAR_1->prefix)
  return 1;

 while (VAR_3 < VAR_4)
 {
  VAR_5 = VAR_3 + (VAR_4 - VAR_3) / 2;
  if (*VAR_5 == VAR_1->valcrc)
   return 1;
  else if (*VAR_5 < VAR_1->valcrc)
   VAR_3 = VAR_5 + 1;
  else
   VAR_4 = VAR_5;
 }

 return 0;
}
