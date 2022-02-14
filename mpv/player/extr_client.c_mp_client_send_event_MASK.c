
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct mpv_handle {int dummy; } ;
struct mpv_event {int event_id; void* data; int reply_userdata; } ;
struct mp_client_api {int lock; } ;
struct MPContext {struct mp_client_api* clients; } ;


 struct mpv_handle* FUNC_0 (struct mp_client_api*,char const*) ;
 int FUNC_1 (struct MPContext*,int,void*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct mpv_handle*,struct mpv_event*,int) ;
 int FUNC_5 (void*) ;

int FUNC_6(struct MPContext *VAR_0, const char *VAR_1,
                         uint64_t VAR_2, int VAR_3, void *VAR_4)
{
    if (!VAR_1) {
        FUNC_1(VAR_0, VAR_3, VAR_4);
        FUNC_5(VAR_4);
        return 0;
    }

    struct mp_client_api *VAR_5 = VAR_0->clients;
    int VAR_6 = 0;

    struct mpv_event VAR_7 = {
        .event_id = VAR_3,
        .data = VAR_4,
        .reply_userdata = VAR_2,
    };

    FUNC_2(&VAR_5->lock);

    struct mpv_handle *VAR_8 = FUNC_0(VAR_5, VAR_1);
    if (VAR_8) {
        VAR_6 = FUNC_4(VAR_8, &VAR_7, 0);
    } else {
        VAR_6 = -1;
        FUNC_5(VAR_4);
    }

    FUNC_3(&VAR_5->lock);

    return VAR_6;
}
