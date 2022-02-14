
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msxmlsupported_data_t {int* supported; int ** ifaces; int name; scalar_t__ clsid; } ;
typedef int IUnknown ;
typedef scalar_t__ HRESULT ;


 int FUNC_0 (int **) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (scalar_t__,int *,int ,int *,void**) ;
 int FUNC_2 (int *) ;
 scalar_t__ VAR_1 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (char*,int ,int ) ;

__attribute__((used)) static void FUNC_5(struct msxmlsupported_data_t *VAR_2)
{
    while (VAR_2->clsid)
    {
        IUnknown *VAR_3;
        HRESULT VAR_4;
        int VAR_5;

        for (VAR_5 = 0; VAR_5 < FUNC_0(VAR_2->ifaces) && VAR_2->ifaces[VAR_5] != ((void*)0); VAR_5++)
        {
            VAR_4 = FUNC_1(VAR_2->clsid, ((void*)0), VAR_0, VAR_2->ifaces[VAR_5], (void**)&VAR_3);
            if (VAR_4 == VAR_1) FUNC_2(VAR_3);

            VAR_2->supported[VAR_5] = VAR_4 == VAR_1;
            if (VAR_4 != VAR_1) FUNC_4("class %s, iface %s not supported\n", VAR_2->name, FUNC_3(VAR_2->ifaces[VAR_5]));
        }

        VAR_2++;
    }
}
