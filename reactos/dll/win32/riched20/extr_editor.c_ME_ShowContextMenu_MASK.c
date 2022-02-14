
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int cpMax; int cpMin; } ;
struct TYPE_7__ {int hwndParent; int lpOleCallback; int hWnd; } ;
typedef TYPE_1__ ME_TextEditor ;
typedef int HMENU ;
typedef TYPE_2__ CHARRANGE ;
typedef int BOOL ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,int,int *,TYPE_2__*,int *) ;
 int FUNC_2 (TYPE_1__*,int *,int *) ;
 int FUNC_3 (TYPE_1__*) ;
 scalar_t__ FUNC_4 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_5 (int ,int,int,int,int ,int ,int *) ;

__attribute__((used)) static BOOL FUNC_6(ME_TextEditor *VAR_4, int VAR_5, int VAR_6)
{
  CHARRANGE VAR_7;
  HMENU VAR_8;
  int VAR_9;

  if(!VAR_4->lpOleCallback || !VAR_4->hWnd)
    return VAR_0;
  FUNC_2(VAR_4, &VAR_7.cpMin, &VAR_7.cpMax);
  VAR_9 = FUNC_3(VAR_4);
  if(FUNC_4(FUNC_1(VAR_4->lpOleCallback, VAR_9, ((void*)0), &VAR_7, &VAR_8)))
  {
    FUNC_5(VAR_8, VAR_1 | VAR_2, VAR_5, VAR_6, 0, VAR_4->hwndParent, ((void*)0));
    FUNC_0(VAR_8);
  }
  return VAR_3;
}
