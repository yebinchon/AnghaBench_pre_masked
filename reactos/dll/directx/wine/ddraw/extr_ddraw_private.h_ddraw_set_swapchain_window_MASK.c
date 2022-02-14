
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ddraw {int * swapchain_window; } ;
typedef int * HWND ;


 int * FUNC_0 () ;

__attribute__((used)) static inline void FUNC_1(struct ddraw *VAR_0, HWND VAR_1)
{
    if (VAR_1 == FUNC_0())
        VAR_1 = ((void*)0);
    VAR_0->swapchain_window = VAR_1;
}
