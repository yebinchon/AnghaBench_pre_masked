
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int IUnknown ;
typedef int IGlobalOptions ;
typedef scalar_t__ HRESULT ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *,int *,int ,int *,void**) ;
 int FUNC_1 (int *) ;
 int FUNC_2 () ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 int FUNC_4 (int *) ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_5 (int) ;
 int FUNC_6 (int,char*,scalar_t__) ;
 int FUNC_7 (char*) ;

__attribute__((used)) static void FUNC_8(void)
{
    IGlobalOptions *VAR_6;
    HRESULT VAR_7;

    FUNC_1(((void*)0));

    VAR_7 = FUNC_0(&VAR_1, ((void*)0), VAR_0,
            &VAR_4, (void**)&VAR_6);
    FUNC_6(VAR_7 == VAR_5 || FUNC_5(VAR_7 == VAR_3), "CoCreateInstance(CLSID_GlobalOptions) failed: %08x\n", VAR_7);
    if(FUNC_3(VAR_7))
    {
        FUNC_7("CLSID_GlobalOptions not available\n");
        FUNC_2();
        return;
    }

    FUNC_4(VAR_6);

    VAR_7 = FUNC_0(&VAR_1, (IUnknown*)0xdeadbeef, VAR_0,
            &VAR_4, (void**)&VAR_6);
    FUNC_6(VAR_7 == VAR_2, "CoCreateInstance(CLSID_GlobalOptions) failed: %08x\n", VAR_7);

    FUNC_2();
}
