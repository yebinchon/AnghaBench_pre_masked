
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int HRESULT ;
typedef scalar_t__ BOOL ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,int *,int ,int *,scalar_t__) ;
 int FUNC_1 (int ,int *,int ,int *,scalar_t__*) ;
 int FUNC_2 (int ) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (int,char*) ;

__attribute__((used)) static void FUNC_4(void)
{
    HRESULT VAR_5;
    BOOL VAR_6 = VAR_1;

    VAR_5 = FUNC_0(VAR_4,&VAR_0, VAR_3, &VAR_0, VAR_2);
    FUNC_3(FUNC_2(VAR_5),"Failed to enable text service\n");
    VAR_5 = FUNC_1(VAR_4,&VAR_0, VAR_3, &VAR_0, &VAR_6);
    FUNC_3(FUNC_2(VAR_5),"Failed to get enabled state\n");
    FUNC_3(VAR_6 == VAR_2,"enabled state incorrect\n");
}
