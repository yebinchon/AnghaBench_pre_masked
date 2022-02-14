
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int nsresult ;
typedef int nsIDOMDocument ;
struct TYPE_5__ {int nsiframe; } ;
struct TYPE_4__ {TYPE_2__ framebase; } ;
typedef TYPE_1__ HTMLIFrame ;
typedef int HTMLDOMNode ;
typedef int HRESULT ;


 int FUNC_0 (char*,int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int ) ;
 TYPE_1__* FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,int **) ;
 int FUNC_5 (TYPE_2__*,int *) ;

__attribute__((used)) static HRESULT FUNC_6(HTMLDOMNode *VAR_1)
{
    HTMLIFrame *VAR_2 = FUNC_2(VAR_1);
    nsIDOMDocument *VAR_3;
    nsresult VAR_4;
    HRESULT VAR_5;

    VAR_4 = FUNC_4(VAR_2->framebase.nsiframe, &VAR_3);
    if(FUNC_1(VAR_4) || !VAR_3) {
        FUNC_0("GetContentDocument failed: %08x\n", VAR_4);
        return VAR_0;
    }

    VAR_5 = FUNC_5(&VAR_2->framebase, VAR_3);
    FUNC_3(VAR_3);
    return VAR_5;
}
