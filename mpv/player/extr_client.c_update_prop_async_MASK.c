
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


union m_option_value {int member_0; } ;
typedef int uint64_t ;
struct observe_property {int async_updating; int async_value_valid; int changed; int async_value_ts; TYPE_2__* type; int async_value; int format; int name; int async_change_ts; struct mpv_handle* owner; } ;
struct mpv_handle {int async_counter; int lock; scalar_t__ lowest_changed; int mpctx; } ;
struct getproperty_request {scalar_t__ status; union m_option_value* data; int format; int name; int mpctx; } ;
struct TYPE_4__ {TYPE_1__* type; } ;
struct TYPE_3__ {int size; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct getproperty_request*) ;
 int FUNC_2 (TYPE_2__*,int *) ;
 int FUNC_3 (int *,union m_option_value*,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct mpv_handle*) ;

__attribute__((used)) static void FUNC_7(void *VAR_0)
{
    struct observe_property *VAR_1 = VAR_0;
    struct mpv_handle *VAR_2 = VAR_1->owner;

    union m_option_value VAR_3 = {0};
    bool VAR_4 = 0;
    uint64_t VAR_5;

    FUNC_4(&VAR_2->lock);
    VAR_5 = VAR_1->async_change_ts;
    FUNC_0(VAR_1->async_updating);
    FUNC_5(&VAR_2->lock);

    struct getproperty_request VAR_6 = {
        .mpctx = VAR_2->mpctx,
        .name = VAR_1->name,
        .format = VAR_1->format,
        .data = &VAR_3,
    };
    FUNC_1(&VAR_6);
    VAR_4 = VAR_6.status >= 0;

    FUNC_4(&VAR_2->lock);

    FUNC_0(VAR_1->async_updating);


    FUNC_2(VAR_1->type, &VAR_1->async_value);
    FUNC_3(&VAR_1->async_value, &VAR_3, VAR_1->type->type->size);
    VAR_1->async_value_valid = VAR_4;

    VAR_1->async_value_ts = VAR_5;
    VAR_1->async_updating = 0;


    VAR_1->changed = 1;
    VAR_2->lowest_changed = 0;

    VAR_2->async_counter -= 1;
    FUNC_6(VAR_2);

    FUNC_5(&VAR_2->lock);
}
