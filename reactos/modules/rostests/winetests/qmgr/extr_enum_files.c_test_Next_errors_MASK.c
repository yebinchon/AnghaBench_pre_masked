
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int IBackgroundCopyFile ;
typedef scalar_t__ HRESULT ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ,int,int **,int *) ;
 int VAR_1 ;
 int FUNC_1 (int,char*,scalar_t__) ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_2(void)
{
    HRESULT VAR_3;
    IBackgroundCopyFile *VAR_4[VAR_1];


    VAR_3 = FUNC_0(VAR_2, 2, VAR_4, ((void*)0));
    FUNC_1(VAR_3 == VAR_0, "Invalid call to Next succeeded: %08x\n", VAR_3);
}
