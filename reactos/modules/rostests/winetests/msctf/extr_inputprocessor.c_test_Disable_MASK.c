
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int HRESULT ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *,int ,int *,int ) ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (char*) ;

__attribute__((used)) static void FUNC_4(void)
{
    HRESULT VAR_4;

    FUNC_3("Disabling\n");
    VAR_4 = FUNC_0(VAR_3,&VAR_0, VAR_2, &VAR_0, VAR_1);
    FUNC_2(FUNC_1(VAR_4),"Failed to disable text service\n");
}
