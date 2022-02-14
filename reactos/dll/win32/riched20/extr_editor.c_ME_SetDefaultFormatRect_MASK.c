
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int top; int right; int left; } ;
struct TYPE_4__ {int exStyleFlags; TYPE_3__ rcFormat; scalar_t__ selofs; int texthost; } ;
typedef TYPE_1__ ME_TextEditor ;


 int FUNC_0 (int ,TYPE_3__*) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_1(ME_TextEditor *VAR_1)
{
  FUNC_0(VAR_1->texthost, &VAR_1->rcFormat);
  VAR_1->rcFormat.top += VAR_1->exStyleFlags & VAR_0 ? 1 : 0;
  VAR_1->rcFormat.left += 1 + VAR_1->selofs;
  VAR_1->rcFormat.right -= 1;
}
