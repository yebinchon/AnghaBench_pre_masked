
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {int sec; } ;
struct TYPE_6__ {int sec; } ;
struct ondisk_cache_entry2 {char* name; int sha1; int size; int gid; int uid; int mode; int ino; int dev; TYPE_4__ mtime; TYPE_2__ ctime; int flags; } ;
struct TYPE_7__ {void* sec; } ;
struct TYPE_5__ {void* sec; } ;
struct cache_entry {unsigned int ce_flags; int name; int sha1; void* ce_size; void* ce_gid; void* ce_uid; void* ce_mode; void* ce_ino; void* ce_dev; TYPE_3__ ce_mtime; TYPE_1__ ce_ctime; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (size_t) ;
 struct cache_entry* FUNC_1 (int,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,char const*,size_t) ;
 void* FUNC_4 (int ) ;
 void* FUNC_5 (int ) ;
 unsigned int FUNC_6 (int ) ;
 size_t FUNC_7 (char const*) ;

__attribute__((used)) static int FUNC_8(struct ondisk_cache_entry2 *VAR_1, struct cache_entry **VAR_2)
{
    size_t VAR_3;
    const char *VAR_4;
    unsigned int VAR_5 = 0;
    struct cache_entry *VAR_6;

    VAR_5 = FUNC_6(VAR_1->flags);

    VAR_3 = VAR_5 & VAR_0;

    VAR_4 = VAR_1->name;

    if (VAR_3 == VAR_0)
        VAR_3 = FUNC_7(VAR_4);

    VAR_6 = FUNC_1(1, FUNC_0(VAR_3));

    VAR_6->ce_ctime.sec = FUNC_4(VAR_1->ctime.sec);
    VAR_6->ce_mtime.sec = FUNC_4(VAR_1->mtime.sec);
    VAR_6->ce_dev = FUNC_5(VAR_1->dev);
    VAR_6->ce_ino = FUNC_5(VAR_1->ino);
    VAR_6->ce_mode = FUNC_5(VAR_1->mode);
    VAR_6->ce_uid = FUNC_5(VAR_1->uid);
    VAR_6->ce_gid = FUNC_5(VAR_1->gid);
    VAR_6->ce_size = FUNC_4(VAR_1->size);

    VAR_6->ce_flags = VAR_5;

    FUNC_2(VAR_6->sha1, VAR_1->sha1);





    FUNC_3(VAR_6->name, VAR_4, VAR_3 + 1);

    *VAR_2 = VAR_6;

    return 0;
}
