
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef enum conn_states { ____Placeholder_conn_states } conn_states ;
struct TYPE_4__ {int state; int sfd; int wbytes; int wbuf; } ;
typedef TYPE_1__ conn ;
struct TYPE_5__ {int verbose; } ;


 int FUNC_0 (int,int ,int ) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int ,char*,int,char*,char*) ;
 TYPE_2__ VAR_4 ;
 char* FUNC_3 (int) ;
 int VAR_5 ;

__attribute__((used)) static void FUNC_4(conn *VAR_6, enum conn_states VAR_7) {
    FUNC_1(VAR_6 != ((void*)0));
    FUNC_1(VAR_7 >= VAR_0 && VAR_7 < VAR_1);

    if (VAR_7 != VAR_6->state) {
        if (VAR_4.verbose > 2) {
            FUNC_2(VAR_5, "%d: going from %s to %s\n",
                    VAR_6->sfd, FUNC_3(VAR_6->state),
                    FUNC_3(VAR_7));
        }

        if (VAR_7 == VAR_3 || VAR_7 == VAR_2) {
            FUNC_0(VAR_6->sfd, VAR_6->wbuf, VAR_6->wbytes);
        }
        VAR_6->state = VAR_7;
    }
}
