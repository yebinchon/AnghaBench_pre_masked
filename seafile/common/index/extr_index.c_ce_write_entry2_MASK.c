
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {void* sec; } ;
struct TYPE_5__ {void* sec; } ;
struct ondisk_cache_entry2 {char* name; int flags; int sha1; void* size; void* gid; void* uid; void* mode; void* ino; void* dev; TYPE_3__ mtime; TYPE_1__ ctime; } ;
struct TYPE_8__ {int sec; } ;
struct TYPE_6__ {int sec; } ;
struct cache_entry {int name; int ce_flags; int sha1; int ce_size; int ce_gid; int ce_uid; int ce_mode; int ce_ino; int ce_dev; TYPE_4__ ce_mtime; TYPE_2__ ce_ctime; } ;
typedef int WriteIndexInfo ;


 struct ondisk_cache_entry2* FUNC_0 (int,int) ;
 int FUNC_1 (struct cache_entry*) ;
 int FUNC_2 (int *,int,struct ondisk_cache_entry2*,int) ;
 int FUNC_3 (struct ondisk_cache_entry2*) ;
 int FUNC_4 (int ,int ) ;
 void* FUNC_5 (int ) ;
 void* FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (char*,int ,int ) ;
 int FUNC_9 (struct cache_entry*) ;

__attribute__((used)) static int FUNC_10(WriteIndexInfo *VAR_0, int VAR_1, struct cache_entry *VAR_2)
{
    int VAR_3 = FUNC_9(VAR_2);
    struct ondisk_cache_entry2 *VAR_4 = FUNC_0(1, VAR_3);
    char *VAR_5;
    int VAR_6;

    VAR_4->ctime.sec = FUNC_5(VAR_2->ce_ctime.sec);
    VAR_4->mtime.sec = FUNC_5(VAR_2->ce_mtime.sec);
    VAR_4->dev = FUNC_6(VAR_2->ce_dev);
    VAR_4->ino = FUNC_6(VAR_2->ce_ino);
    VAR_4->mode = FUNC_6(VAR_2->ce_mode);
    VAR_4->uid = FUNC_6(VAR_2->ce_uid);
    VAR_4->gid = FUNC_6(VAR_2->ce_gid);
    VAR_4->size = FUNC_5(VAR_2->ce_size);
    FUNC_4(VAR_4->sha1, VAR_2->sha1);
    VAR_4->flags = FUNC_7(VAR_2->ce_flags);
    VAR_5 = VAR_4->name;
    FUNC_8(VAR_5, VAR_2->name, FUNC_1(VAR_2));

    VAR_6 = FUNC_2(VAR_0, VAR_1, VAR_4, VAR_3);
    FUNC_3(VAR_4);
    return VAR_6;
}
