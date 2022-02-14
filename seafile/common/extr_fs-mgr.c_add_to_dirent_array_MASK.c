
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int json_t ;
struct TYPE_3__ {int size; int modifier; int mode; int mtime; int name; int id; } ;
typedef TYPE_1__ SeafDirent ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int *,int *) ;
 int * FUNC_2 () ;
 int FUNC_3 (int *,char*,int ) ;
 int FUNC_4 (int *,char*,int ) ;

__attribute__((used)) static void
FUNC_5 (json_t *VAR_0, SeafDirent *VAR_1)
{
    json_t *VAR_2;

    VAR_2 = FUNC_2 ();
    FUNC_3 (VAR_2, "mode", VAR_1->mode);
    FUNC_4 (VAR_2, "id", VAR_1->id);
    FUNC_4 (VAR_2, "name", VAR_1->name);
    FUNC_3 (VAR_2, "mtime", VAR_1->mtime);
    if (FUNC_0(VAR_1->mode)) {
        FUNC_4 (VAR_2, "modifier", VAR_1->modifier);
        FUNC_3 (VAR_2, "size", VAR_1->size);
    }

    FUNC_1 (VAR_0, VAR_2);
}
