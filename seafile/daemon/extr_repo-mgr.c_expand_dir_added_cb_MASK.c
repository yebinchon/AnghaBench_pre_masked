
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int gboolean ;
struct TYPE_7__ {int size; int modifier; int mode; int mtime; } ;
struct TYPE_6__ {int size; int modifier; int mode; int mtime; int id; } ;
typedef int SeafFSManager ;
typedef TYPE_1__ SeafDirent ;
typedef int GList ;
typedef TYPE_2__ DiffEntry ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_4 ;
 TYPE_2__* FUNC_2 (int ,int ,unsigned char*,char const*) ;
 int * FUNC_3 (int *,TYPE_2__*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,unsigned char*,int) ;
 scalar_t__ FUNC_6 (int ,int ) ;

__attribute__((used)) static gboolean
FUNC_7 (SeafFSManager *VAR_5,
                     const char *VAR_6,
                     SeafDirent *VAR_7,
                     void *VAR_8,
                     gboolean *VAR_9)
{
    GList **VAR_10 = VAR_8;
    DiffEntry *VAR_11 = ((void*)0);
    unsigned char VAR_12[20];

    FUNC_5 (VAR_7->id, VAR_12, 20);

    if (FUNC_0(VAR_7->mode) && FUNC_6(VAR_7->id, VAR_3) == 0)
        VAR_11 = FUNC_2 (VAR_2, VAR_1, VAR_12, VAR_6);
    else if (FUNC_1(VAR_7->mode))
        VAR_11 = FUNC_2 (VAR_2, VAR_0, VAR_12, VAR_6);

    if (VAR_11) {
        VAR_11->mtime = VAR_7->mtime;
        VAR_11->mode = VAR_7->mode;
        VAR_11->modifier = FUNC_4(VAR_7->modifier);
        VAR_11->size = VAR_7->size;
        *VAR_10 = FUNC_3 (*VAR_10, VAR_11);
    }

    return VAR_4;
}
