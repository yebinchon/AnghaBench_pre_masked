
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef char const* gpointer ;
struct TYPE_5__ {TYPE_1__* priv; } ;
struct TYPE_4__ {int hash_lock; int info_hash; int handle_hash; } ;
typedef TYPE_1__ SeafWTMonitorPriv ;
typedef TYPE_2__ SeafWTMonitor ;
typedef scalar_t__ FSEventStreamRef ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int ,char const*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int
FUNC_6 (SeafWTMonitor *VAR_0, const char *VAR_1, gpointer VAR_2)
{
    SeafWTMonitorPriv *VAR_3 = VAR_0->priv;
    FSEventStreamRef VAR_4 = (FSEventStreamRef)VAR_2;
    FUNC_2 (VAR_4);
    FUNC_0 (VAR_4);
    FUNC_1 (VAR_4);

    FUNC_4 (&VAR_3->hash_lock);
    FUNC_3 (VAR_3->handle_hash, VAR_1);
    FUNC_3 (VAR_3->info_hash, (gpointer)(long)VAR_4);
    FUNC_5 (&VAR_3->hash_lock);
    return 0;
}
