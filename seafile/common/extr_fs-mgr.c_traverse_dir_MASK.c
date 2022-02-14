
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ gboolean ;
typedef int (* TraverseFSTreeCallback ) (int *,char const*,int,char const*,int ,void*,scalar_t__*) ;
struct TYPE_8__ {scalar_t__ data; struct TYPE_8__* next; } ;
struct TYPE_7__ {TYPE_3__* entries; } ;
struct TYPE_6__ {char* id; int mode; } ;
typedef int SeafFSManager ;
typedef TYPE_1__ SeafDirent ;
typedef TYPE_2__ SeafDir ;
typedef TYPE_3__ GList ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (TYPE_2__*) ;
 TYPE_2__* FUNC_3 (int *,char const*,int,char const*) ;
 int FUNC_4 (char*,char const*) ;
 scalar_t__ FUNC_5 (int *,char const*,int,char*,int (*) (int *,char const*,int,char const*,int ,void*,scalar_t__*),void*,scalar_t__) ;

__attribute__((used)) static int
FUNC_6 (SeafFSManager *VAR_2,
              const char *VAR_3,
              int VAR_4,
              const char *VAR_5,
              TraverseFSTreeCallback VAR_6,
              void *VAR_7,
              gboolean VAR_8)
{
    SeafDir *VAR_9;
    GList *VAR_10;
    SeafDirent *VAR_11;
    gboolean VAR_12 = VAR_0;

    if (!VAR_6 (VAR_2, VAR_3, VAR_4,
                   VAR_5, VAR_1, VAR_7, &VAR_12) &&
        !VAR_8)
        return -1;

    if (VAR_12)
        return 0;

    VAR_9 = FUNC_3 (VAR_2, VAR_3, VAR_4, VAR_5);
    if (!VAR_9) {
        FUNC_4 ("[fs-mgr]get seafdir %s failed\n", VAR_5);
        if (VAR_8)
            return 0;
        return -1;
    }
    for (VAR_10 = VAR_9->entries; VAR_10; VAR_10 = VAR_10->next) {
        VAR_11 = (SeafDirent *)VAR_10->data;

        if (FUNC_1(VAR_11->mode)) {
            if (FUNC_5 (VAR_2, VAR_3, VAR_4, VAR_11->id,
                               VAR_6, VAR_7, VAR_8) < 0) {
                if (!VAR_8) {
                    FUNC_2 (VAR_9);
                    return -1;
                }
            }
        } else if (FUNC_0(VAR_11->mode)) {
            if (FUNC_6 (VAR_2, VAR_3, VAR_4, VAR_11->id,
                              VAR_6, VAR_7, VAR_8) < 0) {
                if (!VAR_8) {
                    FUNC_2 (VAR_9);
                    return -1;
                }
            }
        }
    }

    FUNC_2 (VAR_9);
    return 0;
}
