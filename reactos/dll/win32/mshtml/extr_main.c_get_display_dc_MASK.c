
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char WCHAR ;
typedef int HDC ;


 int FUNC_0 (char const*,int *,int *,int *) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (void**,int ,int *) ;
 int VAR_0 ;

HDC FUNC_3(void)
{
    static const WCHAR VAR_1[] = {'D','I','S','P','L','A','Y',0};

    if(!VAR_0) {
        HDC VAR_2;

        VAR_2 = FUNC_0(VAR_1, ((void*)0), ((void*)0), ((void*)0));
        if(FUNC_2((void**)&VAR_0, VAR_2, ((void*)0)))
            FUNC_1(VAR_2);
    }

    return VAR_0;
}
