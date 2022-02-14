
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int clone_mgr; } ;
struct TYPE_7__ {int repo_id; int email; int peer_addr; } ;
struct TYPE_6__ {TYPE_2__* data; struct TYPE_6__* next; } ;
typedef TYPE_1__ GList ;
typedef TYPE_2__ CloneTask ;


 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (char const*,int ) ;
 TYPE_4__* VAR_0 ;
 int FUNC_2 (int ,int ) ;
 TYPE_1__* FUNC_3 (int ) ;

__attribute__((used)) static void
FUNC_4 (const char *VAR_1, const char *VAR_2)
{
    GList *VAR_3, *VAR_4;
    CloneTask *VAR_5;

    VAR_4 = FUNC_3 (VAR_0->clone_mgr);
    for (VAR_3 = VAR_4; VAR_3 != ((void*)0); VAR_3 = VAR_3->next) {
        VAR_5 = VAR_3->data;

        if (FUNC_1(VAR_1, VAR_5->peer_addr) == 0
            && FUNC_1(VAR_2, VAR_5->email) == 0) {
            FUNC_2 (VAR_0->clone_mgr, VAR_5->repo_id);
        }
    }

    FUNC_0 (VAR_4);
}
