
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mpv_event {int event_id; void* data; } ;
struct MPContext {int dummy; } ;


 int FUNC_0 (struct mpv_event*) ;
 int FUNC_1 (struct MPContext*,int,void*) ;
 int FUNC_2 (struct MPContext*,char const*,int ,int,void*) ;

int FUNC_3(struct MPContext *VAR_0, const char *VAR_1,
                             int VAR_2, void *VAR_3)
{
    if (!VAR_1) {
        FUNC_1(VAR_0, VAR_2, VAR_3);
        return 0;
    }

    struct mpv_event VAR_4 = {
        .event_id = VAR_2,
        .data = VAR_3,
    };

    FUNC_0(&VAR_4);
    return FUNC_2(VAR_0, VAR_1, 0, VAR_2, VAR_4.data);
}
