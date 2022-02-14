
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct p9_req_t {int req_list; } ;
struct p9_client {int lock; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,char*,struct p9_client*,struct p9_req_t*) ;
 int FUNC_2 (struct p9_req_t*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct p9_client *VAR_1, struct p9_req_t *VAR_2)
{
 FUNC_1(VAR_0, "client %p req %p\n", VAR_1, VAR_2);




 FUNC_3(&VAR_1->lock);
 FUNC_0(&VAR_2->req_list);
 FUNC_4(&VAR_1->lock);
 FUNC_2(VAR_2);

 return 0;
}
