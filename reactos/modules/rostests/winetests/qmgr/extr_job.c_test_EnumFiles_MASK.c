
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ ULONG ;
typedef int IEnumBackgroundCopyFiles ;
typedef scalar_t__ HRESULT ;


 scalar_t__ FUNC_0 (int ,int ,int ) ;
 scalar_t__ FUNC_1 (int ,int **) ;
 scalar_t__ FUNC_2 (int *) ;
 scalar_t__ VAR_0 ;
 int FUNC_3 (int,char*,scalar_t__) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_4(void)
{
    HRESULT VAR_4;
    IEnumBackgroundCopyFiles *VAR_5;
    ULONG VAR_6;

    VAR_4 = FUNC_0(VAR_1, VAR_3,
                                      VAR_2);
    FUNC_3(VAR_4 == VAR_0, "got 0x%08x\n", VAR_4);

    VAR_4 = FUNC_1(VAR_1, &VAR_5);
    FUNC_3(VAR_4 == VAR_0, "EnumFiles failed: 0x%08x\n", VAR_4);

    VAR_6 = FUNC_2(VAR_5);
    FUNC_3(VAR_6 == 0, "Bad ref count on release: %u\n", VAR_6);
}
