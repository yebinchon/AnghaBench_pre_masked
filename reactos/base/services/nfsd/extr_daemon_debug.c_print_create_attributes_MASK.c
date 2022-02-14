
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
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_0 (int ,char*) ;
 int VAR_17 ;

void FUNC_1(int VAR_18, DWORD VAR_19) {
    if (VAR_18 > VAR_17) return;
    FUNC_0(VAR_16, "create attributes: ");
    if (VAR_19 & VAR_3)
        FUNC_0(VAR_16, "DIRECTORY_FILE ");
    if (VAR_19 & VAR_4)
        FUNC_0(VAR_16, "NON_DIRECTORY_FILE ");
    if (VAR_19 & VAR_15)
        FUNC_0(VAR_16, "WRITE_THROUGH ");
    if (VAR_19 & VAR_12)
        FUNC_0(VAR_16, "SEQUENTIAL_ONLY ");
    if (VAR_19 & VAR_10)
        FUNC_0(VAR_16, "RANDOM_ACCESS ");
    if (VAR_19 & VAR_6)
        FUNC_0(VAR_16, "NO_INTERMEDIATE_BUFFERING ");
    if (VAR_19 & VAR_13)
        FUNC_0(VAR_16, "SYNCHRONOUS_IO_ALERT ");
    if (VAR_19 & VAR_14)
        FUNC_0(VAR_16, "SYNCHRONOUS_IO_NONALERT ");
    if (VAR_19 & VAR_1)
        FUNC_0(VAR_16, "CREATE_TREE_CONNECTION ");
    if (VAR_19 & VAR_0)
        FUNC_0(VAR_16, "COMPLETE_IF_OPLOCKED ");
    if (VAR_19 & VAR_5)
        FUNC_0(VAR_16, "NO_EA_KNOWLEDGE ");
    if (VAR_19 & VAR_9)
        FUNC_0(VAR_16, "OPEN_REPARSE_POINT ");
    if (VAR_19 & VAR_2)
        FUNC_0(VAR_16, "DELETE_ON_CLOSE ");
    if (VAR_19 & VAR_7)
        FUNC_0(VAR_16, "OPEN_BY_FILE_ID ");
    if (VAR_19 & VAR_8)
        FUNC_0(VAR_16, "OPEN_FOR_BACKUP_INTENT ");
    if (VAR_19 & VAR_11)
        FUNC_0(VAR_16, "RESERVE_OPFILTER");
    FUNC_0(VAR_16, "\n");
}
