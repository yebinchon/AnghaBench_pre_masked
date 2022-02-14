
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
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
 int FUNC_0 (int,char*,...) ;

void FUNC_1(int VAR_17, int VAR_18)
{
    if (!VAR_17) return;
    FUNC_0(1, "--> print_nfs_access_mask: %x\n", VAR_18);
    if (VAR_18 & VAR_9)
        FUNC_0(1, "\tACE4_READ_DATA\n");
    if (VAR_18 & VAR_6)
        FUNC_0(1, "\tACE4_LIST_DIRECTORY\n");
    if (VAR_18 & VAR_14)
        FUNC_0(1, "\tACE4_WRITE_DATA\n");
    if (VAR_18 & VAR_0)
        FUNC_0(1, "\tACE4_ADD_FILE\n");
    if (VAR_18 & VAR_2)
        FUNC_0(1, "\tACE4_APPEND_DATA\n");
    if (VAR_18 & VAR_1)
        FUNC_0(1, "\tACE4_ADD_SUBDIRECTORY\n");
    if (VAR_18 & VAR_10)
        FUNC_0(1, "\tACE4_READ_NAMED_ATTRS\n");
    if (VAR_18 & VAR_15)
        FUNC_0(1, "\tACE4_WRITE_NAMED_ATTRS\n");
    if (VAR_18 & VAR_5)
        FUNC_0(1, "\tACE4_EXECUTE\n");
    if (VAR_18 & VAR_4)
        FUNC_0(1, "\tACE4_DELETE_CHILD\n");
    if (VAR_18 & VAR_8)
        FUNC_0(1, "\tACE4_READ_ATTRIBUTES\n");
    if (VAR_18 & VAR_13)
        FUNC_0(1, "\tACE4_WRITE_ATTRIBUTES\n");
    if (VAR_18 & VAR_3)
        FUNC_0(1, "\tACE4_DELETE\n");
    if (VAR_18 & VAR_7)
        FUNC_0(1, "\tACE4_READ_ACL\n");
    if (VAR_18 & VAR_12)
        FUNC_0(1, "\tACE4_WRITE_ACL\n");
    if (VAR_18 & VAR_16)
        FUNC_0(1, "\tACE4_WRITE_OWNER\n");
    if (VAR_18 & VAR_11)
        FUNC_0(1, "\tACE4_SYNCHRONIZE\n");
}
