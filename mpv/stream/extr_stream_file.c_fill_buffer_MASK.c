
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct priv {int fd; scalar_t__ orig_size; int appending; int cancel; scalar_t__ use_poll; scalar_t__ regular_file; } ;
struct pollfd {int fd; int events; int revents; } ;
struct TYPE_5__ {struct priv* priv; } ;
typedef TYPE_1__ stream_t ;
typedef scalar_t__ int64_t ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ,int ) ;
 int FUNC_4 (struct pollfd*,int,int) ;
 int FUNC_5 (int,void*,int) ;

__attribute__((used)) static int FUNC_6(stream_t *VAR_3, void *VAR_4, int VAR_5)
{
    struct priv *VAR_6 = VAR_3->priv;


    if (VAR_6->use_poll) {
        int VAR_7 = FUNC_2(VAR_6->cancel);
        struct pollfd VAR_8[2] = {
            {.fd = VAR_6->fd, .events = VAR_1},
            {.fd = VAR_7, .events = VAR_1},
        };
        FUNC_4(VAR_8, VAR_7 >= 0 ? 2 : 1, -1);
        if (VAR_8[1].revents & VAR_1)
            return -1;
    }


    for (int VAR_9 = 0; VAR_9 < VAR_0; VAR_9++) {
        int VAR_10 = FUNC_5(VAR_6->fd, VAR_4, VAR_5);
        if (VAR_10 > 0)
            return VAR_10;


        int64_t VAR_11 = FUNC_1(VAR_3);
        if (VAR_6->regular_file && VAR_11 > VAR_6->orig_size && !VAR_6->appending) {
            FUNC_0(VAR_3, "File is apparently being appended to, will keep "
                    "retrying with timeouts.\n");
            VAR_6->appending = 1;
        }

        if (!VAR_6->appending || VAR_6->use_poll)
            break;

        if (FUNC_3(VAR_6->cancel, VAR_2))
            break;
    }

    return 0;
}
