
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int IUnknown ;
typedef int HRESULT ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int *,int ,int *,void**) ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (int *,int *,void**) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int ) ;
 int VAR_7 ;
 int FUNC_5 (int,char*,int ) ;
 int FUNC_6 (int ,char*) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static void FUNC_8(void)
{
    HRESULT VAR_8;
    IUnknown *VAR_9;
    IUnknown *VAR_10;

    if (FUNC_1(FUNC_7(VAR_7)))
        return;

    VAR_8 = FUNC_0(&VAR_1, ((void*)0), VAR_0, &VAR_5, (void **)&VAR_9);
    FUNC_6(VAR_8, "CoCreateInstance");

    if (FUNC_4(VAR_8))
    {
        VAR_8 = FUNC_2(VAR_9, &VAR_6, (void **)&VAR_10);
        FUNC_5(VAR_8 == VAR_2, "IUnknown_QueryInterface on handler for invalid interface returned 0x%08x instead of E_NOINTERFACE\n", VAR_8);


        VAR_8 = FUNC_2(VAR_9, &VAR_4, (void **)&VAR_10);
        FUNC_6(VAR_8, "IUnknown_QueryInterface(&IID_IOleObject)");
        FUNC_3(VAR_10);

        FUNC_3(VAR_9);
    }

    FUNC_7(VAR_3);
}
