
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WCHAR ;
typedef int LPVOID ;
typedef int LPCITEMIDLIST ;
typedef int IShellFolder ;
typedef int IExtractIconW ;
typedef int HRESULT ;
typedef int HICON ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int *,int,int ,int *,int) ;
 unsigned int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,int *,int,int *,int *,int ) ;
 int FUNC_4 (int *,int ,int *,int,int*,unsigned int*) ;
 int VAR_3 ;
 int FUNC_5 (int *,int ,int,int *,int *,int ,int *) ;
 int FUNC_6 (int ,int ) ;
 int VAR_4 ;
 scalar_t__ FUNC_7 (int ) ;
 int VAR_5 ;

__attribute__((used)) static HICON FUNC_8(IShellFolder* VAR_6, LPCITEMIDLIST VAR_7)
{
 IExtractIconW* VAR_8;

 if (FUNC_7(FUNC_5(VAR_6, 0, 1, (LPCITEMIDLIST*)&VAR_7, &VAR_3, 0, (LPVOID*)&VAR_8))) {
  WCHAR VAR_9[VAR_5];
  unsigned VAR_10;
  HICON VAR_11;
  int VAR_12;

  if (FUNC_7(FUNC_4(VAR_8, VAR_1, VAR_9, VAR_5, &VAR_12, &VAR_10))) {
   if (!(VAR_10 & VAR_2)) {
    if (VAR_12 == -1)
     VAR_12 = 0;

    if ((int)FUNC_1(VAR_9, VAR_12, 0, &VAR_11, 1) > 0)
     VAR_10 &= ~VAR_0;
   } else {
    HICON VAR_13 = 0;

    HRESULT VAR_14 = FUNC_3(VAR_8, VAR_9, VAR_12, &VAR_13, &VAR_11, FUNC_6(0 ,FUNC_2(VAR_4)));

    if (FUNC_7(VAR_14))
     FUNC_0(VAR_13);
   }

   return VAR_11;
  }
 }

 return 0;
}
