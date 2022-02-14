
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stream_open_args {char* url; int flags; struct priv* special_arg; int * sinfo; struct mp_cancel* cancel; struct mpv_global* global; } ;
struct stream {int dummy; } ;
struct priv {int num_streams; struct stream** streams; } ;
struct mpv_global {int dummy; } ;
struct mp_cancel {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct stream_open_args*,struct stream**) ;
 int VAR_2 ;

struct stream *FUNC_1(struct mpv_global *VAR_3, struct mp_cancel *VAR_4,
                                  struct stream **VAR_5, int VAR_6)
{

    struct priv VAR_7 = {
        .streams = VAR_5,
        .num_streams = VAR_6,
    };

    struct stream_open_args VAR_8 = {
        .global = VAR_3,
        .cancel = VAR_4,
        .url = "concat://",
        .flags = VAR_0 | VAR_1,
        .sinfo = &VAR_2,
        .special_arg = &VAR_7,
    };

    struct stream *VAR_9 = ((void*)0);
    FUNC_0(&VAR_8, &VAR_9);
    return VAR_9;
}
