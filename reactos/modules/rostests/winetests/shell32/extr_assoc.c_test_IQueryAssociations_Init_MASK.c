
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int IQueryAssociations ;
typedef scalar_t__ HRESULT ;
typedef scalar_t__ DWORD ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int *,int *,int ,int *,void*) ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_7 ;
 scalar_t__ FUNC_2 (int *,int ,int ,int *,int *,scalar_t__*) ;
 scalar_t__ FUNC_3 (int *,int ,int *,int *,int *) ;
 int FUNC_4 (int *) ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int * VAR_10 ;
 scalar_t__ FUNC_5 (int) ;
 int * VAR_11 ;
 int FUNC_6 (int,char*,scalar_t__) ;

__attribute__((used)) static void FUNC_7(void)
{
    IQueryAssociations *VAR_12;
    HRESULT VAR_13;
    DWORD VAR_14;

    VAR_13 = FUNC_0(&VAR_3, ((void*)0), VAR_2, &VAR_7, (void*)&VAR_12);
    FUNC_6(VAR_13 == VAR_9, "failed to create object, 0x%x\n", VAR_13);

    VAR_13 = FUNC_3(VAR_12, VAR_0, ((void*)0), ((void*)0), ((void*)0));
    FUNC_6(VAR_13 == VAR_6, "Init failed, 0x%08x\n", VAR_13);

    VAR_13 = FUNC_3(VAR_12, VAR_0, VAR_11, ((void*)0), ((void*)0));
    FUNC_6(VAR_13 == VAR_9, "Init failed, 0x%08x\n", VAR_13);

    VAR_13 = FUNC_3(VAR_12, VAR_0, VAR_10, ((void*)0), ((void*)0));
    FUNC_6(VAR_13 == VAR_9 || FUNC_5(VAR_13 == VAR_8) , "Init failed, 0x%08x\n", VAR_13);

    VAR_14 = 0;
    VAR_13 = FUNC_2(VAR_12, VAR_0, VAR_1, ((void*)0), ((void*)0), &VAR_14);
    FUNC_6(VAR_13 == FUNC_1(VAR_4) || FUNC_5(VAR_13 == VAR_5) , "got 0x%08x\n", VAR_13);

    FUNC_4(VAR_12);
}
