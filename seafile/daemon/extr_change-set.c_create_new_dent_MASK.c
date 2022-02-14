
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int name; } ;
struct TYPE_7__ {int st_size; int st_mtime; int st_mode; } ;
typedef TYPE_1__ SeafStat ;
typedef TYPE_2__ ChangeSetDirent ;
typedef int ChangeSetDir ;


 int FUNC_0 (int *,TYPE_2__*) ;
 TYPE_2__* FUNC_1 (char*,int ,char const*,int ,char const*,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char const*) ;
 int FUNC_5 (unsigned char*,char*,int) ;

__attribute__((used)) static void
FUNC_6 (ChangeSetDir *VAR_0,
                 const char *VAR_1,
                 unsigned char *VAR_2,
                 SeafStat *VAR_3,
                 const char *VAR_4,
                 ChangeSetDirent *VAR_5)
{
    if (VAR_5) {
        FUNC_3 (VAR_5->name);
        VAR_5->name = FUNC_4(VAR_1);
        FUNC_0 (VAR_0, VAR_5);
        return;
    }

    char VAR_6[41];
    FUNC_5 (VAR_2, VAR_6, 20);
    ChangeSetDirent *VAR_7;
    VAR_7 = FUNC_1 (VAR_6, FUNC_2(VAR_3->st_mode), VAR_1,
                                     VAR_3->st_mtime, VAR_4, VAR_3->st_size);

    FUNC_0 (VAR_0, VAR_7);
}
