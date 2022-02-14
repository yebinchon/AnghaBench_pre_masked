
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef scalar_t__ gboolean ;
typedef int (* TraverseFSPathCallback ) (int *,char*,TYPE_1__*,void*,scalar_t__*) ;
struct TYPE_11__ {scalar_t__ data; struct TYPE_11__* next; } ;
struct TYPE_10__ {TYPE_4__* entries; } ;
struct TYPE_9__ {int mode; int name; int id; } ;
typedef int SeafFSManager ;
typedef TYPE_1__ SeafDirent ;
typedef TYPE_3__ SeafDir ;
typedef TYPE_4__ GList ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (char*) ;
 char* FUNC_3 (char const*,char*,int ,int *) ;
 int FUNC_4 (TYPE_3__*) ;
 TYPE_3__* FUNC_5 (int *,char const*,int,int ) ;
 int FUNC_6 (char*,char const*,int ) ;

__attribute__((used)) static int
FUNC_7 (SeafFSManager *VAR_1,
                   const char *VAR_2,
                   int VAR_3,
                   const char *VAR_4,
                   SeafDirent *VAR_5,
                   TraverseFSPathCallback VAR_6,
                   void *VAR_7)
{
    SeafDir *VAR_8;
    GList *VAR_9;
    SeafDirent *VAR_10;
    gboolean VAR_11 = VAR_0;
    char *VAR_12;
    int VAR_13 = 0;

    if (!VAR_6 (VAR_1, VAR_4, VAR_5, VAR_7, &VAR_11))
        return -1;

    if (VAR_11)
        return 0;

    VAR_8 = FUNC_5 (VAR_1, VAR_2, VAR_3, VAR_5->id);
    if (!VAR_8) {
        FUNC_6 ("get seafdir %s:%s failed\n", VAR_2, VAR_5->id);
        return -1;
    }

    for (VAR_9 = VAR_8->entries; VAR_9; VAR_9 = VAR_9->next) {
        VAR_10 = (SeafDirent *)VAR_9->data;
        VAR_12 = FUNC_3 (VAR_4, "/", VAR_10->name, ((void*)0));

        if (FUNC_1(VAR_10->mode)) {
            if (!VAR_6 (VAR_1, VAR_12, VAR_10, VAR_7, &VAR_11)) {
                FUNC_2 (VAR_12);
                VAR_13 = -1;
                break;
            }
        } else if (FUNC_0(VAR_10->mode)) {
            if (FUNC_7 (VAR_1, VAR_2, VAR_3, VAR_12, VAR_10,
                                   VAR_6, VAR_7) < 0) {
                FUNC_2 (VAR_12);
                VAR_13 = -1;
                break;
            }
        }
        FUNC_2 (VAR_12);
    }

    FUNC_4 (VAR_8);
    return VAR_13;
}
