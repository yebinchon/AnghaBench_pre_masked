
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int sigalgcnt; scalar_t__* sigalgs; } ;
typedef TYPE_1__ sig_cb_st ;
typedef int etmp ;
struct TYPE_6__ {scalar_t__ sigalg; int hash; int sig; int * name; } ;
typedef TYPE_2__ SIGALG_LOOKUP ;


 int VAR_0 ;
 size_t FUNC_0 (TYPE_2__*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int*,int*,char*) ;
 int FUNC_2 (char*,char const*,int) ;
 TYPE_2__* VAR_3 ;
 char* FUNC_3 (char*,char) ;
 scalar_t__ FUNC_4 (char*,int *) ;

__attribute__((used)) static int FUNC_5(const char *VAR_4, int VAR_5, void *VAR_6)
{
    sig_cb_st *VAR_7 = VAR_6;
    size_t VAR_8;
    const SIGALG_LOOKUP *VAR_9;
    char VAR_10[VAR_2], *VAR_11;
    int VAR_12 = VAR_0, VAR_13 = VAR_0;
    if (VAR_4 == ((void*)0))
        return 0;
    if (VAR_7->sigalgcnt == VAR_1)
        return 0;
    if (VAR_5 > (int)(sizeof(VAR_10) - 1))
        return 0;
    FUNC_2(VAR_10, VAR_4, VAR_5);
    VAR_10[VAR_5] = 0;
    VAR_11 = FUNC_3(VAR_10, '+');
    if (VAR_11 == ((void*)0)) {
        for (VAR_8 = 0, VAR_9 = VAR_3; VAR_8 < FUNC_0(VAR_3);
             VAR_8++, VAR_9++) {
            if (VAR_9->name != ((void*)0) && FUNC_4(VAR_10, VAR_9->name) == 0) {
                VAR_7->sigalgs[VAR_7->sigalgcnt++] = VAR_9->sigalg;
                break;
            }
        }
        if (VAR_8 == FUNC_0(VAR_3))
            return 0;
    } else {
        *VAR_11 = 0;
        VAR_11++;
        if (*VAR_11 == 0)
            return 0;
        FUNC_1(&VAR_12, &VAR_13, VAR_10);
        FUNC_1(&VAR_12, &VAR_13, VAR_11);
        if (VAR_12 == VAR_0 || VAR_13 == VAR_0)
            return 0;
        for (VAR_8 = 0, VAR_9 = VAR_3; VAR_8 < FUNC_0(VAR_3);
             VAR_8++, VAR_9++) {
            if (VAR_9->hash == VAR_13 && VAR_9->sig == VAR_12) {
                VAR_7->sigalgs[VAR_7->sigalgcnt++] = VAR_9->sigalg;
                break;
            }
        }
        if (VAR_8 == FUNC_0(VAR_3))
            return 0;
    }


    for (VAR_8 = 0; VAR_8 < VAR_7->sigalgcnt - 1; VAR_8++) {
        if (VAR_7->sigalgs[VAR_8] == VAR_7->sigalgs[VAR_7->sigalgcnt - 1]) {
            VAR_7->sigalgcnt--;
            return 0;
        }
    }
    return 1;
}
