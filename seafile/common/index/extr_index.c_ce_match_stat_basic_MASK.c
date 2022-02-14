
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ sec; } ;
struct cache_entry {int ce_flags; int ce_mode; scalar_t__ ce_size; unsigned int ce_uid; unsigned int ce_gid; unsigned int ce_ino; int sha1; TYPE_1__ ce_mtime; int name; } ;
struct TYPE_5__ {int st_mode; scalar_t__ st_mtime; scalar_t__ st_size; scalar_t__ st_ino; scalar_t__ st_gid; scalar_t__ st_uid; } ;
typedef TYPE_2__ SeafStat ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;


 int VAR_6 ;

 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int VAR_7 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (char*,int) ;

__attribute__((used)) static int FUNC_6(struct cache_entry *VAR_8, SeafStat *VAR_9)
{
    unsigned int VAR_10 = 0;

    if (VAR_8->ce_flags & VAR_0)
        return VAR_3 | VAR_1 | VAR_7;

    switch (VAR_8->ce_mode & VAR_6) {
    case 128:
        VAR_10 |= !FUNC_2(VAR_9->st_mode) ? VAR_7 : 0;




        if ((0100 & (VAR_8->ce_mode ^ VAR_9->st_mode)))
            VAR_10 |= VAR_3;

        break;
    case 129:
        if (!FUNC_1(VAR_9->st_mode))
            VAR_10 |= VAR_7;
        break;
    case 130:

        if (!FUNC_0(VAR_9->st_mode))
            VAR_10 |= VAR_7;


        return VAR_10;
    default:
        FUNC_5("internal error: ce_mode is %o\n", VAR_8->ce_mode);
        return -1;
    }
    if (!FUNC_3 (VAR_8->name) && VAR_8->ce_mtime.sec != VAR_9->st_mtime)
        VAR_10 |= VAR_4;



    if (VAR_8->ce_size != VAR_9->st_size)
        VAR_10 |= VAR_1;
    return VAR_10;
}
