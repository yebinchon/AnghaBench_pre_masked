
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ len; } ;
typedef TYPE_1__ xmlstr_t ;
typedef enum comclass_threadingmodel { ____Placeholder_comclass_threadingmodel } comclass_threadingmodel ;
typedef char WCHAR ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (TYPE_1__*,char const*) ;

__attribute__((used)) static enum comclass_threadingmodel FUNC_1(xmlstr_t *VAR_5)
{
    static const WCHAR VAR_6[] = {'A','p','a','r','t','m','e','n','t',0};
    static const WCHAR VAR_7[] = {'N','e','u','t','r','a','l',0};
    static const WCHAR VAR_8[] = {'F','r','e','e',0};
    static const WCHAR VAR_9[] = {'B','o','t','h',0};

    if (VAR_5->len == 0) return VAR_4;
    if (FUNC_0(VAR_5, VAR_6))
        return VAR_0;
    else if (FUNC_0(VAR_5, VAR_8))
        return VAR_2;
    else if (FUNC_0(VAR_5, VAR_9))
        return VAR_1;
    else if (FUNC_0(VAR_5, VAR_7))
        return VAR_3;
    else
        return VAR_4;
}
