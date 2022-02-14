
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct p9_req_t {scalar_t__ status; int req_list; } ;
struct p9_client {int lock; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,char*,struct p9_client*,struct p9_req_t*) ;
 int FUNC_2 (struct p9_req_t*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct p9_client *VAR_3, struct p9_req_t *VAR_4)
{
 int VAR_5 = 1;

 FUNC_1(VAR_0, "client %p req %p\n", VAR_3, VAR_4);

 FUNC_3(&VAR_3->lock);

 if (VAR_4->status == VAR_2) {
  FUNC_0(&VAR_4->req_list);
  VAR_4->status = VAR_1;
  FUNC_2(VAR_4);
  VAR_5 = 0;
 }
 FUNC_4(&VAR_3->lock);

 return VAR_5;
}
