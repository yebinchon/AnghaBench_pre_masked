
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char WCHAR ;
typedef scalar_t__ HINSTANCE ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (char const*,int *,int ) ;
 scalar_t__ VAR_1 ;

HINSTANCE FUNC_1(void)
{
    static const WCHAR VAR_2[] =
        {'s','h','d','o','c','l','c','.','d','l','l',0};

    if(VAR_1)
        return VAR_1;

    return VAR_1 = FUNC_0(VAR_2, ((void*)0), VAR_0);
}
