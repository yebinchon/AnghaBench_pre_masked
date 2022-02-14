
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct view {scalar_t__ proplist; } ;
typedef char WCHAR ;
typedef int * BSTR ;


 int * FUNC_0 (char const*) ;

__attribute__((used)) static BSTR FUNC_1( const struct view *VAR_0 )
{
    static const WCHAR VAR_1[] = {'R','O','O','T','\\','C','I','M','V','2',0};

    if (VAR_0->proplist) return ((void*)0);
    return FUNC_0( VAR_1 );
}
