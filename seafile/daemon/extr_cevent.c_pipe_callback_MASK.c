
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int gconstpointer ;
typedef int evutil_socket_t ;
struct TYPE_8__ {scalar_t__ id; } ;
struct TYPE_7__ {int handler_table; } ;
struct TYPE_6__ {int handler_data; int (* handler ) (TYPE_3__*,int ) ;} ;
typedef TYPE_1__ Handler ;
typedef TYPE_2__ CEventManager ;
typedef TYPE_3__ CEvent ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (int ,int ) ;
 int FUNC_1 (char*,scalar_t__) ;
 int FUNC_2 (int ,char*,int) ;
 int FUNC_3 (TYPE_3__*,int ) ;

void FUNC_4 (evutil_socket_t VAR_1, short VAR_2, void *VAR_3)
{
    CEventManager *VAR_4 = (CEventManager *) VAR_3;
    CEvent *VAR_5;
    char VAR_6[VAR_0];

    if (FUNC_2(VAR_1, VAR_6, VAR_0) != VAR_0) {
        return;
    }

    VAR_5 = (CEvent *)VAR_6;
    Handler *VAR_7 = FUNC_0 (VAR_4->handler_table,
                                      (gconstpointer)(long)VAR_5->id);
    if (VAR_7 == ((void*)0)) {
        FUNC_1 ("no handler for event type %d\n", VAR_5->id);
        return;
    }

    VAR_7->handler(VAR_5, VAR_7->handler_data);
}
