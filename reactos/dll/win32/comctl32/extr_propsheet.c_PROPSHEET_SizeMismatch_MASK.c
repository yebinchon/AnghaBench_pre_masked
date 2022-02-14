
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int height; int width; } ;
struct TYPE_8__ {scalar_t__ right; scalar_t__ left; scalar_t__ bottom; scalar_t__ top; } ;
typedef TYPE_1__ RECT ;
typedef TYPE_2__ PropSheetInfo ;
typedef int HWND ;
typedef int BOOL ;


 int VAR_0 ;
 int FUNC_0 (int ,TYPE_1__*) ;
 int FUNC_1 (int ,int ) ;
 int VAR_1 ;
 int FUNC_2 (int ,TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,int ,int ,int ,int ) ;
 int FUNC_4 (char*,int ) ;
 int VAR_2 ;
 int FUNC_5 (TYPE_1__*) ;

__attribute__((used)) static BOOL FUNC_6(HWND VAR_3, const PropSheetInfo* VAR_4)
{
  HWND VAR_5 = FUNC_1(VAR_3, VAR_1);
  RECT VAR_6, VAR_7;




  FUNC_0(VAR_5, &VAR_6);
  FUNC_4("orig tab %s\n", FUNC_5(&VAR_6));




  FUNC_3(&VAR_7, 0, 0, VAR_4->width, VAR_4->height);
  FUNC_2(VAR_3, &VAR_7);
  FUNC_4("biggest page %s\n", FUNC_5(&VAR_7));

  if ( (VAR_7.right - VAR_7.left) != (VAR_6.right - VAR_6.left) )
    return VAR_2;
  if ( (VAR_7.bottom - VAR_7.top) != (VAR_6.bottom - VAR_6.top) )
    return VAR_2;

  return VAR_0;
}
