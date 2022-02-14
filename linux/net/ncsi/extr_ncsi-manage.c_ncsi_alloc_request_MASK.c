
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ncsi_request {int used; unsigned int flags; } ;
struct ncsi_dev_priv {int request_id; int lock; struct ncsi_request* requests; } ;


 int FUNC_0 (struct ncsi_request*) ;
 int VAR_0 ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

struct ncsi_request *FUNC_3(struct ncsi_dev_priv *VAR_1,
     unsigned int VAR_2)
{
 struct ncsi_request *VAR_3 = ((void*)0);
 int VAR_4, VAR_5 = FUNC_0(VAR_1->requests);
 unsigned long VAR_6;


 FUNC_1(&VAR_1->lock, VAR_6);
 for (VAR_4 = VAR_1->request_id; VAR_4 < VAR_5; VAR_4++) {
  if (VAR_1->requests[VAR_4].used)
   continue;

  VAR_3 = &VAR_1->requests[VAR_4];
  VAR_3->used = 1;
  VAR_3->flags = VAR_2;
  VAR_1->request_id = VAR_4 + 1;
  goto found;
 }


 for (VAR_4 = VAR_0; VAR_4 < VAR_1->request_id; VAR_4++) {
  if (VAR_1->requests[VAR_4].used)
   continue;

  VAR_3 = &VAR_1->requests[VAR_4];
  VAR_3->used = 1;
  VAR_3->flags = VAR_2;
  VAR_1->request_id = VAR_4 + 1;
  goto found;
 }

found:
 FUNC_2(&VAR_1->lock, VAR_6);
 return VAR_3;
}
