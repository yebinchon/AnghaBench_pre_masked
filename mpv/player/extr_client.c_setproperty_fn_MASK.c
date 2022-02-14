
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct setproperty_request {scalar_t__ format; int userdata; scalar_t__ reply_ctx; int status; int mpctx; int name; struct mpv_node* data; } ;
struct mpv_node {scalar_t__ format; int u; } ;
struct mpv_event {int error; int event_id; } ;
struct m_option {TYPE_1__* type; } ;
struct TYPE_2__ {int size; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 struct m_option* FUNC_0 (scalar_t__) ;
 int FUNC_1 (int *,struct mpv_node*,int ) ;
 int FUNC_2 (int ,int ,struct mpv_node*,int ) ;
 int FUNC_3 (scalar_t__,int ,struct mpv_event*) ;
 int FUNC_4 (struct setproperty_request*) ;
 int FUNC_5 (int) ;

__attribute__((used)) static void FUNC_6(void *VAR_3)
{
    struct setproperty_request *VAR_4 = VAR_3;
    const struct m_option *VAR_5 = FUNC_0(VAR_4->format);

    struct mpv_node *VAR_6;
    struct mpv_node VAR_7;
    if (VAR_4->format == VAR_1) {
        VAR_6 = VAR_4->data;
    } else {
        VAR_7.format = VAR_4->format;
        FUNC_1(&VAR_7.u, VAR_4->data, VAR_5->type->size);
        VAR_6 = &VAR_7;
    }

    int VAR_8 = FUNC_2(VAR_4->name, VAR_2, VAR_6, VAR_4->mpctx);

    VAR_4->status = FUNC_5(VAR_8);

    if (VAR_4->reply_ctx) {
        struct mpv_event VAR_9 = {
            .event_id = VAR_0,
            .error = VAR_4->status,
        };
        FUNC_3(VAR_4->reply_ctx, VAR_4->userdata, &VAR_9);
        FUNC_4(VAR_4);
    }
}
