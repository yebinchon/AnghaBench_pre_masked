
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct TYPE_2__ {scalar_t__ tag; } ;
struct p9_req_t {TYPE_1__ tc; } ;
struct p9_client {int reqs; } ;


 struct p9_req_t* FUNC_0 (int *,scalar_t__) ;
 int FUNC_1 (struct p9_req_t*) ;
 int FUNC_2 (struct p9_req_t*) ;
 int FUNC_3 () ;
 int FUNC_4 () ;

struct p9_req_t *FUNC_5(struct p9_client *VAR_0, u16 VAR_1)
{
 struct p9_req_t *VAR_2;

 FUNC_3();
again:
 VAR_2 = FUNC_0(&VAR_0->reqs, VAR_1);
 if (VAR_2) {





  if (!FUNC_2(VAR_2))
   goto again;
  if (VAR_2->tc.tag != VAR_1) {
   FUNC_1(VAR_2);
   goto again;
  }
 }
 FUNC_4();

 return VAR_2;
}
