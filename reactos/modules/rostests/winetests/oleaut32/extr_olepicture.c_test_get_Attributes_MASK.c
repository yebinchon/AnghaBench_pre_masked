
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int IPicture ;
typedef scalar_t__ HRESULT ;
typedef short DWORD ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *,short*) ;
 scalar_t__ FUNC_2 (int *,short*) ;
 scalar_t__ FUNC_3 (int *,int *,int ,void**) ;
 short VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (int,char*,short) ;
 int FUNC_5 (scalar_t__,scalar_t__) ;

__attribute__((used)) static void FUNC_6(void)
{
    IPicture *VAR_5;
    HRESULT VAR_6;
    short VAR_7;
    DWORD VAR_8;

    VAR_6 = FUNC_3(((void*)0), &VAR_1, VAR_4, (void **)&VAR_5);
    FUNC_4(VAR_6 == VAR_3, "Failed to create a picture, hr %#x.\n", VAR_6);
    VAR_6 = FUNC_2(VAR_5, &VAR_7);
    FUNC_4(VAR_6 == VAR_3, "IPicture_get_Type does not return S_OK, but 0x%08x\n", VAR_6);
    FUNC_4(VAR_7 == VAR_2, "Expected type = PICTYPE_UNINITIALIZED, got = %d\n", VAR_7);

    VAR_6 = FUNC_1(VAR_5, ((void*)0));
    FUNC_5(VAR_6, VAR_0);

    VAR_8 = 0xdeadbeef;
    VAR_6 = FUNC_1(VAR_5, &VAR_8);
    FUNC_5(VAR_6, VAR_3);
    FUNC_4(VAR_8 == 0, "IPicture_get_Attributes does not reset attr to zero, got %d\n", VAR_8);

    FUNC_0(VAR_5);
}
