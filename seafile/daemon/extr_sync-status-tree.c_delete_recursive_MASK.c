
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef size_t guint ;
struct TYPE_8__ {int dirents; } ;
struct TYPE_7__ {TYPE_2__* subdir; int mode; } ;
typedef TYPE_1__ SyncStatusDirent ;
typedef TYPE_2__ SyncStatusDir ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 TYPE_1__* FUNC_2 (int ,char*) ;
 char* FUNC_3 (char const*,char*,char*,int *) ;
 scalar_t__ FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_2__*,char*,char*) ;

__attribute__((used)) static void
FUNC_6 (SyncStatusDir *VAR_0, char **VAR_1, guint VAR_2, guint VAR_3,
                  const char *VAR_4)
{
    char *VAR_5;
    SyncStatusDirent *VAR_6;
    char *VAR_7 = ((void*)0);

    VAR_5 = VAR_1[VAR_3];
    VAR_7 = FUNC_3 (VAR_4, "/", VAR_5, ((void*)0));

    VAR_6 = FUNC_2 (VAR_0->dirents, VAR_5);
    if (VAR_6) {
        if (FUNC_0(VAR_6->mode)) {
            if (VAR_3 == (VAR_2-1)) {
                if (FUNC_4(VAR_6))
                    FUNC_5 (VAR_0, VAR_5, VAR_7);
            } else {
                FUNC_6 (VAR_6->subdir, VAR_1, VAR_2, ++VAR_3, VAR_7);



                if (FUNC_4(VAR_6))
                    FUNC_5 (VAR_0, VAR_5, VAR_7);
            }
        } else if (VAR_3 == (VAR_2-1)) {
            FUNC_5 (VAR_0, VAR_5, VAR_7);
        }
    }

    FUNC_1 (VAR_7);
}
