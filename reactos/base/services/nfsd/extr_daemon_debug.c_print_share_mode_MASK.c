
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int DWORD ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*) ;
 int VAR_4 ;

void FUNC_1(int VAR_5, DWORD VAR_6)
{
    if (VAR_5 > VAR_4) return;
    FUNC_0(VAR_3, "share mode: ");
    if (VAR_6 & VAR_1)
        FUNC_0(VAR_3, "READ ");
    if (VAR_6 & VAR_2)
        FUNC_0(VAR_3, "WRITE ");
    if (VAR_6 & VAR_0)
        FUNC_0(VAR_3, "DELETE");
    FUNC_0(VAR_3, "\n");
}
