
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char WCHAR ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (char const*) ;
 scalar_t__ FUNC_2 (char const*,char const*) ;
 int VAR_4 ;

__attribute__((used)) static BOOL FUNC_3(const WCHAR *VAR_5)
{
    static const WCHAR VAR_6[] = {'n','o','l','o','g','o',0};
    static const WCHAR VAR_7[] = {'i',0};
    static const WCHAR VAR_8[] = {'b',0};

    if(*VAR_5 == '/') {
        ++VAR_5;
        if(*VAR_5 == '/')
            ++VAR_5;
    }
    else
        ++VAR_5;

    if(FUNC_2(VAR_5, VAR_7) == 0)
        VAR_4 = VAR_3;
    else if(FUNC_2(VAR_5, VAR_8) == 0)
        VAR_4 = VAR_2;
    else if(FUNC_2(VAR_5, VAR_6) == 0)
        FUNC_0("ignored %s switch\n", FUNC_1(VAR_6));
    else
    {
        FUNC_0("unsupported switch %s\n", FUNC_1(VAR_5));
        return VAR_0;
    }
    return VAR_1;
}
