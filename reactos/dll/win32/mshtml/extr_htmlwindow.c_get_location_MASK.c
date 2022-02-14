
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {TYPE_1__* location; } ;
struct TYPE_7__ {int IHTMLLocation_iface; } ;
typedef TYPE_1__ HTMLLocation ;
typedef TYPE_2__ HTMLInnerWindow ;
typedef int HRESULT ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (TYPE_2__*,TYPE_1__**) ;
 int FUNC_2 (int *) ;
 int VAR_0 ;

__attribute__((used)) static HRESULT FUNC_3(HTMLInnerWindow *VAR_1, HTMLLocation **VAR_2)
{
    if(VAR_1->location) {
        FUNC_2(&VAR_1->location->IHTMLLocation_iface);
    }else {
        HRESULT VAR_3;

        VAR_3 = FUNC_1(VAR_1, &VAR_1->location);
        if(FUNC_0(VAR_3))
            return VAR_3;
    }

    *VAR_2 = VAR_1->location;
    return VAR_0;
}
