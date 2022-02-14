
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int next; int prev; } ;
struct p9_conn {int * client; int * wreq; int wq; int * rreq; int rq; TYPE_1__ mux_list; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct p9_conn*,int ) ;
 int FUNC_2 (int ,char*,struct p9_conn*,int ,int ) ;
 int FUNC_3 (struct p9_conn*) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct p9_conn *VAR_2)
{
 FUNC_2(VAR_1, "mux %p prev %p next %p\n",
   VAR_2, VAR_2->mux_list.prev, VAR_2->mux_list.next);

 FUNC_3(VAR_2);
 FUNC_0(&VAR_2->rq);
 if (VAR_2->rreq) {
  FUNC_4(VAR_2->rreq);
  VAR_2->rreq = ((void*)0);
 }
 FUNC_0(&VAR_2->wq);
 if (VAR_2->wreq) {
  FUNC_4(VAR_2->wreq);
  VAR_2->wreq = ((void*)0);
 }

 FUNC_1(VAR_2, -VAR_0);

 VAR_2->client = ((void*)0);
}
