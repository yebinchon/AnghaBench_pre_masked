
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int xmlreader ;
struct TYPE_6__ {char* member_0; int member_1; } ;
typedef TYPE_1__ strval ;
typedef char WCHAR ;


 char* FUNC_0 (int const*,TYPE_1__ const*) ;
 int FUNC_1 (int const*,TYPE_1__ const*,TYPE_1__ const*) ;

__attribute__((used)) static WCHAR FUNC_2(const xmlreader *VAR_0, const strval *VAR_1)
{
    static const WCHAR VAR_2[] = {'l','t'};
    static const WCHAR VAR_3[] = {'g','t'};
    static const WCHAR VAR_4[] = {'a','m','p'};
    static const WCHAR VAR_5[] = {'a','p','o','s'};
    static const WCHAR VAR_6[] = {'q','u','o','t'};
    static const strval VAR_7 = { (WCHAR*)VAR_2, 2 };
    static const strval VAR_8 = { (WCHAR*)VAR_3, 2 };
    static const strval VAR_9 = { (WCHAR*)VAR_4, 3 };
    static const strval VAR_10 = { (WCHAR*)VAR_5, 4 };
    static const strval VAR_11 = { (WCHAR*)VAR_6, 4 };
    WCHAR *VAR_12 = FUNC_0(VAR_0, VAR_1);

    switch (*VAR_12)
    {
    case 'l':
        if (FUNC_1(VAR_0, VAR_1, &VAR_7)) return '<';
        break;
    case 'g':
        if (FUNC_1(VAR_0, VAR_1, &VAR_8)) return '>';
        break;
    case 'a':
        if (FUNC_1(VAR_0, VAR_1, &VAR_9))
            return '&';
        else if (FUNC_1(VAR_0, VAR_1, &VAR_10))
            return '\'';
        break;
    case 'q':
        if (FUNC_1(VAR_0, VAR_1, &VAR_11)) return '\"';
        break;
    default:
        ;
    }

    return 0;
}
