
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct FSEventStreamContext {int * member_4; int * member_3; int * member_2; TYPE_3__* member_1; int member_0; } ;
typedef TYPE_1__* gpointer ;
struct TYPE_12__ {TYPE_2__* priv; } ;
struct TYPE_11__ {int hash_lock; int info_hash; int handle_hash; } ;
struct TYPE_10__ {int status; } ;
typedef TYPE_2__ SeafWTMonitorPriv ;
typedef TYPE_3__ SeafWTMonitor ;
typedef TYPE_1__ RepoWatchInfo ;
typedef scalar_t__ FSEventStreamRef ;
typedef int CFStringRef ;
typedef int CFArrayRef ;


 int FUNC_0 (int *,void const**,int,int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 () ;
 int FUNC_3 (int ,char*,int ) ;
 scalar_t__ FUNC_4 (int ,int ,struct FSEventStreamContext*,int ,int ,double,int ) ;
 int FUNC_5 (scalar_t__,int ,int ) ;
 int FUNC_6 (scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_7 (int ,int ,char*,int *) ;
 TYPE_1__* FUNC_8 (char const*,char const*) ;
 int FUNC_9 (char*) ;
 int FUNC_10 (int ,TYPE_1__*,TYPE_1__*) ;
 TYPE_1__* FUNC_11 (char const*) ;
 char* FUNC_12 (char const*,int,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (char*,char const*,char const*) ;
 int FUNC_16 (char*) ;
 int VAR_7 ;

__attribute__((used)) static FSEventStreamRef
FUNC_17 (SeafWTMonitor *VAR_8, const char* VAR_9, const char* VAR_10)
{
    SeafWTMonitorPriv *VAR_11 = VAR_8->priv;
    RepoWatchInfo *VAR_12;
    double VAR_13 = 0.25;

    char *VAR_14 = FUNC_12 (VAR_10, -1, VAR_0);

    CFStringRef VAR_15[1];
    VAR_15[0] = FUNC_3 (VAR_2,
                                            VAR_14, VAR_4);
    FUNC_9 (VAR_14);
    CFArrayRef VAR_16 = FUNC_0(((void*)0), (const void **)VAR_15, 1, ((void*)0));
    FSEventStreamRef VAR_17;




    struct FSEventStreamContext VAR_18 = {0, VAR_8, ((void*)0), ((void*)0), ((void*)0)};
    VAR_17 = FUNC_4(VAR_2,
                                 VAR_7,
                                 &VAR_18,
                                 VAR_16,
                                 VAR_6,
                                 VAR_13,
                                 VAR_5
                                 );

    FUNC_1 (VAR_15[0]);
    FUNC_1 (VAR_16);

    if (!VAR_17) {
        FUNC_16 ("[wt] Failed to create event stream.\n");
        return VAR_17;
    }

    FUNC_5(VAR_17, FUNC_2(), VAR_3);
    FUNC_6 (VAR_17);

    FUNC_15 ("[wt mon] Add repo %s watch success: %s.\n", VAR_9, VAR_10);

    FUNC_13 (&VAR_11->hash_lock);
    FUNC_10 (VAR_11->handle_hash,
                         FUNC_11(VAR_9), (gpointer)(long)VAR_17);

    VAR_12 = FUNC_8 (VAR_9, VAR_10);
    FUNC_10 (VAR_11->info_hash, (gpointer)(long)VAR_17, VAR_12);
    FUNC_14 (&VAR_11->hash_lock);


    FUNC_7 (VAR_12->status, VAR_1, "", ((void*)0));
    return VAR_17;
}
