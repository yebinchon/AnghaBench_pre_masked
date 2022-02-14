
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int WCHAR ;
struct TYPE_3__ {int hwnd; } ;
typedef int INT ;
typedef TYPE_1__ BUTTON_INFO ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int *,int) ;
 int * FUNC_2 (int) ;

__attribute__((used)) static inline WCHAR *FUNC_3( const BUTTON_INFO *VAR_0 )
{
    INT VAR_1 = FUNC_0( VAR_0->hwnd );
    WCHAR *VAR_2 = FUNC_2( (VAR_1 + 1) * sizeof(WCHAR) );
    if (VAR_2)
        FUNC_1( VAR_0->hwnd, VAR_2, VAR_1 + 1 );
    return VAR_2;
}
