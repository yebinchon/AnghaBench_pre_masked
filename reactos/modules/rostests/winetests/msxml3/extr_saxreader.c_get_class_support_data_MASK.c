
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msxmlsupported_data_t {int supported; int name; scalar_t__ clsid; } ;
typedef int REFIID ;
typedef int IUnknown ;
typedef scalar_t__ HRESULT ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__,int *,int ,int ,void**) ;
 int FUNC_1 (int *) ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (char*,int ) ;

__attribute__((used)) static void FUNC_3(struct msxmlsupported_data_t *VAR_2, REFIID VAR_3)
{
    while (VAR_2->clsid)
    {
        IUnknown *VAR_4;
        HRESULT VAR_5;

        VAR_5 = FUNC_0(VAR_2->clsid, ((void*)0), VAR_0, VAR_3, (void**)&VAR_4);
        if (VAR_5 == VAR_1) FUNC_1(VAR_4);

        VAR_2->supported = VAR_5 == VAR_1;
        if (VAR_5 != VAR_1) FUNC_2("class %s not supported\n", VAR_2->name);

        VAR_2++;
    }
}
