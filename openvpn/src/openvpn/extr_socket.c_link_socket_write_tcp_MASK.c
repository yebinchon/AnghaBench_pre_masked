
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct link_socket_actual {int dummy; } ;
struct TYPE_2__ {scalar_t__ maxlen; } ;
struct link_socket {TYPE_1__ stream_buf; } ;
struct buffer {int offset; } ;
typedef scalar_t__ packet_size_type ;
typedef int len ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct buffer*) ;
 int VAR_0 ;
 int FUNC_2 (struct buffer*,scalar_t__*,int) ;
 int FUNC_3 (int ,char*,int,int ) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 int FUNC_5 (struct link_socket*,struct buffer*,struct link_socket_actual*) ;
 int FUNC_6 (struct link_socket*,struct buffer*,struct link_socket_actual*) ;

int
FUNC_7(struct link_socket *VAR_1,
                      struct buffer *VAR_2,
                      struct link_socket_actual *VAR_3)
{
    packet_size_type VAR_4 = FUNC_1(VAR_2);
    FUNC_3(VAR_0, "STREAM: WRITE %d offset=%d", (int)VAR_4, VAR_2->offset);
    FUNC_0(VAR_4 <= VAR_1->stream_buf.maxlen);
    VAR_4 = FUNC_4(VAR_4);
    FUNC_0(FUNC_2(VAR_2, &VAR_4, sizeof(VAR_4)));



    return FUNC_5(VAR_1, VAR_2, VAR_3);

}
