
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int IFileDialog ;
typedef scalar_t__ HRESULT ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *,int *,int ,int *,void**) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *,int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_3 (int,char*,scalar_t__) ;

__attribute__((used)) static void FUNC_4(void)
{
    IFileDialog *VAR_6;
    HRESULT VAR_7;

    VAR_7 = FUNC_0(&VAR_1, ((void*)0), VAR_0,
                          &VAR_2, (void**)&VAR_6);
    FUNC_3(VAR_7 == VAR_5, "got 0x%08x.\n", VAR_7);

if (0)
{

    VAR_7 = FUNC_2(VAR_6, ((void*)0));
}

    VAR_7 = FUNC_2(VAR_6, &VAR_3);
    FUNC_3(VAR_7 == VAR_5, "got 0x%08x\n", VAR_7);

    VAR_7 = FUNC_2(VAR_6, &VAR_4);
    FUNC_3(VAR_7 == VAR_5, "got 0x%08x\n", VAR_7);

    FUNC_1(VAR_6);
}
