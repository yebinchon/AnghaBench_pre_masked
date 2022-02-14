
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int DWORD ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_0 (int ,char*) ;
 int VAR_15 ;

void FUNC_1(int VAR_16, DWORD VAR_17) {
    if (VAR_16 > VAR_15) return;
    FUNC_0(VAR_14, "access mask: ");
    if (VAR_17 & VAR_5)
        FUNC_0(VAR_14, "READ ");
    if (VAR_17 & VAR_11)
        FUNC_0(VAR_14, "READ_ACL ");
    if (VAR_17 & VAR_4)
        FUNC_0(VAR_14, "READ_ATTR ");
    if (VAR_17 & VAR_6)
        FUNC_0(VAR_14, "READ_EA ");
    if (VAR_17 & VAR_9)
        FUNC_0(VAR_14, "WRITE ");
    if (VAR_17 & VAR_12)
        FUNC_0(VAR_14, "WRITE_ACL ");
    if (VAR_17 & VAR_8)
        FUNC_0(VAR_14, "WRITE_ATTR ");
    if (VAR_17 & VAR_10)
        FUNC_0(VAR_14, "WRITE_EA ");
    if (VAR_17 & VAR_0)
        FUNC_0(VAR_14, "APPEND ");
    if (VAR_17 & VAR_2)
        FUNC_0(VAR_14, "EXECUTE ");
    if (VAR_17 & VAR_3)
        FUNC_0(VAR_14, "LIST ");
    if (VAR_17 & VAR_7)
        FUNC_0(VAR_14, "TRAVERSE ");
    if (VAR_17 & VAR_13)
        FUNC_0(VAR_14, "SYNC ");
    if (VAR_17 & VAR_1)
        FUNC_0(VAR_14, "DELETE_CHILD");
    FUNC_0(VAR_14, "\n");
}
