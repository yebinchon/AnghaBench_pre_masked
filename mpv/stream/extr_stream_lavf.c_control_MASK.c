
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct stream_avseek {int flags; int timestamp; int stream_index; } ;
struct mp_tags {int dummy; } ;
struct TYPE_11__ {TYPE_3__* priv; } ;
typedef TYPE_2__ stream_t ;
typedef int int64_t ;
struct TYPE_13__ {char* (* item_name ) (void*) ;} ;
struct TYPE_12__ {int read_seek; TYPE_1__* av_class; } ;
struct TYPE_10__ {void* (* child_next ) (TYPE_3__*,int *) ;} ;
typedef TYPE_3__ AVIOContext ;
typedef TYPE_4__ AVClass ;





 int VAR_0 ;
 int FUNC_0 (TYPE_3__*,int ,int ,int ) ;
 struct mp_tags* FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (char const*,char const* const) ;
 int FUNC_3 (TYPE_2__*) ;
 void* FUNC_4 (TYPE_3__*,int *) ;
 char* FUNC_5 (void*) ;

__attribute__((used)) static int FUNC_6(stream_t *VAR_1, int VAR_2, void *VAR_3)
{
    AVIOContext *VAR_4 = VAR_1->priv;
    switch(VAR_2) {
    case 130: {
        struct stream_avseek *VAR_5 = VAR_3;
        int64_t VAR_6 = FUNC_0(VAR_4, VAR_5->stream_index, VAR_5->timestamp, VAR_5->flags);
        if (VAR_6 >= 0) {
            FUNC_3(VAR_1);
            return 1;
        }
        break;
    }
    case 128: {






        const char *VAR_7 = ((void*)0);
        if (VAR_4->av_class && VAR_4->av_class->child_next) {


            void *VAR_8 = VAR_4->av_class->child_next(VAR_4, ((void*)0));
            AVClass *VAR_9 = *(AVClass **)VAR_8;
            if (VAR_9 && VAR_9->item_name)
                VAR_7 = VAR_9->item_name(VAR_8);
        }
        static const char *const VAR_10[] = {
            "rtmp", "rtmpt", "rtmpe", "rtmpte", "rtmps", "rtmpts", "mmsh", 0};
        for (int VAR_11 = 0; VAR_10[VAR_11]; VAR_11++) {
            if (VAR_4->read_seek && VAR_7 && FUNC_2(VAR_7, VAR_10[VAR_11]) == 0)
                return 1;
        }
        break;
    }
    case 129: {
        *(struct mp_tags **)VAR_3 = FUNC_1(VAR_1);
        if (!*(struct mp_tags **)VAR_3)
            break;
        return 1;
    }
    }
    return VAR_0;
}
