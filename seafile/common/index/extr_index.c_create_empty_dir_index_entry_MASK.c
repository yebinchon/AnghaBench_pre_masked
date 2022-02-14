
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int sec; } ;
struct TYPE_5__ {int sec; } ;
struct cache_entry {int ce_flags; int ce_mode; TYPE_2__ ce_ctime; TYPE_1__ ce_mtime; int name; } ;
struct TYPE_7__ {int st_ctime; int st_mtime; } ;
typedef TYPE_3__ SeafStat ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 struct cache_entry* FUNC_1 (int,int) ;
 int FUNC_2 (int ,char const*,int) ;
 int FUNC_3 (char const*) ;

__attribute__((used)) static struct cache_entry *
FUNC_4 (const char *VAR_1, SeafStat *VAR_2)
{
    int VAR_3, VAR_4;
    struct cache_entry *VAR_5;

    VAR_3 = FUNC_3(VAR_1);
    VAR_4 = FUNC_0(VAR_3);
    VAR_5 = FUNC_1(1, VAR_4);
    FUNC_2(VAR_5->name, VAR_1, VAR_3);
    VAR_5->ce_flags = VAR_3;

    VAR_5->ce_mtime.sec = VAR_2->st_mtime;
    VAR_5->ce_ctime.sec = VAR_2->st_ctime;

    VAR_5->ce_mode = VAR_0;


    return VAR_5;
}
