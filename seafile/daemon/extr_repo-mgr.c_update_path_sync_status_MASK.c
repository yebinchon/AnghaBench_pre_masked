
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct index_state {int dummy; } ;
struct TYPE_3__ {int ap_q_lock; int active_paths; } ;
typedef TYPE_1__ WTStatus ;
typedef int SeafRepo ;
typedef int GList ;


 int FUNC_0 (char*) ;
 char* FUNC_1 (int ) ;
 int FUNC_2 (int *,char*,struct index_state*,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void
FUNC_5 (SeafRepo *VAR_0, WTStatus *VAR_1,
                         struct index_state *VAR_2, GList *VAR_3)
{
    char *VAR_4;

    while (1) {
        FUNC_3 (&VAR_1->ap_q_lock);
        VAR_4 = FUNC_1 (VAR_1->active_paths);
        FUNC_4 (&VAR_1->ap_q_lock);

        if (!VAR_4)
            break;




        FUNC_2 (VAR_0, VAR_4, VAR_2, VAR_3);


        FUNC_0 (VAR_4);
    }
}
