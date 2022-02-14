
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ LONG ;
typedef int IFileDialog ;
typedef scalar_t__ HRESULT ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int *,int *,int ,int *,void**) ;
 scalar_t__ FUNC_1 (int *) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (int,char*,scalar_t__) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (char*) ;

__attribute__((used)) static void FUNC_5(void)
{
    IFileDialog *VAR_5;
    HRESULT VAR_6;
    LONG VAR_7;

    FUNC_4("Testing FileOpenDialog (advise)\n");
    VAR_6 = FUNC_0(&VAR_1, ((void*)0), VAR_0,
                          &VAR_3, (void**)&VAR_5);
    FUNC_2(VAR_6 == VAR_4, "got 0x%08x.\n", VAR_6);
    FUNC_3(VAR_5);
    VAR_7 = FUNC_1(VAR_5);
    FUNC_2(!VAR_7, "Got refcount %d, should have been released.\n", VAR_7);

    FUNC_4("Testing FileSaveDialog (advise)\n");
    VAR_6 = FUNC_0(&VAR_2, ((void*)0), VAR_0,
                          &VAR_3, (void**)&VAR_5);
    FUNC_2(VAR_6 == VAR_4, "got 0x%08x.\n", VAR_6);
    FUNC_3(VAR_5);
    VAR_7 = FUNC_1(VAR_5);
    FUNC_2(!VAR_7, "Got refcount %d, should have been released.\n", VAR_7);
}
