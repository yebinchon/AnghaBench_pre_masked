
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_6__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int ngx_uint_t ;
typedef int ngx_int_t ;
struct TYPE_7__ {int active; int oneshot; size_t index; int log; TYPE_2__* data; scalar_t__ disabled; } ;
typedef TYPE_1__ ngx_event_t ;
struct TYPE_8__ {int fd; } ;
typedef TYPE_2__ ngx_connection_t ;
struct TYPE_9__ {scalar_t__ flags; scalar_t__ udata; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 TYPE_6__* VAR_8 ;
 size_t VAR_9 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_1__*,int ,int) ;
 int FUNC_2 (int ,int ,int ,char*,int ,int ) ;
 int FUNC_3 (int ,int ,int ,char*,int ) ;

__attribute__((used)) static ngx_int_t
FUNC_4(ngx_event_t *VAR_10, ngx_int_t VAR_11, ngx_uint_t VAR_12)
{
    ngx_int_t VAR_13;





    VAR_10->active = 1;
    VAR_10->disabled = 0;
    VAR_10->oneshot = (VAR_12 & VAR_7) ? 1 : 0;
    VAR_13 = FUNC_1(VAR_10, VAR_11, VAR_0|VAR_2|VAR_12);

    return VAR_13;
}
