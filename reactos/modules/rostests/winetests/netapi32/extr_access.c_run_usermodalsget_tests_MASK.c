
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int USER_MODALS_INFO_2 ;
typedef scalar_t__ NET_API_STATUS ;
typedef int LPBYTE ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int,char*,scalar_t__) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *,int,int *) ;

__attribute__((used)) static void FUNC_3(void)
{
    NET_API_STATUS VAR_1;
    USER_MODALS_INFO_2 * VAR_2 = ((void*)0);

    VAR_1 = FUNC_2(((void*)0), 2, (LPBYTE *)&VAR_2);
    FUNC_0(VAR_1 == VAR_0, "NetUserModalsGet failed, rc = %d\n", VAR_1);

    if (VAR_2)
        FUNC_1(VAR_2);
}
