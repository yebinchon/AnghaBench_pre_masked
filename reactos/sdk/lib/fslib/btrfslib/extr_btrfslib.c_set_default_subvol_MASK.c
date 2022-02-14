
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint32_t ;
typedef int btrfs_root ;
struct TYPE_10__ {int dwHighDateTime; int dwLowDateTime; } ;
struct TYPE_9__ {int generation; int st_blocks; int st_nlink; int st_mode; int st_atime; int otime; int st_mtime; int st_ctime; } ;
struct TYPE_8__ {int HighPart; int LowPart; } ;
typedef TYPE_1__ LARGE_INTEGER ;
typedef TYPE_2__ INODE_ITEM ;
typedef TYPE_3__ FILETIME ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_3__*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int *,int ,int const,int ,int ,int,int ,int ,char const*) ;
 int FUNC_2 (int *,int ,int ,int ,char const*) ;
 int FUNC_3 (int *,int ,int ,int ,TYPE_2__*,int) ;
 int FUNC_4 (TYPE_2__*,int ,int) ;
 int FUNC_5 (TYPE_1__,int *) ;

__attribute__((used)) static void FUNC_6(btrfs_root* VAR_5, uint32_t VAR_6) {
    INODE_ITEM VAR_7;
    FILETIME VAR_8;
    LARGE_INTEGER VAR_9;

    static const char VAR_10[] = "default";
    static const uint32_t VAR_11 = 0x8dbfc2d2;

    FUNC_2(VAR_5, VAR_0, VAR_1, 0, VAR_10);

    FUNC_4(&VAR_7, 0, sizeof(INODE_ITEM));

    VAR_7.generation = 1;
    VAR_7.st_blocks = VAR_6;
    VAR_7.st_nlink = 1;
    VAR_7.st_mode = 040755;

    FUNC_0(&VAR_8);
    VAR_9.LowPart = VAR_8.dwLowDateTime;
    VAR_9.HighPart = VAR_8.dwHighDateTime;

    FUNC_5(VAR_9, &VAR_7.st_atime);
    VAR_7.st_ctime = VAR_7.st_mtime = VAR_7.otime = VAR_7.st_atime;

    FUNC_3(VAR_5, VAR_1, VAR_3, 0, &VAR_7, sizeof(INODE_ITEM));

    FUNC_2(VAR_5, VAR_1, VAR_1, 0, "..");

    FUNC_1(VAR_5, VAR_1, VAR_11, VAR_0, VAR_4,
                 0xffffffffffffffff, 0, VAR_2, VAR_10);
}
