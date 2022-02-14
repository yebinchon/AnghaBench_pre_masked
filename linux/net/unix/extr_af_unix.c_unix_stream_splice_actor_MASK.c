
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct unix_stream_read_state {int splice_flags; int pipe; TYPE_1__* socket; } ;
struct sk_buff {int dummy; } ;
struct TYPE_4__ {scalar_t__ consumed; } ;
struct TYPE_3__ {int sk; } ;


 TYPE_2__ FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (struct sk_buff*,int ,scalar_t__,int ,int,int ) ;

__attribute__((used)) static int FUNC_2(struct sk_buff *VAR_0,
        int VAR_1, int VAR_2,
        struct unix_stream_read_state *VAR_3)
{
 return FUNC_1(VAR_0, VAR_3->socket->sk,
          FUNC_0(VAR_0).consumed + VAR_1,
          VAR_3->pipe, VAR_2, VAR_3->splice_flags);
}
