
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


union m_option_value {int member_0; } ;
struct observe_property {scalar_t__ async_change_ts; scalar_t__ async_value_ts; int async_updating; int async_value_valid; int value_valid; TYPE_4__* type; union m_option_value value; int format; int name; int async_value; } ;
struct mpv_handle {int async_counter; int lock; TYPE_2__* mpctx; TYPE_1__* clients; } ;
struct getproperty_request {scalar_t__ status; union m_option_value* data; int format; int name; TYPE_2__* mpctx; } ;
struct TYPE_9__ {TYPE_3__* type; } ;
struct TYPE_8__ {int size; } ;
struct TYPE_7__ {int dispatch; } ;
struct TYPE_6__ {int uses_vo_libmpv; } ;


 scalar_t__ FUNC_0 (int *,int ) ;
 int FUNC_1 (union m_option_value*,union m_option_value*,int ) ;
 int VAR_0 ;
 int FUNC_2 (TYPE_4__*,union m_option_value*,int *) ;
 int FUNC_3 (TYPE_4__*,union m_option_value*) ;
 int FUNC_4 (union m_option_value*,union m_option_value*,int ) ;
 int VAR_1 ;
 int FUNC_5 (int ,int ,struct observe_property*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct mpv_handle*,int ,struct getproperty_request*) ;
 int VAR_2 ;

__attribute__((used)) static bool FUNC_9(struct mpv_handle *VAR_3, struct observe_property *VAR_4)
{
    if (!VAR_4->type)
        return 1;

    union m_option_value VAR_5 = {0};
    bool VAR_6 = 0;




    if (FUNC_0(&VAR_3->clients->uses_vo_libmpv, VAR_1)) {
        if (VAR_4->async_change_ts > VAR_4->async_value_ts) {
            if (!VAR_4->async_updating) {
                VAR_4->async_updating = 1;
                VAR_3->async_counter += 1;
                FUNC_5(VAR_3->mpctx->dispatch, VAR_2, VAR_4);
            }
            return 0;
        }

        FUNC_2(VAR_4->type, &VAR_5, &VAR_4->async_value);
        VAR_6 = VAR_4->async_value_valid;
    } else {
        FUNC_7(&VAR_3->lock);

        struct getproperty_request VAR_7 = {
            .mpctx = VAR_3->mpctx,
            .name = VAR_4->name,
            .format = VAR_4->format,
            .data = &VAR_5,
        };
        FUNC_8(VAR_3, VAR_0, &VAR_7);
        VAR_6 = VAR_7.status >= 0;

        FUNC_6(&VAR_3->lock);
    }

    bool VAR_8 = VAR_4->value_valid != VAR_6;
    if (VAR_4->value_valid && VAR_6)
        VAR_8 = !FUNC_1(&VAR_4->value, &VAR_5, VAR_4->format);

    if (VAR_8) {
        VAR_4->value_valid = VAR_6;
        if (VAR_6) {

            FUNC_3(VAR_4->type, &VAR_4->value);
            FUNC_4(&VAR_4->value, &VAR_5, VAR_4->type->type->size);
            VAR_6 = 0;
        }
    }

    if (VAR_6)
        FUNC_3(VAR_4->type, &VAR_5);

    return VAR_8;
}
