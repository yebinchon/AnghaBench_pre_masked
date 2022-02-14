
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int proto; } ;
struct TYPE_6__ {int hEvent; } ;
struct TYPE_8__ {int buf_init; TYPE_2__ overlapped; } ;
struct TYPE_5__ {int write; int read; } ;
struct link_socket {TYPE_3__ info; int sockflags; int stream_buf_data; int stream_buf; TYPE_4__ reads; TYPE_4__ writes; TYPE_1__ rw_handle; } ;
struct frame {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,struct frame const*,int,int ) ;
 scalar_t__ FUNC_1 (struct link_socket*) ;
 int FUNC_2 (TYPE_4__*,struct frame const*,int ,int) ;
 int FUNC_3 (int *,int *,int ,int ) ;

__attribute__((used)) static void
FUNC_4(const struct frame *VAR_3, struct link_socket *VAR_4)
{







    if (FUNC_1(VAR_4))
    {






        FUNC_0(&VAR_4->stream_buf_data,
                           VAR_3,
                           0,
                           VAR_1);

        FUNC_3(&VAR_4->stream_buf,
                        &VAR_4->stream_buf_data,
                        VAR_4->sockflags,
                        VAR_4->info.proto);

    }
}
