
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct RTFTable {int gapH; scalar_t__ leftEdge; scalar_t__ numCellsDefined; int border; int cells; } ;
struct TYPE_3__ {int bEmulateVersion10; } ;
typedef TYPE_1__ ME_TextEditor ;


 int FUNC_0 (int ,int) ;

void FUNC_1(ME_TextEditor *VAR_0, struct RTFTable *VAR_1)
{
  FUNC_0(VAR_1->cells, sizeof(VAR_1->cells));
  FUNC_0(VAR_1->border, sizeof(VAR_1->border));
  VAR_1->numCellsDefined = 0;
  VAR_1->leftEdge = 0;
  if (!VAR_0->bEmulateVersion10)
    VAR_1->gapH = 10;
  else
    VAR_1->gapH = 0;
}
