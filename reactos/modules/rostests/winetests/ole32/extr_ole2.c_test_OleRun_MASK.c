
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int IUnknown ;
typedef int HRESULT ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (int,char*,int) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_2(void)
{
    HRESULT VAR_3;


    VAR_3 = FUNC_0(&VAR_2);
    FUNC_1(VAR_3 == VAR_0, "OleRun failed 0x%08x\n", VAR_3);

    VAR_3 = FUNC_0((IUnknown*)&VAR_1);
    FUNC_1(VAR_3 == 0xdeadc0de, "got 0x%08x\n", VAR_3);
}
