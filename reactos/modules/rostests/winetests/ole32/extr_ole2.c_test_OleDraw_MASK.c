
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int RECT ;
typedef int IUnknown ;
typedef scalar_t__ HRESULT ;
typedef int HDC ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int *,int ,int ,int *) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int,char*,scalar_t__) ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_2(void)
{
    HRESULT VAR_3;
    RECT VAR_4;

    VAR_3 = FUNC_0((IUnknown*)&VAR_2, 0, (HDC)0x1, ((void*)0));
    FUNC_1(VAR_3 == VAR_1, "got 0x%08x\n", VAR_3);

    VAR_3 = FUNC_0(((void*)0), 0, (HDC)0x1, ((void*)0));
    FUNC_1(VAR_3 == VAR_0, "got 0x%08x\n", VAR_3);

    VAR_3 = FUNC_0(((void*)0), 0, (HDC)0x1, &VAR_4);
    FUNC_1(VAR_3 == VAR_0, "got 0x%08x\n", VAR_3);
}
