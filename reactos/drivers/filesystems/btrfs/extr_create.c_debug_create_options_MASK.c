
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ ULONG ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;
 scalar_t__ VAR_19 ;
 scalar_t__ VAR_20 ;
 scalar_t__ VAR_21 ;
 int FUNC_0 (char*,...) ;

__attribute__((used)) static __inline void FUNC_1(ULONG VAR_22) {
    if (VAR_22 != 0) {
        ULONG VAR_23 = VAR_22;

        FUNC_0("requested options:\n");

        if (VAR_23 & VAR_3) {
            FUNC_0("    FILE_DIRECTORY_FILE\n");
            VAR_23 &= ~VAR_3;
        }

        if (VAR_23 & VAR_21) {
            FUNC_0("    FILE_WRITE_THROUGH\n");
            VAR_23 &= ~VAR_21;
        }

        if (VAR_23 & VAR_18) {
            FUNC_0("    FILE_SEQUENTIAL_ONLY\n");
            VAR_23 &= ~VAR_18;
        }

        if (VAR_23 & VAR_8) {
            FUNC_0("    FILE_NO_INTERMEDIATE_BUFFERING\n");
            VAR_23 &= ~VAR_8;
        }

        if (VAR_23 & VAR_19) {
            FUNC_0("    FILE_SYNCHRONOUS_IO_ALERT\n");
            VAR_23 &= ~VAR_19;
        }

        if (VAR_23 & VAR_20) {
            FUNC_0("    FILE_SYNCHRONOUS_IO_NONALERT\n");
            VAR_23 &= ~VAR_20;
        }

        if (VAR_23 & VAR_5) {
            FUNC_0("    FILE_NON_DIRECTORY_FILE\n");
            VAR_23 &= ~VAR_5;
        }

        if (VAR_23 & VAR_1) {
            FUNC_0("    FILE_CREATE_TREE_CONNECTION\n");
            VAR_23 &= ~VAR_1;
        }

        if (VAR_23 & VAR_0) {
            FUNC_0("    FILE_COMPLETE_IF_OPLOCKED\n");
            VAR_23 &= ~VAR_0;
        }

        if (VAR_23 & VAR_7) {
            FUNC_0("    FILE_NO_EA_KNOWLEDGE\n");
            VAR_23 &= ~VAR_7;
        }

        if (VAR_23 & VAR_13) {
            FUNC_0("    FILE_OPEN_REMOTE_INSTANCE\n");
            VAR_23 &= ~VAR_13;
        }

        if (VAR_23 & VAR_16) {
            FUNC_0("    FILE_RANDOM_ACCESS\n");
            VAR_23 &= ~VAR_16;
        }

        if (VAR_23 & VAR_2) {
            FUNC_0("    FILE_DELETE_ON_CLOSE\n");
            VAR_23 &= ~VAR_2;
        }

        if (VAR_23 & VAR_9) {
            FUNC_0("    FILE_OPEN_BY_FILE_ID\n");
            VAR_23 &= ~VAR_9;
        }

        if (VAR_23 & VAR_10) {
            FUNC_0("    FILE_OPEN_FOR_BACKUP_INTENT\n");
            VAR_23 &= ~VAR_10;
        }

        if (VAR_23 & VAR_6) {
            FUNC_0("    FILE_NO_COMPRESSION\n");
            VAR_23 &= ~VAR_6;
        }


        if (VAR_23 & VAR_15) {
            FUNC_0("    FILE_OPEN_REQUIRING_OPLOCK\n");
            VAR_23 &= ~VAR_15;
        }

        if (VAR_23 & VAR_4) {
            FUNC_0("    FILE_DISALLOW_EXCLUSIVE\n");
            VAR_23 &= ~VAR_4;
        }


        if (VAR_23 & VAR_17) {
            FUNC_0("    FILE_RESERVE_OPFILTER\n");
            VAR_23 &= ~VAR_17;
        }

        if (VAR_23 & VAR_14) {
            FUNC_0("    FILE_OPEN_REPARSE_POINT\n");
            VAR_23 &= ~VAR_14;
        }

        if (VAR_23 & VAR_12) {
            FUNC_0("    FILE_OPEN_NO_RECALL\n");
            VAR_23 &= ~VAR_12;
        }

        if (VAR_23 & VAR_11) {
            FUNC_0("    FILE_OPEN_FOR_FREE_SPACE_QUERY\n");
            VAR_23 &= ~VAR_11;
        }

        if (VAR_23)
            FUNC_0("    unknown options: %x\n", VAR_23);
    } else {
        FUNC_0("requested options: (none)\n");
    }
}
