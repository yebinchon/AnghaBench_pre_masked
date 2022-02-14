
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {void* window; } ;
typedef TYPE_1__ ole_clipbrd ;
typedef void* HWND ;
typedef int HRESULT ;


 int VAR_0 ;
 int FUNC_0 (void*) ;
 int VAR_1 ;
 void* FUNC_1 () ;

__attribute__((used)) static inline HRESULT FUNC_2(ole_clipbrd *VAR_2, HWND *VAR_3)
{






    if ( !VAR_2->window )
        VAR_2->window = FUNC_1();

    *VAR_3 = VAR_2->window;
    return *VAR_3 ? VAR_1 : VAR_0;
}
