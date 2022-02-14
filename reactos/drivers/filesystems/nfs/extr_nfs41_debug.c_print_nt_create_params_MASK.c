
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int FileAttributes; scalar_t__ Disposition; int CreateOptions; int ShareAccess; int DesiredAccess; } ;
typedef TYPE_1__ NT_CREATE_PARAMETERS ;


 int VAR_0 ;
 int FUNC_0 (char*,...) ;
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
 scalar_t__ VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 scalar_t__ VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 scalar_t__ VAR_29 ;
 int VAR_30 ;
 scalar_t__ VAR_31 ;
 scalar_t__ VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 int VAR_39 ;
 int VAR_40 ;
 int VAR_41 ;
 scalar_t__ VAR_42 ;
 int VAR_43 ;
 int VAR_44 ;
 int VAR_45 ;
 int VAR_46 ;
 int VAR_47 ;
 int VAR_48 ;
 int VAR_49 ;
 int VAR_50 ;
 int VAR_51 ;
 int VAR_52 ;
 int VAR_53 ;
 int VAR_54 ;

void FUNC_1(int VAR_55, NT_CREATE_PARAMETERS VAR_56)
{
    if (!VAR_55) return;
    if (VAR_56.FileAttributes)
        FUNC_0("File attributes %x: %s %s %s %s %s %s %s %s %s %s %s %s %s %s\n",
            VAR_56.FileAttributes,
            (VAR_56.FileAttributes & VAR_14)?"TEMPFILE ":"",
            (VAR_56.FileAttributes & VAR_10)?"READONLY ":"",
            (VAR_56.FileAttributes & VAR_7)?"HIDDEN ":"",
            (VAR_56.FileAttributes & VAR_13)?"SYSTEM ":"",
            (VAR_56.FileAttributes & VAR_2)?"ARCHIVE ":"",
            (VAR_56.FileAttributes & VAR_5)?"DIR ":"",
            (VAR_56.FileAttributes & VAR_4)?"DEVICE ":"",
            (VAR_56.FileAttributes & VAR_8)?"NORMAL ":"",
            (VAR_56.FileAttributes & VAR_12)?"SPARSE_FILE ":"",
            (VAR_56.FileAttributes & VAR_11)?"REPARSE_POINT ":"",
            (VAR_56.FileAttributes & VAR_3)?"COMPRESSED ":"",
            (VAR_56.FileAttributes & VAR_9)?"NOT INDEXED ":"",
            (VAR_56.FileAttributes & VAR_6)?"ENCRYPTED ":"",
            (VAR_56.FileAttributes & VAR_15)?"VIRTUAL":"");

    if (VAR_56.Disposition == VAR_42)
        FUNC_0("Create Dispositions: FILE_SUPERSEDE\n");
    if (VAR_56.Disposition == VAR_17)
        FUNC_0("Create Dispositions: FILE_CREATE\n");
    if (VAR_56.Disposition == VAR_26)
        FUNC_0("Create Dispositions: FILE_OPEN\n");
    if (VAR_56.Disposition == VAR_29)
        FUNC_0("Create Dispositions: FILE_OPEN_IF\n");
    if (VAR_56.Disposition == VAR_31)
        FUNC_0("Create Dispositions: FILE_OVERWRITE\n");
    if (VAR_56.Disposition == VAR_32)
        FUNC_0("Create Dispositions: FILE_OVERWRITE_IF\n");

    FUNC_0("Create Attributes: 0x%x %s %s %s %s %s %s %s %s %s %s %s %s %s %s "
        "%s %s\n", VAR_56.CreateOptions,
        (VAR_56.CreateOptions & VAR_20)?"DIRFILE":"",
        (VAR_56.CreateOptions & VAR_23)?"FILE":"",
        (VAR_56.CreateOptions & VAR_19)?"DELETE_ON_CLOSE":"",
        (VAR_56.CreateOptions & VAR_49)?"WRITE_THROUGH":"",
        (VAR_56.CreateOptions & VAR_38)?"SEQUENTIAL":"",
        (VAR_56.CreateOptions & VAR_33)?"RANDOM":"",
        (VAR_56.CreateOptions & VAR_25)?"NO_BUFFERING":"",
        (VAR_56.CreateOptions & VAR_43)?"SYNC_ALERT":"",
        (VAR_56.CreateOptions & VAR_44)?"SYNC_NOALERT":"",
        (VAR_56.CreateOptions & VAR_18)?"CREATE_TREE_CONN":"",
        (VAR_56.CreateOptions & VAR_16)?"OPLOCKED":"",
        (VAR_56.CreateOptions & VAR_24)?"NO_EA":"",
        (VAR_56.CreateOptions & VAR_30)?"OPEN_REPARSE":"",
        (VAR_56.CreateOptions & VAR_27)?"BY_ID":"",
        (VAR_56.CreateOptions & VAR_28)?"4_BACKUP":"",
        (VAR_56.CreateOptions & VAR_37)?"OPFILTER":"");

    FUNC_0("Share Access: %s %s %s\n",
        (VAR_56.ShareAccess & VAR_40)?"READ":"",
        (VAR_56.ShareAccess & VAR_41)?"WRITE":"",
        (VAR_56.ShareAccess & VAR_39)?"DELETE":"");

    FUNC_0("Desired Access: 0x%x %s %s %s %s %s %s %s %s %s %s %s\n",
        VAR_56.DesiredAccess,
        (VAR_56.DesiredAccess & VAR_35)?"READ":"",
        (VAR_56.DesiredAccess & VAR_51)?"READ_ACL":"",
        (VAR_56.DesiredAccess & VAR_34)?"GETATTR":"",
        (VAR_56.DesiredAccess & VAR_36)?"READ_EA":"",
        (VAR_56.DesiredAccess & VAR_47)?"WRITE":"",
        (VAR_56.DesiredAccess & VAR_46)?"SETATTR":"",
        (VAR_56.DesiredAccess & VAR_48)?"WRITE_EA":"",
        (VAR_56.DesiredAccess & VAR_1)?"APPEND":"",
        (VAR_56.DesiredAccess & VAR_21)?"EXEC":"",
        (VAR_56.DesiredAccess & VAR_22)?"LSDIR":"",
        (VAR_56.DesiredAccess & VAR_45)?"TRAVERSE":"",
        (VAR_56.DesiredAccess & VAR_22)?"LSDIR":"",
        (VAR_56.DesiredAccess & VAR_0)?"DELETE":"",
        (VAR_56.DesiredAccess & VAR_50)?"READ_CONTROL":"",
        (VAR_56.DesiredAccess & VAR_53)?"WRITE_DAC":"",
        (VAR_56.DesiredAccess & VAR_54)?"WRITE_OWNER":"",
        (VAR_56.DesiredAccess & VAR_52)?"SYNCHRONIZE":"");
}
