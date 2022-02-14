
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int ** results; } ;
typedef int SeafDirent ;
typedef int GList ;
typedef int DiffEntry ;
typedef TYPE_1__ DiffData ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int * FUNC_0 (int ,int ,int *,char const*) ;
 int FUNC_1 (int *,int *) ;
 int * FUNC_2 (int *,int *) ;

__attribute__((used)) static int
FUNC_3 (int VAR_4, const char *VAR_5, SeafDirent *VAR_6[], void *VAR_7)
{
    DiffData *VAR_8 = VAR_7;
    SeafDirent *VAR_9 = VAR_6[0];
    SeafDirent *VAR_10 = VAR_6[1];
    SeafDirent *VAR_11 = VAR_6[2];
    GList **VAR_12 = VAR_8->results;
    DiffEntry *VAR_13;


    if (VAR_9 && VAR_10 && VAR_11) {
        if (!FUNC_1(VAR_9, VAR_10) && !FUNC_1 (VAR_9, VAR_11)) {
            VAR_13 = FUNC_0 (VAR_3, VAR_2,
                                             VAR_9, VAR_5);
            *VAR_12 = FUNC_2 (*VAR_12, VAR_13);
        }
    } else if (!VAR_9 && VAR_10 && VAR_11) {
        VAR_13 = FUNC_0 (VAR_3, VAR_1,
                                         VAR_10, VAR_5);
        *VAR_12 = FUNC_2 (*VAR_12, VAR_13);
    } else if (VAR_9 && !VAR_10 && VAR_11) {
        if (!FUNC_1 (VAR_9, VAR_11)) {
            VAR_13 = FUNC_0 (VAR_3, VAR_2,
                                             VAR_9, VAR_5);
            *VAR_12 = FUNC_2 (*VAR_12, VAR_13);
        }
    } else if (VAR_9 && VAR_10 && !VAR_11) {
        if (!FUNC_1 (VAR_9, VAR_10)) {
            VAR_13 = FUNC_0 (VAR_3, VAR_2,
                                             VAR_9, VAR_5);
            *VAR_12 = FUNC_2 (*VAR_12, VAR_13);
        }
    } else if (VAR_9 && !VAR_10 && !VAR_11) {
        VAR_13 = FUNC_0 (VAR_3, VAR_0,
                                         VAR_9, VAR_5);
        *VAR_12 = FUNC_2 (*VAR_12, VAR_13);
    }






    return 0;
}
