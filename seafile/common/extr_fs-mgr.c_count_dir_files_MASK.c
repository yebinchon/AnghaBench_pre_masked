
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ data; struct TYPE_8__* next; } ;
struct TYPE_7__ {TYPE_3__* entries; } ;
struct TYPE_6__ {char* id; int mode; } ;
typedef int SeafFSManager ;
typedef TYPE_1__ SeafDirent ;
typedef TYPE_2__ SeafDir ;
typedef TYPE_3__ GList ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (TYPE_2__*) ;
 TYPE_2__* FUNC_3 (int *,char const*,int,char const*) ;

__attribute__((used)) static int
FUNC_4 (SeafFSManager *VAR_0, const char *VAR_1, int VAR_2, const char *VAR_3)
{
    SeafDir *VAR_4;
    SeafDirent *VAR_5;
    int VAR_6 = 0;
    int VAR_7;
    GList *VAR_8;

    VAR_4 = FUNC_3 (VAR_0, VAR_1, VAR_2, VAR_3);
    if (!VAR_4)
        return -1;

    for (VAR_8 = VAR_4->entries; VAR_8; VAR_8 = VAR_8->next) {
        VAR_5 = (SeafDirent *)VAR_8->data;

        if (FUNC_1(VAR_5->mode)) {
            VAR_6 ++;
        } else if (FUNC_0(VAR_5->mode)) {
            VAR_7 = FUNC_4 (VAR_0, VAR_1, VAR_2, VAR_5->id);
            if (VAR_7 < 0) {
                FUNC_2 (VAR_4);
                return VAR_7;
            }
            VAR_6 += VAR_7;
        }
    }

    FUNC_2 (VAR_4);
    return VAR_6;
}
