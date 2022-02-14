
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct unix_stream_read_state {int msg; } ;
struct sk_buff {int dummy; } ;
struct TYPE_2__ {scalar_t__ consumed; } ;


 TYPE_1__ FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (struct sk_buff*,scalar_t__,int ,int) ;

__attribute__((used)) static int FUNC_2(struct sk_buff *VAR_0,
      int VAR_1, int VAR_2,
      struct unix_stream_read_state *VAR_3)
{
 int VAR_4;

 VAR_4 = FUNC_1(VAR_0, FUNC_0(VAR_0).consumed + VAR_1,
        VAR_3->msg, VAR_2);
 return VAR_4 ?: VAR_2;
}
