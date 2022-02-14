
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int gboolean ;
struct TYPE_5__ {int active_paths; } ;
struct TYPE_4__ {int name; int id; } ;
typedef TYPE_1__ SeafDirent ;
typedef TYPE_2__ CalcQuotaDeltaData ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,char*,void*) ;
 char* FUNC_1 (char const*,int ,int *) ;
 scalar_t__ FUNC_2 (int ,int ) ;

__attribute__((used)) static int
FUNC_3 (int VAR_2, const char *VAR_3,
                                        SeafDirent *VAR_4[], void *VAR_5,
                                        gboolean *VAR_6)
{
    CalcQuotaDeltaData *VAR_7 = VAR_5;
    SeafDirent *VAR_8 = VAR_4[0];
    SeafDirent *VAR_9 = VAR_4[1];
    char *VAR_10;


    if ((!VAR_9 && VAR_8 && FUNC_2(VAR_8->id, VAR_0) == 0) ||
 (VAR_9 && VAR_8 && FUNC_2(VAR_8->id, VAR_0) == 0 && FUNC_2(VAR_9->id, VAR_0) != 0)) {
        VAR_10 = FUNC_1 (VAR_3, VAR_8->name, ((void*)0));
        FUNC_0 (VAR_7->active_paths, VAR_10, (void*)(long)VAR_1);
    }

    return 0;
}
