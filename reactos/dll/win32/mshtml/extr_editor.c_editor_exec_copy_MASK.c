
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int VARIANT ;
struct TYPE_6__ {TYPE_1__* doc_obj; } ;
struct TYPE_5__ {int nscontainer; } ;
typedef TYPE_2__ HTMLDocument ;
typedef int HRESULT ;
typedef int DWORD ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (TYPE_2__*,int ) ;

HRESULT FUNC_2(HTMLDocument *VAR_4, DWORD VAR_5, VARIANT *VAR_6, VARIANT *VAR_7)
{
    FUNC_1(VAR_4, VAR_3);

    if(!VAR_4->doc_obj->nscontainer)
        return VAR_0;

    FUNC_0(VAR_4->doc_obj->nscontainer, VAR_1);
    return VAR_2;
}
