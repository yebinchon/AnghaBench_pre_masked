
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stream_open_args {int flags; char const* url; struct mp_cancel* cancel; struct mpv_global* global; } ;
struct stream {int dummy; } ;
struct mpv_global {int dummy; } ;
struct mp_cancel {int dummy; } ;


 int FUNC_0 (struct stream_open_args*,struct stream**) ;

struct stream *FUNC_1(const char *VAR_0, int VAR_1,
                             struct mp_cancel *VAR_2, struct mpv_global *VAR_3)
{
    struct stream_open_args VAR_4 = {
        .global = VAR_3,
        .cancel = VAR_2,
        .flags = VAR_1,
        .url = VAR_0,
    };
    struct stream *VAR_5;
    FUNC_0(&VAR_4, &VAR_5);
    return VAR_5;
}
