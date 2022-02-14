
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int HKEY ;
typedef scalar_t__ DWORD ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ,char*,int *) ;
 scalar_t__ FUNC_2 (int ,int *,int ,char*,int) ;

__attribute__((used)) static BOOL FUNC_3(void)
{
 HKEY VAR_2 = 0, VAR_3 = 0;
        DWORD VAR_4;

        VAR_4 = FUNC_1(VAR_0,"CLSID\\{deadcafe-beed-bead-dead-cafebeaddead}", &VAR_2);
        if (!VAR_4) VAR_4 = FUNC_2(VAR_2,((void*)0),VAR_1,"ComCat Test key",16);
 if (!VAR_4) VAR_4 = FUNC_1(VAR_2,
                                      "Implemented Categories\\{deadcafe-0000-0000-0000-000000000000}",
                                      &VAR_3);
 FUNC_0(VAR_2);
 FUNC_0(VAR_3);
        return !VAR_4;
}
