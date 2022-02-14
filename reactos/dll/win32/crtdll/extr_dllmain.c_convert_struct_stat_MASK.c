
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct crtdll_stat {int st_ctime; int st_mtime; int st_atime; int st_size; int st_rdev; int st_gid; int st_uid; int st_nlink; int st_mode; int st_ino; int st_dev; } ;
struct _stat {int st_ctime; int st_mtime; int st_atime; int st_size; int st_rdev; int st_gid; int st_uid; int st_nlink; int st_mode; int st_ino; int st_dev; } ;



__attribute__((used)) static void FUNC_0( struct crtdll_stat *VAR_0, const struct _stat *VAR_1 )
{
    VAR_0->st_dev = VAR_1->st_dev;
    VAR_0->st_ino = VAR_1->st_ino;
    VAR_0->st_mode = VAR_1->st_mode;
    VAR_0->st_nlink = VAR_1->st_nlink;
    VAR_0->st_uid = VAR_1->st_uid;
    VAR_0->st_gid = VAR_1->st_gid;
    VAR_0->st_rdev = VAR_1->st_rdev;
    VAR_0->st_size = VAR_1->st_size;
    VAR_0->st_atime = VAR_1->st_atime;
    VAR_0->st_mtime = VAR_1->st_mtime;
    VAR_0->st_ctime = VAR_1->st_ctime;
}
