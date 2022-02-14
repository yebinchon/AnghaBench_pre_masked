
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int cbSize; int dwMask; int wNumbering; int wNumberingStart; int wNumberingStyle; int wNumberingTab; int wAlignment; } ;
typedef TYPE_1__ PARAFORMAT2 ;
typedef int LPARAM ;
typedef int LONG ;
typedef int HWND ;
typedef int HRESULT ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ,int ,int ,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int,char*,int,...) ;

__attribute__((used)) static void FUNC_4(void)
{
  HWND VAR_6 = FUNC_2(((void*)0));
  PARAFORMAT2 VAR_7;
  HRESULT VAR_8;
  LONG VAR_9 = VAR_4 & ~VAR_5;
  VAR_7.cbSize = sizeof(PARAFORMAT2);
  VAR_7.dwMask = VAR_3;
  VAR_7.wAlignment = VAR_2;

  VAR_8 = FUNC_1(VAR_6, VAR_1, 0, (LPARAM)&VAR_7);
  FUNC_3(VAR_8 != 0, "expected non-zero got %d\n", VAR_8);

  VAR_7.cbSize = sizeof(PARAFORMAT2);
  VAR_7.dwMask = -1;
  VAR_8 = FUNC_1(VAR_6, VAR_0, 0, (LPARAM)&VAR_7);



  VAR_8 &= ~VAR_5;
  VAR_7.dwMask &= ~VAR_5;

  FUNC_3(VAR_8 == VAR_9, "expected %x got %x\n", VAR_9, VAR_8);
  FUNC_3(VAR_7.dwMask == VAR_9, "expected %x got %x\n", VAR_9, VAR_7.dwMask);


  FUNC_3( VAR_7.wNumbering == 0, "got %d\n", VAR_7.wNumbering );
  FUNC_3( VAR_7.wNumberingStart == 0, "got %d\n", VAR_7.wNumberingStart );
  FUNC_3( VAR_7.wNumberingStyle == 0, "got %04x\n", VAR_7.wNumberingStyle );
  FUNC_3( VAR_7.wNumberingTab == 0, "got %d\n", VAR_7.wNumberingTab );

  FUNC_0(VAR_6);
}
