
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef void* gint64 ;
struct TYPE_6__ {int modifier; int id; void* size; void* mtime; int mode; } ;
struct TYPE_5__ {scalar_t__ st_size; scalar_t__ st_mtime; int st_mode; } ;
typedef TYPE_1__ SeafStat ;
typedef TYPE_2__ ChangeSetDirent ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char const*) ;
 int FUNC_4 (unsigned char*,int ,int) ;

__attribute__((used)) static void
FUNC_5 (ChangeSetDirent *VAR_0,
             unsigned char *VAR_1,
             SeafStat *VAR_2,
             const char *VAR_3)
{
    if (!VAR_1 || !VAR_2 || !FUNC_0(VAR_2->st_mode))
        return;
    VAR_0->mode = FUNC_1(VAR_2->st_mode);
    VAR_0->mtime = (gint64)VAR_2->st_mtime;
    VAR_0->size = (gint64)VAR_2->st_size;
    FUNC_4 (VAR_1, VAR_0->id, 20);

    FUNC_2 (VAR_0->modifier);
    VAR_0->modifier = FUNC_3(VAR_3);
}
