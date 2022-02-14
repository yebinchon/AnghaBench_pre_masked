
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sh_stream {TYPE_2__* ds; } ;
struct mp_recorder {int dummy; } ;
struct demux_internal {int num_streams; TYPE_1__* d_thread; struct sh_stream** streams; } ;
struct TYPE_4__ {scalar_t__ selected; } ;
struct TYPE_3__ {int global; } ;


 int FUNC_0 (int *,struct sh_stream**,int,struct sh_stream*) ;
 struct mp_recorder* FUNC_1 (int ,char const*,struct sh_stream**,int) ;
 int FUNC_2 (struct sh_stream**) ;

__attribute__((used)) static struct mp_recorder *FUNC_3(struct demux_internal *VAR_0,
                                           const char *VAR_1)
{
    struct sh_stream **VAR_2 = ((void*)0);
    int VAR_3 = 0;
    for (int VAR_4 = 0; VAR_4 < VAR_0->num_streams; VAR_4++) {
        struct sh_stream *VAR_5 = VAR_0->streams[VAR_4];
        if (VAR_5->ds->selected)
            FUNC_0(((void*)0), VAR_2, VAR_3, VAR_5);
    }
    struct mp_recorder *VAR_6 = FUNC_1(VAR_0->d_thread->global, VAR_1,
                                                 VAR_2, VAR_3);
    FUNC_2(VAR_2);
    return VAR_6;
}
