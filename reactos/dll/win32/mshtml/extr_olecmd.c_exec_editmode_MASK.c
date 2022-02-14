
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int VARIANT ;
struct TYPE_4__ {int doc_obj; } ;
typedef TYPE_1__ HTMLDocument ;
typedef int HRESULT ;
typedef int DWORD ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*,TYPE_1__*,int ,int *,int *) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static HRESULT FUNC_3(HTMLDocument *VAR_0, DWORD VAR_1, VARIANT *VAR_2, VARIANT *VAR_3)
{
    FUNC_1("(%p)->(%08x %p %p)\n", VAR_0, VAR_1, VAR_2, VAR_3);

    if(VAR_2 || VAR_3)
        FUNC_0("unsupported args\n");

    return FUNC_2(VAR_0->doc_obj);
}
