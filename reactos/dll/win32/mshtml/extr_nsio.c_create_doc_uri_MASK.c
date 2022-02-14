
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int nsresult ;
struct TYPE_9__ {int is_doc_uri; } ;
typedef TYPE_2__ nsWineURI ;
struct TYPE_10__ {TYPE_1__* doc_obj; } ;
struct TYPE_8__ {int nscontainer; } ;
typedef int IUri ;
typedef TYPE_3__ HTMLOuterWindow ;
typedef int HRESULT ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,TYPE_3__*,int ,int *,TYPE_2__**) ;

HRESULT FUNC_2(HTMLOuterWindow *VAR_3, IUri *VAR_4, nsWineURI **VAR_5)
{
    nsWineURI *VAR_6;
    nsresult VAR_7;

    VAR_7 = FUNC_1(VAR_4, VAR_3, VAR_3->doc_obj->nscontainer, ((void*)0), &VAR_6);
    if(FUNC_0(VAR_7))
        return VAR_0;

    VAR_6->is_doc_uri = VAR_2;

    *VAR_5 = VAR_6;
    return VAR_1;
}
