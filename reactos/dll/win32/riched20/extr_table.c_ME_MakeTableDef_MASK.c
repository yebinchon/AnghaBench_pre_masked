
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct RTFTable {int gapH; } ;
struct TYPE_3__ {int bEmulateVersion10; } ;
typedef struct RTFTable RTFTable ;
typedef TYPE_1__ ME_TextEditor ;


 struct RTFTable* FUNC_0 (int) ;

struct RTFTable *FUNC_1(ME_TextEditor *VAR_0)
{
  RTFTable *VAR_1 = FUNC_0(sizeof(*VAR_1));

  if (!VAR_0->bEmulateVersion10)
    VAR_1->gapH = 10;
  return VAR_1;
}
