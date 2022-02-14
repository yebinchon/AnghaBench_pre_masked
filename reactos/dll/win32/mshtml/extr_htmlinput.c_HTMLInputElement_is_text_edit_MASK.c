
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int nsresult ;
typedef int nsAString ;
typedef char WCHAR ;
struct TYPE_3__ {int nsinput; } ;
typedef int PRUnichar ;
typedef TYPE_1__ HTMLInputElement ;
typedef int HTMLDOMNode ;
typedef int BOOL ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 TYPE_1__* FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int const**) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int ,int *) ;
 int FUNC_6 (int const*,char const*) ;

__attribute__((used)) static BOOL FUNC_7(HTMLDOMNode *VAR_1)
{
    HTMLInputElement *VAR_2 = FUNC_1(VAR_1);
    const PRUnichar *VAR_3;
    nsAString VAR_4;
    nsresult VAR_5;
    BOOL VAR_6 = VAR_0;

    static const WCHAR VAR_7[] = {'b','u','t','t','o','n',0};
    static const WCHAR VAR_8[] = {'h','i','d','d','e','n',0};
    static const WCHAR VAR_9[] = {'p','a','s','s','w','o','r','d',0};
    static const WCHAR VAR_10[] = {'r','e','s','e','t',0};
    static const WCHAR VAR_11[] = {'s','u','b','m','i','t',0};
    static const WCHAR VAR_12[] = {'t','e','x','t',0};

    FUNC_4(&VAR_4, ((void*)0));
    VAR_5 = FUNC_5(VAR_2->nsinput, &VAR_4);
    if(FUNC_0(VAR_5)) {
        FUNC_3(&VAR_4, &VAR_3);
        VAR_6 = !FUNC_6(VAR_3, VAR_7) || !FUNC_6(VAR_3, VAR_8) || !FUNC_6(VAR_3, VAR_9)
            || !FUNC_6(VAR_3, VAR_10) || !FUNC_6(VAR_3, VAR_11) || !FUNC_6(VAR_3, VAR_12);
    }
    FUNC_2(&VAR_4);
    return VAR_6;
}
