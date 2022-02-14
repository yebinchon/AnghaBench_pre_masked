
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum window_search_mode { ____Placeholder_window_search_mode } window_search_mode ;
typedef int * HWND ;


 int * FUNC_0 (int ,int *,int *,int *) ;
 int VAR_0 ;
 int FUNC_1 () ;
 int * FUNC_2 (int ,int ) ;
 int FUNC_3 (int *,int) ;
 int * FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *) ;
 int * FUNC_6 (int *,int,int **,int) ;

__attribute__((used)) static HWND FUNC_7(enum window_search_mode VAR_1, HWND *VAR_2,
    bool *VAR_3)
{
 HWND VAR_4 = FUNC_0(FUNC_1(), ((void*)0), ((void*)0), ((void*)0));

 if (!VAR_4) {
  *VAR_3 = 0;
  VAR_4 = FUNC_2(FUNC_1(), VAR_0);
 } else {
  *VAR_3 = 1;
 }

 *VAR_2 = ((void*)0);

 if (!FUNC_3(VAR_4, VAR_1)) {
  VAR_4 = FUNC_6(VAR_4, VAR_1, VAR_2, *VAR_3);

  if (!VAR_4 && *VAR_3) {
   *VAR_3 = 0;

   VAR_4 = FUNC_2(FUNC_1(), VAR_0);
   if (!FUNC_3(VAR_4, VAR_1))
    VAR_4 = FUNC_6(VAR_4, VAR_1, VAR_2,
           *VAR_3);
  }
 }

 if (FUNC_5(VAR_4)) {
  HWND VAR_5 = FUNC_4(VAR_4);
  if (VAR_5) {
   *VAR_2 = VAR_4;
   return VAR_5;
  }
 }

 return VAR_4;
}
