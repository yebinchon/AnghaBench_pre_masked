
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int VARIANT ;
typedef int IUnknown ;
typedef int IEnumVARIANT ;
typedef int IDriveCollection ;
typedef int IDrive ;
typedef scalar_t__ HRESULT ;
typedef scalar_t__ DriveTypeConst ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ,int *,void**) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *,int **) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *,scalar_t__*) ;
 scalar_t__ FUNC_5 (int *,int,int *,int *) ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int ,int **) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int VAR_4 ;
 int FUNC_10 (int,char*,scalar_t__) ;

__attribute__((used)) static IDrive *FUNC_11(void)
{
    IDriveCollection *VAR_5;
    IEnumVARIANT *VAR_6;
    IDrive *VAR_7;
    HRESULT VAR_8;

    VAR_8 = FUNC_7(VAR_4, &VAR_5);
    FUNC_10(VAR_8 == VAR_3, "got 0x%08x\n", VAR_8);

    VAR_8 = FUNC_2(VAR_5, (IUnknown**)&VAR_6);
    FUNC_10(VAR_8 == VAR_3, "got 0x%08x\n", VAR_8);
    FUNC_1(VAR_5);

    while (1) {
        DriveTypeConst VAR_9;
        VARIANT VAR_10;

        VAR_8 = FUNC_5(VAR_6, 1, &VAR_10, ((void*)0));
        if (VAR_8 == VAR_2) {
            VAR_7 = ((void*)0);
            break;
        }
        FUNC_10(VAR_8 == VAR_3, "got 0x%08x\n", VAR_8);

        VAR_8 = FUNC_0(FUNC_8(&VAR_10), &VAR_1, (void**)&VAR_7);
        FUNC_10(VAR_8 == VAR_3, "got 0x%08x\n", VAR_8);
        FUNC_9(&VAR_10);

        VAR_8 = FUNC_4(VAR_7, &VAR_9);
        FUNC_10(VAR_8 == VAR_3, "got 0x%08x\n", VAR_8);
        if (VAR_9 == VAR_0)
            break;

        FUNC_3(VAR_7);
    }

    FUNC_6(VAR_6);
    return VAR_7;
}
