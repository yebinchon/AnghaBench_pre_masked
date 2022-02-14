
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * LPSTR ;
typedef int LPCTSTR ;
typedef int HWND ;
typedef scalar_t__ HANDLE ;
typedef scalar_t__ DWORD ;
typedef int BOOL ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (int ,int ,int ,int *,int ,int ,int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_2 (int ,int *,scalar_t__) ;
 scalar_t__ FUNC_3 (int ) ;
 int * FUNC_4 (int ,scalar_t__) ;
 int FUNC_5 (int *) ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_6 (scalar_t__,int *,scalar_t__,scalar_t__*,int *) ;

BOOL FUNC_7(HWND VAR_7, LPCTSTR VAR_8)
{
 HANDLE VAR_9;
 BOOL VAR_10 = VAR_1;

 VAR_9 = FUNC_1(VAR_8, VAR_3, 0, ((void*)0),
  VAR_0, VAR_2, ((void*)0));
 if(VAR_9 != VAR_5)
 {
  DWORD VAR_11;

  VAR_11 = FUNC_3(VAR_7);

  if(VAR_11 > 0)
  {
   LPSTR VAR_12;
   DWORD VAR_13 = VAR_11 + 1;

   VAR_12 = FUNC_4(VAR_4, VAR_13);
   if(VAR_12 != ((void*)0))
   {
    if(FUNC_2(VAR_7, VAR_12, VAR_13))
    {
     DWORD VAR_14;

     if(FUNC_6(VAR_9, VAR_12, VAR_11, &VAR_14, ((void*)0)))
      VAR_10 = VAR_6;
    }
    FUNC_5(VAR_12);
   }
  }
  FUNC_0(VAR_9);
 }
 return VAR_10;
}
