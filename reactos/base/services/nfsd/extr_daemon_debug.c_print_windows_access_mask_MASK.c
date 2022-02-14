
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ACCESS_MASK ;


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
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int FUNC_0 (int,char*,...) ;

void FUNC_1(int VAR_32, ACCESS_MASK VAR_33)
{
    if (!VAR_32) return;
    FUNC_0(1, "--> print_windows_access_mask: %x\n", VAR_33);
    if (VAR_33 & VAR_22)
        FUNC_0(1, "\tGENERIC_READ\n");
    if (VAR_33 & VAR_23)
        FUNC_0(1, "\tGENERIC_WRITE\n");
    if (VAR_33 & VAR_21)
        FUNC_0(1, "\tGENERIC_EXECUTE\n");
    if (VAR_33 & VAR_20)
        FUNC_0(1, "\tGENERIC_ALL\n");
    if (VAR_33 & VAR_24)
        FUNC_0(1, "\tMAXIMUM_ALLOWED\n");
    if (VAR_33 & VAR_0)
        FUNC_0(1, "\tACCESS_SYSTEM_SECURITY\n");
    if ((VAR_33 & VAR_26) == VAR_26)
        FUNC_0(1, "\tSPECIFIC_RIGHTS_ALL\n");
    if ((VAR_33 & VAR_27) == VAR_27)
        FUNC_0(1, "\tSTANDARD_RIGHTS_ALL\n");
    if ((VAR_33 & VAR_28) == VAR_28)
        FUNC_0(1, "\tSTANDARD_RIGHTS_REQUIRED\n");
    if (VAR_33 & VAR_29)
        FUNC_0(1, "\tSYNCHRONIZE\n");
    if (VAR_33 & VAR_31)
        FUNC_0(1, "\tWRITE_OWNER\n");
    if (VAR_33 & VAR_30)
        FUNC_0(1, "\tWRITE_DAC\n");
    if (VAR_33 & VAR_25)
        FUNC_0(1, "\tREAD_CONTROL\n");
    if (VAR_33 & VAR_1)
        FUNC_0(1, "\tDELETE\n");
    if (VAR_33 & VAR_14)
        FUNC_0(1, "\tFILE_READ_DATA\n");
    if (VAR_33 & VAR_12)
        FUNC_0(1, "\tFILE_LIST_DIRECTORY\n");
    if (VAR_33 & VAR_18)
        FUNC_0(1, "\tFILE_WRITE_DATA\n");
    if (VAR_33 & VAR_2)
        FUNC_0(1, "\tFILE_ADD_FILE\n");
    if (VAR_33 & VAR_5)
        FUNC_0(1, "\tFILE_APPEND_DATA\n");
    if (VAR_33 & VAR_3)
        FUNC_0(1, "\tFILE_ADD_SUBDIRECTORY\n");
    if (VAR_33 & VAR_6)
        FUNC_0(1, "\tFILE_CREATE_PIPE_INSTANCE\n");
    if (VAR_33 & VAR_15)
        FUNC_0(1, "\tFILE_READ_EA\n");
    if (VAR_33 & VAR_19)
        FUNC_0(1, "\tFILE_WRITE_EA\n");
    if (VAR_33 & VAR_8)
        FUNC_0(1, "\tFILE_EXECUTE\n");
    if (VAR_33 & VAR_16)
        FUNC_0(1, "\tFILE_TRAVERSE\n");
    if (VAR_33 & VAR_7)
        FUNC_0(1, "\tFILE_DELETE_CHILD\n");
    if (VAR_33 & VAR_13)
        FUNC_0(1, "\tFILE_READ_ATTRIBUTES\n");
    if (VAR_33 & VAR_17)
        FUNC_0(1, "\tFILE_WRITE_ATTRIBUTES\n");
    if ((VAR_33 & VAR_4) == VAR_4)
        FUNC_0(1, "\tFILE_ALL_ACCESS\n");
    if ((VAR_33 & VAR_10) == VAR_10)
        FUNC_0(1, "\tFILE_GENERIC_READ\n");
    if ((VAR_33 & VAR_11) == VAR_11)
        FUNC_0(1, "\tFILE_GENERIC_WRITE\n");
    if ((VAR_33 & VAR_9) == VAR_9)
        FUNC_0(1, "\tFILE_GENERIC_EXECUTE\n");
}
