
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int VARIANT ;
struct TYPE_6__ {TYPE_1__* doc_obj; } ;
struct TYPE_5__ {int usermode; } ;
typedef TYPE_2__ HTMLDocument ;
typedef int HRESULT ;
typedef int DWORD ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int VAR_1 ;
 int FUNC_1 (char*,TYPE_2__*,int ,int *,int *) ;

__attribute__((used)) static HRESULT FUNC_2(HTMLDocument *VAR_2, DWORD VAR_3, VARIANT *VAR_4, VARIANT *VAR_5)
{
    FUNC_1("(%p)->(%08x %p %p)\n", VAR_2, VAR_3, VAR_4, VAR_5);

    if(VAR_4 || VAR_5)
        FUNC_0("unsupported args\n");

    VAR_2->doc_obj->usermode = VAR_0;

    return VAR_1;
}
