
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ITaskScheduler ;
typedef int IEnumWorkItems ;
typedef scalar_t__ HRESULT ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *,int *,int ,int *,void**) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int *) ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (int *,int **) ;
 int FUNC_3 (int *) ;
 scalar_t__ VAR_4 ;
 int FUNC_4 (int,char*,scalar_t__) ;

__attribute__((used)) static void FUNC_5(void)
{
    ITaskScheduler *VAR_5;
    IEnumWorkItems *VAR_6;
    HRESULT VAR_7;

    VAR_7 = FUNC_0(&VAR_1, ((void*)0), VAR_0,
            &VAR_3, (void **)&VAR_5);
    FUNC_4(VAR_7 == VAR_4, "got 0x%08x\n", VAR_7);

if (0) {
    VAR_7 = FUNC_2(VAR_5, ((void*)0));
    FUNC_4(VAR_7 == VAR_2, "got 0x%08x\n", VAR_7);
}

    VAR_7 = FUNC_2(VAR_5, &VAR_6);
    FUNC_4(VAR_7 == VAR_4, "got 0x%08x\n", VAR_7);
    FUNC_1(VAR_6);

    FUNC_3(VAR_5);
}
