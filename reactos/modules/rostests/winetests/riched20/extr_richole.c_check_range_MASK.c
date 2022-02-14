
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int cbSize; int fMask; int nMax; int nMin; int nPos; } ;
typedef TYPE_1__ SCROLLINFO ;
typedef int LONG ;
typedef int ITextRange ;
typedef int ITextDocument ;
typedef int HWND ;
typedef scalar_t__ HRESULT ;


 int FUNC_0 (int ,int ,TYPE_1__*) ;
 scalar_t__ FUNC_1 (int *,int,int,int **) ;
 scalar_t__ FUNC_2 (int *,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_3 (int,char*,scalar_t__,...) ;

__attribute__((used)) static void FUNC_4(HWND VAR_4, ITextDocument* VAR_5, int VAR_6, int VAR_7,
                        LONG VAR_8, int VAR_9)
{
  SCROLLINFO VAR_10;
  ITextRange *VAR_11 = ((void*)0);
  HRESULT VAR_12;

  VAR_10.cbSize = sizeof(SCROLLINFO);
  VAR_10.fMask = VAR_1 | VAR_2;

  VAR_12 = FUNC_1(VAR_5, VAR_6, VAR_7, &VAR_11);
  FUNC_3(VAR_12 == VAR_3, "got 0x%08x\n", VAR_12);
  VAR_12 = FUNC_2(VAR_11, VAR_8);
  FUNC_3(VAR_12 == VAR_3, "got 0x%08x\n", VAR_12);
  FUNC_0(VAR_4, VAR_0, &VAR_10);
  if (VAR_9) {
    FUNC_3(VAR_10.nPos != 0,
       "Scrollbar at 0, should be >0. (TextRange %d-%d, scroll range %d-%d.)\n",
       VAR_6, VAR_7, VAR_10.nMin, VAR_10.nMax);
  } else {
    FUNC_3(VAR_10.nPos == 0,
       "Scrollbar at %d, should be 0. (TextRange %d-%d, scroll range %d-%d.)\n",
       VAR_10.nPos, VAR_6, VAR_7, VAR_10.nMin, VAR_10.nMax);
  }
}
