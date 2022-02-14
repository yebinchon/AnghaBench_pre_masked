
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int VARIANT ;
struct TYPE_8__ {TYPE_1__* doc_obj; } ;
struct TYPE_7__ {scalar_t__ usermode; } ;
typedef TYPE_2__ HTMLDocument ;
typedef int HRESULT ;
typedef int DWORD ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,TYPE_2__*,int ,int *,int *) ;
 int FUNC_1 (TYPE_2__*,int ,int *) ;
 int FUNC_2 (TYPE_2__*,int ,int *,int *) ;

__attribute__((used)) static HRESULT FUNC_3(HTMLDocument *VAR_3, DWORD VAR_4, VARIANT *VAR_5, VARIANT *VAR_6)
{
    FUNC_0("(%p)->(%08x %p %p)\n", VAR_3, VAR_4, VAR_5, VAR_6);

    if(VAR_3->doc_obj->usermode == VAR_0)
        return FUNC_2(VAR_3, VAR_4, VAR_5, VAR_6);

    FUNC_1(VAR_3, VAR_1, ((void*)0));
    return VAR_2;
}
