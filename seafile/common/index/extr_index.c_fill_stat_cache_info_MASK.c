
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ nsec; int sec; } ;
struct TYPE_5__ {scalar_t__ nsec; int sec; } ;
struct cache_entry {int ce_size; int ce_gid; int ce_uid; int ce_ino; int ce_dev; TYPE_2__ ce_mtime; TYPE_1__ ce_ctime; } ;
struct TYPE_7__ {int st_mode; int st_size; int st_gid; int st_uid; int st_ino; int st_dev; int st_mtime; int st_ctime; } ;
typedef TYPE_3__ SeafStat ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct cache_entry*) ;

void FUNC_2(struct cache_entry *VAR_0, SeafStat *VAR_1)
{
    VAR_0->ce_ctime.sec = VAR_1->st_ctime;
    VAR_0->ce_mtime.sec = VAR_1->st_mtime;
    VAR_0->ce_ctime.nsec = 0;
    VAR_0->ce_mtime.nsec = 0;
    VAR_0->ce_dev = VAR_1->st_dev;
    VAR_0->ce_ino = VAR_1->st_ino;
    VAR_0->ce_uid = VAR_1->st_uid;
    VAR_0->ce_gid = VAR_1->st_gid;
    VAR_0->ce_size = VAR_1->st_size;




    if (FUNC_0(VAR_1->st_mode))
        FUNC_1(VAR_0);
}
