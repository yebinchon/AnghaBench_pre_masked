
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int gint ;
typedef void* gboolean ;
struct TYPE_12__ {scalar_t__ last_check; scalar_t__ partial_commit; int last_changed; } ;
typedef TYPE_2__ WTStatus ;
struct TYPE_14__ {void* create_partial_commit; int id; } ;
struct TYPE_13__ {TYPE_1__* seaf; } ;
struct TYPE_11__ {int wt_monitor; } ;
typedef int SyncTask ;
typedef TYPE_3__ SeafSyncManager ;
typedef TYPE_4__ SeafRepo ;


 void* VAR_0 ;
 void* VAR_1 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (TYPE_3__*,TYPE_4__*,void*,void*) ;
 int FUNC_2 (int *) ;
 TYPE_2__* FUNC_3 (int ,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (TYPE_2__*) ;

__attribute__((used)) static gboolean
FUNC_6 (SeafSyncManager *VAR_2, SeafRepo *VAR_3,
                                gboolean VAR_4)
{
    WTStatus *VAR_5;
    SyncTask *VAR_6;
    gboolean VAR_7 = VAR_0;
    gint VAR_8 = (gint)FUNC_4(((void*)0));
    gint VAR_9;

    VAR_5 = FUNC_3 (VAR_2->seaf->wt_monitor,
                                                  VAR_3->id);
    if (VAR_5) {
        VAR_9 = FUNC_2 (&VAR_5->last_changed);
        if (VAR_5->last_check == 0) {

            VAR_6 = FUNC_1 (VAR_2, VAR_3, VAR_4, VAR_1);
            VAR_3->create_partial_commit = VAR_1;
            FUNC_0 (VAR_6);
            VAR_5->last_check = VAR_8;
            VAR_7 = VAR_1;
        } else if (VAR_5->partial_commit) {
            VAR_6 = FUNC_1 (VAR_2, VAR_3, VAR_4, VAR_0);
            VAR_3->create_partial_commit = VAR_1;
            FUNC_0 (VAR_6);
            VAR_7 = VAR_1;
        } else if (VAR_9 != 0 && VAR_5->last_check <= VAR_9) {



            if (VAR_8 - VAR_9 >= 2) {
                VAR_6 = FUNC_1 (VAR_2, VAR_3, VAR_4, VAR_0);
                VAR_3->create_partial_commit = VAR_1;
                FUNC_0 (VAR_6);
                VAR_5->last_check = VAR_8;
                VAR_7 = VAR_1;
            }
        }
        FUNC_5 (VAR_5);
    }

    return VAR_7;
}
