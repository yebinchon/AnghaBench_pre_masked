
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_4__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int ngx_uint_t ;
typedef int ngx_int_t ;
struct TYPE_5__ {int disabled; size_t index; int data; int log; scalar_t__ active; } ;
typedef TYPE_1__ ngx_event_t ;
struct TYPE_6__ {scalar_t__ udata; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_4__* VAR_5 ;
 size_t VAR_6 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*,int ,int) ;
 int FUNC_2 (int ,int ,int ,char*,int ,int ) ;

__attribute__((used)) static ngx_int_t
FUNC_3(ngx_event_t *VAR_7, ngx_int_t VAR_8, ngx_uint_t VAR_9)
{
    ngx_int_t VAR_10;
    ngx_event_t *VAR_11;

    VAR_7->active = 0;
    VAR_7->disabled = 0;

    if (VAR_7->index < VAR_6
        && ((uintptr_t) VAR_5[VAR_7->index].udata & (uintptr_t) ~1)
            == (uintptr_t) VAR_7)
    {
        FUNC_2(VAR_3, VAR_7->log, 0,
                       "kevent deleted: %d: ft:%i",
                       FUNC_0(VAR_7->data), VAR_8);



        VAR_6--;

        if (VAR_7->index < VAR_6) {
            VAR_11 = (ngx_event_t *)
                    ((uintptr_t) VAR_5[VAR_6].udata & (uintptr_t) ~1);
            VAR_5[VAR_7->index] = VAR_5[VAR_6];
            VAR_11->index = VAR_7->index;
        }

        return VAR_4;
    }







    if (VAR_9 & VAR_1) {
        return VAR_4;
    }

    if (VAR_9 & VAR_2) {
        VAR_7->disabled = 1;

    } else {
        VAR_9 |= VAR_0;
    }

    VAR_10 = FUNC_1(VAR_7, VAR_8, VAR_9);

    return VAR_10;
}
