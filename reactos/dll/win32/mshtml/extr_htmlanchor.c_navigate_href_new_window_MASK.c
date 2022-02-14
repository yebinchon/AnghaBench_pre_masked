
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int nsAString ;
typedef int WCHAR ;
struct TYPE_7__ {TYPE_1__* doc; } ;
struct TYPE_9__ {TYPE_2__ node; } ;
struct TYPE_8__ {int window; } ;
struct TYPE_6__ {TYPE_3__ basedoc; } ;
typedef int PRUnichar ;
typedef int IUri ;
typedef TYPE_4__ HTMLElement ;
typedef int HRESULT ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int const*,int **) ;
 int FUNC_3 (int ,int *,int const*,int *,int *) ;
 int FUNC_4 (int *,int const**) ;

__attribute__((used)) static HRESULT FUNC_5(HTMLElement *VAR_0, nsAString *VAR_1, const WCHAR *VAR_2)
{
    const PRUnichar *VAR_3;
    IUri *VAR_4;
    HRESULT VAR_5;

    FUNC_4(VAR_1, &VAR_3);
    VAR_5 = FUNC_2(VAR_0->node.doc->basedoc.window, VAR_3, &VAR_4);
    if(FUNC_0(VAR_5))
        return VAR_5;

    VAR_5 = FUNC_3(VAR_0->node.doc->basedoc.window, VAR_4, VAR_2, ((void*)0), ((void*)0));
    FUNC_1(VAR_4);
    return VAR_5;
}
