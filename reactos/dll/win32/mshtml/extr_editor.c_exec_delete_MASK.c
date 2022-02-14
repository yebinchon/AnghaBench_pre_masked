
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int VARIANT ;
struct TYPE_7__ {TYPE_1__* doc_obj; } ;
struct TYPE_6__ {scalar_t__ nscontainer; } ;
typedef TYPE_2__ HTMLDocument ;
typedef int HRESULT ;
typedef int DWORD ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,TYPE_2__*,int *,int *) ;
 int VAR_2 ;
 int FUNC_1 (scalar_t__,int ) ;
 int FUNC_2 (TYPE_2__*,int ) ;

__attribute__((used)) static HRESULT FUNC_3(HTMLDocument *VAR_3, DWORD VAR_4, VARIANT *VAR_5, VARIANT *VAR_6)
{
    FUNC_0("(%p)->(%p %p)\n", VAR_3, VAR_5, VAR_6);

    if(VAR_3->doc_obj->nscontainer)
        FUNC_1(VAR_3->doc_obj->nscontainer, VAR_0);

    FUNC_2(VAR_3, VAR_2);
    return VAR_1;
}
