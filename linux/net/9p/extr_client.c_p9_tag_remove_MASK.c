
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_2__ {int tag; } ;
struct p9_req_t {TYPE_1__ tc; } ;
struct p9_client {int lock; int reqs; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int ,char*,struct p9_client*,struct p9_req_t*,int ) ;
 int FUNC_2 (struct p9_req_t*) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_5(struct p9_client *VAR_1, struct p9_req_t *VAR_2)
{
 unsigned long VAR_3;
 u16 VAR_4 = VAR_2->tc.tag;

 FUNC_1(VAR_0, "clnt %p req %p tag: %d\n", VAR_1, VAR_2, VAR_4);
 FUNC_3(&VAR_1->lock, VAR_3);
 FUNC_0(&VAR_1->reqs, VAR_4);
 FUNC_4(&VAR_1->lock, VAR_3);
 return FUNC_2(VAR_2);
}
