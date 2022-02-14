
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef void* gpointer ;
struct TYPE_4__ {int filelock_mgr; } ;
struct TYPE_3__ {int locked_by_me; } ;
typedef TYPE_1__ LockInfo ;


 TYPE_2__* VAR_0 ;
 int FUNC_0 (int ,char*,char*) ;

__attribute__((used)) static void
FUNC_1 (gpointer VAR_1, gpointer VAR_2, gpointer VAR_3)
{
    char *VAR_4 = VAR_3;
    char *VAR_5 = VAR_1;
    LockInfo *VAR_6 = VAR_2;

    if (!VAR_6->locked_by_me) {
        FUNC_0 (VAR_0->filelock_mgr,
                                            VAR_4,
                                            VAR_5);
    }
}
