
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int clsid; int value; int property; scalar_t__ guid; } ;
typedef TYPE_1__ property_test_t ;
typedef int VARIANT ;
typedef int IXMLDOMDocument2 ;
typedef scalar_t__ HRESULT ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__,int *,int ,int *,void**) ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *,int ,int *) ;
 scalar_t__ VAR_2 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (scalar_t__,int *) ;
 scalar_t__ FUNC_7 (int ,int ) ;
 int FUNC_8 (int,char*,scalar_t__,...) ;
 TYPE_1__* VAR_3 ;

__attribute__((used)) static void FUNC_9(void)
{
    const property_test_t *VAR_4 = VAR_3;

    while (VAR_4->guid)
    {
        IXMLDOMDocument2 *VAR_5;
        VARIANT VAR_6;
        HRESULT VAR_7;

        if (!FUNC_6(VAR_4->guid, &VAR_1))
        {
            VAR_4++;
            continue;
        }

        VAR_7 = FUNC_0(VAR_4->guid, ((void*)0), VAR_0, &VAR_1, (void**)&VAR_5);
        FUNC_8(VAR_7 == VAR_2, "got 0x%08x\n", VAR_7);

        VAR_7 = FUNC_2(VAR_5, FUNC_5(VAR_4->property), &VAR_6);
        FUNC_8(VAR_7 == VAR_2, "got 0x%08x\n", VAR_7);
        FUNC_8(FUNC_7(FUNC_3(&VAR_6), FUNC_5(VAR_4->value)) == 0, "expected %s, for %s\n",
           VAR_4->value, VAR_4->clsid);
        FUNC_4(&VAR_6);

        FUNC_1(VAR_5);

        VAR_4++;
    }
}
