
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int nsAString ;
typedef char WCHAR ;
struct TYPE_9__ {int IHTMLWindow2_iface; } ;
struct TYPE_10__ {TYPE_1__ base; struct TYPE_10__* parent; } ;
typedef int PRUnichar ;
typedef TYPE_2__ HTMLOuterWindow ;
typedef int HRESULT ;
typedef int BOOL ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*,int ) ;
 int VAR_1 ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int const*) ;
 int FUNC_5 (TYPE_2__*,int const*,int ,TYPE_2__**) ;
 int FUNC_6 (TYPE_2__*,TYPE_2__**) ;
 int FUNC_7 (int *,int const**) ;
 int FUNC_8 (int const*,char const*) ;

HTMLOuterWindow *FUNC_9(HTMLOuterWindow *VAR_2, nsAString *VAR_3, BOOL *VAR_4)
{
    HTMLOuterWindow *VAR_5, *VAR_6;
    const PRUnichar *VAR_7;
    HRESULT VAR_8;

    static const WCHAR VAR_9[] = {'_','p','a','r','e','n','t',0};
    static const WCHAR VAR_10[] = {'_','s','e','l','f',0};
    static const WCHAR VAR_11[] = {'_','t','o','p',0};

    *VAR_4 = VAR_0;

    FUNC_7(VAR_3, &VAR_7);
    FUNC_2("%s\n", FUNC_4(VAR_7));

    if(!*VAR_7 || !FUNC_8(VAR_7, VAR_10)) {
        FUNC_1(&VAR_2->base.IHTMLWindow2_iface);
        return VAR_2;
    }

    if(!FUNC_8(VAR_7, VAR_11)) {
        FUNC_6(VAR_2, &VAR_5);
        FUNC_1(&VAR_5->base.IHTMLWindow2_iface);
        return VAR_5;
    }

    if(!FUNC_8(VAR_7, VAR_9)) {
        if(!VAR_2->parent) {
            FUNC_3("Window has no parent, treat as self\n");
            FUNC_1(&VAR_2->base.IHTMLWindow2_iface);
            return VAR_2;
        }

        FUNC_1(&VAR_2->parent->base.IHTMLWindow2_iface);
        return VAR_2->parent;
    }

    FUNC_6(VAR_2, &VAR_5);

    VAR_8 = FUNC_5(VAR_5, VAR_7, VAR_1, &VAR_6);
    if(FUNC_0(VAR_8) || !VAR_6) {
        *VAR_4 = VAR_1;
        return ((void*)0);
    }

    FUNC_1(&VAR_6->base.IHTMLWindow2_iface);
    return VAR_6;
}
