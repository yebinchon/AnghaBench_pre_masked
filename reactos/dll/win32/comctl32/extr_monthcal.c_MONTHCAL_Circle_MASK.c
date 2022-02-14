
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int * pens; } ;
struct TYPE_5__ {int bottom; int right; int top; int left; } ;
typedef TYPE_1__ RECT ;
typedef TYPE_2__ MONTHCAL_INFO ;
typedef int HPEN ;
typedef int HDC ;
typedef int HBRUSH ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_1 (int ,int ,int ,int ,int ) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static void FUNC_3(const MONTHCAL_INFO *VAR_2, HDC VAR_3, const RECT *VAR_4)
{
  HPEN VAR_5 = FUNC_2(VAR_3, VAR_2->pens[VAR_1]);
  HBRUSH VAR_6;

  VAR_6 = FUNC_2(VAR_3, FUNC_0(VAR_0));
  FUNC_1(VAR_3, VAR_4->left, VAR_4->top, VAR_4->right, VAR_4->bottom);

  FUNC_2(VAR_3, VAR_6);
  FUNC_2(VAR_3, VAR_5);
}
