
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int tag; } ;
struct p9_req_t {int status; TYPE_1__ tc; int wq; } ;
struct p9_client {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (struct p9_req_t*) ;
 int FUNC_2 () ;
 int FUNC_3 (int *) ;

void FUNC_4(struct p9_client *VAR_1, struct p9_req_t *VAR_2, int VAR_3)
{
 FUNC_0(VAR_0, " tag %d\n", VAR_2->tc.tag);





 FUNC_2();
 VAR_2->status = VAR_3;

 FUNC_3(&VAR_2->wq);
 FUNC_0(VAR_0, "wakeup: %d\n", VAR_2->tc.tag);
 FUNC_1(VAR_2);
}
