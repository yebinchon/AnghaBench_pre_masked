
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum window_search_mode { ____Placeholder_window_search_mode } window_search_mode ;
typedef enum window_priority { ____Placeholder_window_priority } window_priority ;
typedef int * HWND ;


 int * FUNC_0 (int,int **,int*) ;
 int * FUNC_1 (int *,int,int **,int) ;
 scalar_t__ FUNC_2 (char const*,char*) ;
 int FUNC_3 (int *,int,char const*,char const*,char const*,int) ;

HWND FUNC_4(enum window_search_mode VAR_0, enum window_priority VAR_1,
   const char *VAR_2, const char *VAR_3, const char *VAR_4)
{
 HWND VAR_5;
 bool VAR_6 = 0;

 HWND VAR_7 = FUNC_0(VAR_0, &VAR_5, &VAR_6);
 HWND VAR_8 = ((void*)0);
 int VAR_9 = 0x7FFFFFFF;

 if (!VAR_2)
  return ((void*)0);

 bool VAR_10 = FUNC_2(VAR_2, "Windows.UI.Core.CoreWindow") == 0;

 while (VAR_7) {
  int VAR_11 = FUNC_3(VAR_7, VAR_1, VAR_2, VAR_3, VAR_4,
        VAR_10);
  if (VAR_11 < VAR_9) {
   VAR_9 = VAR_11;
   VAR_8 = VAR_7;
   if (VAR_11 == 0)
    break;
  }

  VAR_7 = FUNC_1(VAR_7, VAR_0, &VAR_5, VAR_6);
 }

 return VAR_8;
}
