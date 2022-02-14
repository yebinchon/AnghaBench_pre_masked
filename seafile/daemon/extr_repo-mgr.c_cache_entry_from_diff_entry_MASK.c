
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int sec; } ;
struct cache_entry {int ce_flags; int ce_mode; TYPE_1__ ce_mtime; int ce_size; int modifier; int sha1; int name; } ;
struct TYPE_5__ {int mode; int mtime; int size; int modifier; int sha1; int name; } ;
typedef TYPE_2__ DiffEntry ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 struct cache_entry* FUNC_2 (int,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ,int) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static struct cache_entry *
FUNC_7 (DiffEntry *VAR_1)
{
    int VAR_2, VAR_3;
    struct cache_entry *VAR_4;

    VAR_3 = FUNC_6(VAR_1->name);
    VAR_2 = FUNC_1(VAR_3);
    VAR_4 = FUNC_2(1, VAR_2);
    FUNC_5(VAR_4->name, VAR_1->name, VAR_3);
    VAR_4->ce_flags = VAR_3;

    FUNC_5 (VAR_4->sha1, VAR_1->sha1, 20);
    VAR_4->modifier = FUNC_4(VAR_1->modifier);
    VAR_4->ce_size = VAR_1->size;
    VAR_4->ce_mtime.sec = VAR_1->mtime;

    if (FUNC_0(VAR_1->mode))
        VAR_4->ce_mode = FUNC_3 (VAR_1->mode);
    else
        VAR_4->ce_mode = VAR_0;

    return VAR_4;
}
