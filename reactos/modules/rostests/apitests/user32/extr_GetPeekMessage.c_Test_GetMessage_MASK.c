
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int MSG ;
typedef int HWND ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 () ;
 int FUNC_1 (int *,int ,int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int,char*,...) ;

void FUNC_4(HWND VAR_2)
{
    MSG VAR_3;

    FUNC_2(VAR_0);

    FUNC_3(FUNC_1(&VAR_3, VAR_2, 0, 0) == -1, "\n");
    FUNC_3(FUNC_0() == VAR_1, "GetLastError() = %lu\n", FUNC_0());
}
