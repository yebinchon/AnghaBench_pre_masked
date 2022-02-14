
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ gint64 ;
struct TYPE_7__ {int delta; int active_paths; } ;
struct TYPE_6__ {scalar_t__ size; int name; } ;
typedef TYPE_1__ SeafDirent ;
typedef TYPE_2__ CalcQuotaDeltaData ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_1__*,TYPE_1__*) ;
 int FUNC_1 (int ,char*,void*) ;
 char* FUNC_2 (char const*,int ,int *) ;

__attribute__((used)) static int
FUNC_3 (int VAR_1, const char *VAR_2,
                                         SeafDirent *VAR_3[], void *VAR_4)
{
    CalcQuotaDeltaData *VAR_5 = VAR_4;
    SeafDirent *VAR_6 = VAR_3[0];
    SeafDirent *VAR_7 = VAR_3[1];
    gint64 VAR_8, VAR_9;
    char *VAR_10;

    if (VAR_6 && VAR_7) {
        VAR_8 = VAR_6->size;
        VAR_9 = VAR_7->size;
        VAR_5->delta += (VAR_8 - VAR_9);

        if (!FUNC_0 (VAR_6, VAR_7)) {
            VAR_10 = FUNC_2(VAR_2, VAR_6->name, ((void*)0));
            FUNC_1 (VAR_5->active_paths, VAR_10, (void*)(long)VAR_0);
        }
    } else if (VAR_6 && !VAR_7) {
        VAR_5->delta += VAR_6->size;

        VAR_10 = FUNC_2 (VAR_2, VAR_6->name, ((void*)0));
        FUNC_1 (VAR_5->active_paths, VAR_10, (void*)(long)VAR_0);
    } else if (!VAR_6 && VAR_7) {
        VAR_5->delta -= VAR_7->size;
    }

    return 0;
}
