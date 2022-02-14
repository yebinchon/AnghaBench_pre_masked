
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct tcphdr {scalar_t__ rst; scalar_t__ ack; scalar_t__ fin; scalar_t__ syn; } ;
struct ip_vs_proto_data {int * timeout_table; TYPE_2__* pp; TYPE_1__* tcp_state_table; } ;
struct ip_vs_dest {int inactconns; int activeconns; } ;
struct ip_vs_conn {int flags; size_t state; int timeout; int refcnt; int cport; int caddr; int af; int dport; int daddr; int daf; struct ip_vs_dest* dest; } ;
struct TYPE_4__ {int name; } ;
struct TYPE_3__ {int* next_state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,char*,int) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int,char*,int ,char*,char,float,char,char,int ,int ,int ,int ,int ,int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct ip_vs_conn*) ;
 scalar_t__ FUNC_6 (struct ip_vs_proto_data*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (int) ;
 int FUNC_10 (struct tcphdr*) ;
 int FUNC_11 (int) ;
 int* VAR_6 ;
 int * VAR_7 ;

__attribute__((used)) static inline void
FUNC_12(struct ip_vs_proto_data *VAR_8, struct ip_vs_conn *VAR_9,
       int VAR_10, struct tcphdr *VAR_11)
{
 int VAR_12;
 int VAR_13 = VAR_2;
 int VAR_14 = VAR_6[VAR_10];





 if (VAR_9->flags & VAR_1) {
  if (VAR_14 == VAR_5)
   VAR_9->flags &= ~VAR_1;
  else
   VAR_14 = VAR_4;
 }

 if ((VAR_12 = FUNC_10(VAR_11)) < 0) {
  FUNC_0(8, "tcp_state_idx=%d!!!\n", VAR_12);
  goto tcp_state_out;
 }

 VAR_13 =
  VAR_8->tcp_state_table[VAR_14+VAR_12].next_state[VAR_9->state];

  tcp_state_out:
 if (VAR_13 != VAR_9->state) {
  struct ip_vs_dest *VAR_15 = VAR_9->dest;

  FUNC_2(8, "%s %s [%c%c%c%c] %s:%d->"
         "%s:%d state: %s->%s conn->refcnt:%d\n",
         VAR_8->pp->name,
         ((VAR_14 == VAR_5) ?
          "output " : "input "),
         VAR_11->syn ? 'S' : '.',
         VAR_11->fin ? 'F' : '.',
         VAR_11->ack ? 'A' : '.',
         VAR_11->rst ? 'R' : '.',
         FUNC_1(VAR_9->daf, &VAR_9->daddr),
         FUNC_7(VAR_9->dport),
         FUNC_1(VAR_9->af, &VAR_9->caddr),
         FUNC_7(VAR_9->cport),
         FUNC_11(VAR_9->state),
         FUNC_11(VAR_13),
         FUNC_8(&VAR_9->refcnt));

  if (VAR_15) {
   if (!(VAR_9->flags & VAR_0) &&
       !FUNC_9(VAR_13)) {
    FUNC_3(&VAR_15->activeconns);
    FUNC_4(&VAR_15->inactconns);
    VAR_9->flags |= VAR_0;
   } else if ((VAR_9->flags & VAR_0) &&
       FUNC_9(VAR_13)) {
    FUNC_4(&VAR_15->activeconns);
    FUNC_3(&VAR_15->inactconns);
    VAR_9->flags &= ~VAR_0;
   }
  }
  if (VAR_13 == VAR_3)
   FUNC_5(VAR_9);
 }

 if (FUNC_6(VAR_8))
  VAR_9->timeout = VAR_8->timeout_table[VAR_9->state = VAR_13];
 else
  VAR_9->timeout = VAR_7[VAR_9->state = VAR_13];
}
