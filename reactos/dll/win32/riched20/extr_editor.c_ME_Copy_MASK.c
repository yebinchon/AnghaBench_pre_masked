
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ cpMin; scalar_t__ cpMax; } ;
struct TYPE_6__ {scalar_t__ lpOleCallback; scalar_t__ cPasswordMask; } ;
typedef TYPE_1__ ME_TextEditor ;
typedef int ME_Cursor ;
typedef int * LPDATAOBJECT ;
typedef int HRESULT ;
typedef TYPE_2__ CHARRANGE ;
typedef scalar_t__ BOOL ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (scalar_t__,TYPE_2__*,int ,int **) ;
 scalar_t__ FUNC_3 (int const*) ;
 int FUNC_4 (TYPE_1__*,int const*,int,int **) ;
 int FUNC_5 (int *) ;
 int VAR_1 ;
 scalar_t__ FUNC_6 (int ) ;
 int VAR_2 ;

__attribute__((used)) static BOOL FUNC_7(ME_TextEditor *VAR_3, const ME_Cursor *VAR_4, int VAR_5)
{
  LPDATAOBJECT VAR_6 = ((void*)0);
  HRESULT VAR_7 = VAR_2;

  if (VAR_3->cPasswordMask)
    return VAR_0;

  if(VAR_3->lpOleCallback)
  {
    CHARRANGE VAR_8;
    VAR_8.cpMin = FUNC_3(VAR_4);
    VAR_8.cpMax = VAR_8.cpMin + VAR_5;
    VAR_7 = FUNC_2(VAR_3->lpOleCallback, &VAR_8, VAR_1, &VAR_6);
  }
  if(FUNC_0(VAR_7) || !VAR_6)
    VAR_7 = FUNC_4(VAR_3, VAR_4, VAR_5, &VAR_6);
  if(FUNC_6(VAR_7)) {
    VAR_7 = FUNC_5(VAR_6);
    FUNC_1(VAR_6);
  }
  return FUNC_6(VAR_7);
}
