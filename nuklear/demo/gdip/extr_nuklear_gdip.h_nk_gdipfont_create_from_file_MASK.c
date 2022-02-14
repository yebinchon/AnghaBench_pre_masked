
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int WCHAR ;
struct TYPE_2__ {size_t curFontCollection; int * fontCollection; } ;
typedef int GdipFont ;


 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int ,int const*) ;
 TYPE_1__ VAR_0 ;
 int FUNC_2 () ;
 int * FUNC_3 (int) ;

GdipFont*
FUNC_4(const WCHAR* VAR_1, int VAR_2)
{
    if( !FUNC_2() )
        if( FUNC_0(&VAR_0.fontCollection[VAR_0.curFontCollection]) ) return ((void*)0);
    if( FUNC_1(FUNC_2(), VAR_1) ) return ((void*)0);
    return FUNC_3(VAR_2);
}
