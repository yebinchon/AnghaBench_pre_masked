
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u_long ;
typedef size_t ngx_uint_t ;
struct TYPE_5__ {int (* manager ) (int ) ;int data; } ;
typedef TYPE_2__ ngx_path_t ;
typedef int ngx_msec_t ;
struct TYPE_4__ {size_t nelts; TYPE_2__** elts; } ;
struct TYPE_6__ {int log; TYPE_1__ paths; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int ,scalar_t__) ;
 int VAR_2 ;
 TYPE_3__* VAR_3 ;
 int FUNC_1 (int ,int ,int ,char*,scalar_t__) ;
 int FUNC_2 () ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void
FUNC_4(void)
{
    u_long VAR_4;
    ngx_uint_t VAR_5;
    ngx_msec_t VAR_6, VAR_7;
    ngx_path_t **VAR_8;

    VAR_6 = 60 * 60 * 1000;

    VAR_8 = VAR_3->paths.elts;
    for (VAR_5 = 0; VAR_5 < VAR_3->paths.nelts; VAR_5++) {

        if (VAR_8[VAR_5]->manager) {
            VAR_7 = VAR_8[VAR_5]->manager(VAR_8[VAR_5]->data);

            VAR_6 = (VAR_7 <= VAR_6) ? VAR_7 : VAR_6;

            FUNC_2();
        }
    }

    if (VAR_6 == 0) {
        VAR_6 = 1;
    }

    VAR_4 = FUNC_0(VAR_2, (u_long) VAR_6);

    if (VAR_4 != VAR_1) {

        FUNC_2();

        FUNC_1(VAR_0, VAR_3->log, 0,
                       "cache manager WaitForSingleObject: %ul", VAR_4);
    }
}
