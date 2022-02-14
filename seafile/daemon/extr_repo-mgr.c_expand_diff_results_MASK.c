
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


struct TYPE_18__ {int fs_mgr; } ;
struct TYPE_17__ {scalar_t__ status; int name; int sha1; } ;
struct TYPE_16__ {struct TYPE_16__* next; TYPE_2__* data; } ;
typedef TYPE_1__ GList ;
typedef int GDestroyNotify ;
typedef TYPE_2__ DiffEntry ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;
 int VAR_1 ;
 TYPE_1__* FUNC_1 (TYPE_1__*,TYPE_1__*) ;
 TYPE_1__* FUNC_2 (TYPE_1__*,TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,int ) ;
 TYPE_1__* FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (int ,char*,int) ;
 TYPE_4__* VAR_2 ;
 scalar_t__ FUNC_6 (int ,char const*,int,char const*,int ,int ,TYPE_1__**) ;

__attribute__((used)) static int
FUNC_7 (const char *VAR_3, int VAR_4,
                     const char *VAR_5, const char *VAR_6,
                     GList **VAR_7)
{
    GList *VAR_8, *VAR_9;
    DiffEntry *VAR_10;
    char VAR_11[41];
    GList *VAR_12 = ((void*)0);

    VAR_8 = *VAR_7;
    while (VAR_8) {
        VAR_10 = VAR_8->data;

        VAR_9 = VAR_8->next;

        if (VAR_10->status == VAR_0) {
            *VAR_7 = FUNC_2 (*VAR_7, VAR_8);

            FUNC_5 (VAR_10->sha1, VAR_11, 20);
            if (FUNC_6 (VAR_2->fs_mgr,
                                               VAR_3, VAR_4,
                                               VAR_5,
                                               VAR_10->name,
                                               VAR_1,
                                               &VAR_12) < 0) {
                FUNC_0 (VAR_10);
                goto error;
            }
            FUNC_0 (VAR_10);
        }

        VAR_8 = VAR_9;
    }

    VAR_12 = FUNC_4 (VAR_12);
    *VAR_7 = FUNC_1 (*VAR_7, VAR_12);

    return 0;

error:
    FUNC_3 (VAR_12, (GDestroyNotify)FUNC_0);
    return -1;
}
