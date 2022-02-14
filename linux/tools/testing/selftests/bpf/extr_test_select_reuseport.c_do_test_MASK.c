
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int u32; } ;
struct epoll_event {TYPE_1__ data; } ;
struct cmd {int reuseport_index; int pass_on_failure; } ;
typedef int ssize_t ;
typedef int sa_family_t ;
typedef int rcv_cmd ;
typedef enum result { ____Placeholder_result } result ;


 int FUNC_0 (int,char*,char*,size_t,int,int,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int,int *,int ) ;
 int FUNC_2 (int,int ,struct cmd*,int) ;
 int FUNC_3 () ;
 int FUNC_4 (int) ;
 int VAR_4 ;
 int FUNC_5 (int ,struct epoll_event*,int,int) ;
 int VAR_5 ;
 int FUNC_6 (int,struct cmd*,int,int ) ;
 int FUNC_7 (int,int ,struct cmd*,int,int) ;
 int* VAR_6 ;

__attribute__((used)) static void FUNC_8(int VAR_7, sa_family_t VAR_8, struct cmd *VAR_9,
      enum result VAR_10)
{
 int VAR_11, VAR_12, VAR_13;
 struct epoll_event VAR_14;
 struct cmd VAR_15;
 ssize_t VAR_16;

 VAR_13 = FUNC_7(VAR_7, VAR_8, VAR_9, VAR_9 ? sizeof(*VAR_9) : 0,
      VAR_10);
 VAR_11 = FUNC_5(VAR_4, &VAR_14, 1, VAR_10 >= VAR_1 ? 5 : 0);
 FUNC_0((VAR_11 <= 0 && VAR_10 >= VAR_1) ||
       (VAR_11 > 0 && VAR_10 < VAR_1),
       "nev <> expected",
       "nev:%d expected:%d type:%d family:%d data:(%d, %d)\n",
       VAR_11, VAR_10, VAR_7, VAR_8,
       VAR_9 ? VAR_9->reuseport_index : -1,
       VAR_9 ? VAR_9->pass_on_failure : -1);
 FUNC_3();
 FUNC_2(VAR_7, VAR_8, VAR_9, VAR_13);

 if (VAR_10 < VAR_1)
  return;

 FUNC_0(VAR_10 != VAR_2 &&
       VAR_9->reuseport_index != VAR_14.data.u32,
       "check cmd->reuseport_index",
       "cmd:(%u, %u) ev.data.u32:%u\n",
       VAR_9->pass_on_failure, VAR_9->reuseport_index, VAR_14.data.u32);

 VAR_12 = VAR_6[VAR_14.data.u32];
 if (VAR_7 == VAR_3) {
  int VAR_17 = FUNC_1(VAR_12, ((void*)0), 0);

  FUNC_0(VAR_17 == -1, "accept(srv_fd)",
        "ev.data.u32:%u new_fd:%d errno:%d\n",
        VAR_14.data.u32, VAR_17, VAR_5);

  VAR_16 = FUNC_6(VAR_17, &VAR_15, sizeof(VAR_15), VAR_0);
  FUNC_0(VAR_16 != sizeof(VAR_15),
        "recv(new_fd)",
        "ev.data.u32:%u nread:%zd sizeof(rcv_cmd):%zu errno:%d\n",
        VAR_14.data.u32, VAR_16, sizeof(VAR_15), VAR_5);

  FUNC_4(VAR_17);
 } else {
  VAR_16 = FUNC_6(VAR_12, &VAR_15, sizeof(VAR_15), VAR_0);
  FUNC_0(VAR_16 != sizeof(VAR_15),
        "recv(sk_fds)",
        "ev.data.u32:%u nread:%zd sizeof(rcv_cmd):%zu errno:%d\n",
        VAR_14.data.u32, VAR_16, sizeof(VAR_15), VAR_5);
 }

 FUNC_4(VAR_13);
}
