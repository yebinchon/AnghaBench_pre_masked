
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
struct TYPE_9__ {int generation; int st_nlink; int st_mode; int st_atime; int st_mtime; int st_ctime; int st_blocks; } ;
struct TYPE_8__ {int HighPart; int LowPart; } ;
typedef TYPE_1__ LARGE_INTEGER ;
typedef TYPE_2__ INODE_ITEM ;
typedef TYPE_3__ FILETIME ;


 int FUNC_0 (TYPE_3__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,int ,int ,int ,char*) ;
 int FUNC_2 (int *,int ,int ,int ,TYPE_2__*,int) ;
 int FUNC_3 (TYPE_2__*,int ,int) ;
 int FUNC_4 (TYPE_1__,int *) ;

__attribute__((used)) static void FUNC_5(btrfs_root* VAR_2, uint32_t VAR_3) {
    INODE_ITEM VAR_4;
    FILETIME VAR_5;
    LARGE_INTEGER VAR_6;

    FUNC_3(&VAR_4, 0, sizeof(INODE_ITEM));

    VAR_4.generation = 1;
    VAR_4.st_blocks = VAR_3;
    VAR_4.st_nlink = 1;
    VAR_4.st_mode = 040755;

    FUNC_0(&VAR_5);
    VAR_6.LowPart = VAR_5.dwLowDateTime;
    VAR_6.HighPart = VAR_5.dwHighDateTime;

    FUNC_4(VAR_6, &VAR_4.st_atime);
    VAR_4.st_ctime = VAR_4.st_mtime = VAR_4.st_atime;

    FUNC_2(VAR_2, VAR_0, VAR_1, 0, &VAR_4, sizeof(INODE_ITEM));

    FUNC_1(VAR_2, VAR_0, VAR_0, 0, "..");
}
