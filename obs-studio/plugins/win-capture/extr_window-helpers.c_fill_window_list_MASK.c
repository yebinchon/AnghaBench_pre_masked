
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int obs_property_t ;
typedef enum window_search_mode { ____Placeholder_window_search_mode } window_search_mode ;
typedef int add_window_cb ;
typedef scalar_t__ HWND ;


 int FUNC_0 (int *,scalar_t__,int ) ;
 scalar_t__ FUNC_1 (int,scalar_t__*,int*) ;
 scalar_t__ FUNC_2 (scalar_t__,int,scalar_t__*,int) ;

void FUNC_3(obs_property_t *VAR_0, enum window_search_mode VAR_1,
        add_window_cb VAR_2)
{
 HWND VAR_3;
 bool VAR_4 = 0;

 HWND VAR_5 = FUNC_1(VAR_1, &VAR_3, &VAR_4);

 while (VAR_5) {
  FUNC_0(VAR_0, VAR_5, VAR_2);
  VAR_5 = FUNC_2(VAR_5, VAR_1, &VAR_3, VAR_4);
 }
}
