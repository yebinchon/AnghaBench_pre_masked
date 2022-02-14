
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__* LPSTR ;
typedef int LPCTSTR ;
typedef int HWND ;
typedef scalar_t__ HANDLE ;
typedef int DWORD ;
typedef int BOOL ;


 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (int ,int ,int ,int *,int ,int ,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (scalar_t__,int *) ;
 scalar_t__* FUNC_3 (int ,int) ;
 int FUNC_4 (scalar_t__*) ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_5 (scalar_t__,scalar_t__*,int,int*,int *) ;
 scalar_t__ FUNC_6 (int ,scalar_t__*) ;
 int VAR_6 ;

BOOL FUNC_7(HWND VAR_7, LPCTSTR VAR_8)
{
 HANDLE VAR_9;
 BOOL VAR_10 = VAR_0;

 VAR_9 = FUNC_1(VAR_8, VAR_2, VAR_1, ((void*)0),
  VAR_5, 0, ((void*)0));
 if(VAR_9 != VAR_4)
 {
  DWORD VAR_11;

  VAR_11 = FUNC_2(VAR_9, ((void*)0));
  if(VAR_11 != 0xFFFFFFFF)
  {
   LPSTR VAR_12;

   VAR_12 = FUNC_3(VAR_3, VAR_11 + 1);
   if(VAR_12 != ((void*)0))
   {
    DWORD VAR_13;

    if(FUNC_5(VAR_9, VAR_12, VAR_11, &VAR_13, ((void*)0)))
    {
     VAR_12[VAR_11] = 0;
     if(FUNC_6(VAR_7, VAR_12))
      VAR_10 = VAR_6;
    }
    FUNC_4(VAR_12);
   }
  }
  FUNC_0(VAR_9);
 }
 return VAR_10;
}
