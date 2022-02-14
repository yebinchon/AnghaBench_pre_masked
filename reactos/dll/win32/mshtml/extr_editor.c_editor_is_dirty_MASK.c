
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ cpp_bool ;
struct TYPE_7__ {TYPE_2__* doc_obj; } ;
struct TYPE_6__ {TYPE_1__* nscontainer; } ;
struct TYPE_5__ {int editor; } ;
typedef TYPE_3__ HTMLDocument ;
typedef int HRESULT ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,scalar_t__*) ;

HRESULT FUNC_1(HTMLDocument *VAR_2)
{
    cpp_bool VAR_3;

    if(!VAR_2->doc_obj->nscontainer || !VAR_2->doc_obj->nscontainer->editor)
        return VAR_0;

    FUNC_0(VAR_2->doc_obj->nscontainer->editor, &VAR_3);

    return VAR_3 ? VAR_1 : VAR_0;
}
