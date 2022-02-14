
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ buf; } ;
typedef TYPE_1__ wstrbuf_t ;
struct TYPE_8__ {int nsnode; } ;
typedef TYPE_2__ HTMLDOMNode ;
typedef int HRESULT ;
typedef int * BSTR ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_1 ;
 int * FUNC_1 (scalar_t__) ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (TYPE_1__*,int ) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*) ;

HRESULT FUNC_7(HTMLDOMNode *VAR_2, BSTR *VAR_3)
{
    wstrbuf_t VAR_4;
    HRESULT VAR_5 = VAR_1;

    if (!FUNC_6(&VAR_4))
        return VAR_0;
    FUNC_4(&VAR_4, VAR_2->nsnode);
    if(VAR_4.buf) {
        *VAR_3 = FUNC_1(VAR_4.buf);
        if(!*VAR_3)
            VAR_5 = VAR_0;
    } else {
        *VAR_3 = ((void*)0);
    }
    FUNC_5(&VAR_4);

    if(FUNC_0(VAR_5))
        FUNC_2("ret %s\n", FUNC_3(*VAR_3));
    return VAR_5;
}
