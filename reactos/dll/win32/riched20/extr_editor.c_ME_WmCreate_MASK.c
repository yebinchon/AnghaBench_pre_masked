
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_13__ {scalar_t__ lpszName; } ;
struct TYPE_12__ {scalar_t__ lpszName; } ;
struct TYPE_11__ {int styleFlags; int * pCursors; int texthost; } ;
typedef TYPE_1__ ME_TextEditor ;
typedef int LRESULT ;
typedef scalar_t__ LPARAM ;
typedef int INT ;
typedef TYPE_2__ CREATESTRUCTW ;
typedef TYPE_3__ CREATESTRUCTA ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ,int ,int ,int,int ) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*,int *) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*,void*,int ) ;
 int FUNC_8 (TYPE_1__*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static LRESULT FUNC_9(ME_TextEditor *VAR_7, LPARAM VAR_8, BOOL VAR_9)
{
  CREATESTRUCTW *VAR_10 = (CREATESTRUCTW*)VAR_8;
  CREATESTRUCTA *VAR_11 = (CREATESTRUCTA*)VAR_8;
  void *VAR_12 = ((void*)0);
  INT VAR_13;

  if (VAR_8)
    VAR_12 = VAR_9 ? (void*)VAR_10->lpszName : (void*)VAR_11->lpszName;

  FUNC_6(VAR_7);

  VAR_13 = (VAR_7->styleFlags & VAR_1) ? 1 : 0;
  if (~VAR_7->styleFlags & VAR_1 || VAR_7->styleFlags & VAR_6)
    FUNC_1(VAR_7->texthost, VAR_3, 0, VAR_13, VAR_4);

  if (~VAR_7->styleFlags & VAR_1 || VAR_7->styleFlags & VAR_5)
    FUNC_1(VAR_7->texthost, VAR_2, 0, VAR_13, VAR_4);

  if (VAR_7->styleFlags & VAR_1)
  {
    if (VAR_7->styleFlags & VAR_6)
    {
      FUNC_0(VAR_7->texthost, VAR_3, VAR_0);
      FUNC_2(VAR_7->texthost, VAR_3, VAR_4);
    }
    if (VAR_7->styleFlags & VAR_5)
    {
      FUNC_0(VAR_7->texthost, VAR_2, VAR_0);
      FUNC_2(VAR_7->texthost, VAR_2, VAR_4);
    }
  }

  if (VAR_12)
  {
    FUNC_7(VAR_7, VAR_12, VAR_9);
    FUNC_5(VAR_7, &VAR_7->pCursors[0]);
    FUNC_5(VAR_7, &VAR_7->pCursors[1]);
  }

  FUNC_3(VAR_7);
  FUNC_8(VAR_7);
  FUNC_4(VAR_7);
  return 0;
}
