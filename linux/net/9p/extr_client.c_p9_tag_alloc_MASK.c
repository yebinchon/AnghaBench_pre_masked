
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int tag; } ;
struct TYPE_5__ {int refcount; } ;
struct p9_req_t {TYPE_2__ rc; TYPE_2__ tc; TYPE_1__ refcount; int req_list; int wq; int status; scalar_t__ t_err; } ;
struct p9_client {int lock; int reqs; int msize; } ;
typedef scalar_t__ int8_t ;


 int VAR_0 ;
 struct p9_req_t* FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int *,struct p9_req_t*,scalar_t__,scalar_t__,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 () ;
 int FUNC_5 (int *) ;
 struct p9_req_t* FUNC_6 (int ,int ) ;
 int FUNC_7 (int ,struct p9_req_t*) ;
 int FUNC_8 (int ,unsigned int) ;
 int FUNC_9 (TYPE_2__*) ;
 scalar_t__ FUNC_10 (struct p9_client*,TYPE_2__*,int) ;
 int VAR_6 ;
 int FUNC_11 (TYPE_2__*) ;
 int FUNC_12 (int *,int) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;

__attribute__((used)) static struct p9_req_t *
FUNC_15(struct p9_client *VAR_7, int8_t VAR_8, unsigned int VAR_9)
{
 struct p9_req_t *VAR_10 = FUNC_6(VAR_6, VAR_1);
 int VAR_11 = FUNC_8(VAR_7->msize, VAR_9);
 int VAR_12;

 if (!VAR_10)
  return FUNC_0(-VAR_0);

 if (FUNC_10(VAR_7, &VAR_10->tc, VAR_11))
  goto free_req;
 if (FUNC_10(VAR_7, &VAR_10->rc, VAR_11))
  goto free;

 FUNC_11(&VAR_10->tc);
 FUNC_11(&VAR_10->rc);
 VAR_10->t_err = 0;
 VAR_10->status = VAR_5;
 FUNC_5(&VAR_10->wq);
 FUNC_1(&VAR_10->req_list);

 FUNC_3(VAR_1);
 FUNC_13(&VAR_7->lock);
 if (VAR_8 == VAR_4)
  VAR_12 = FUNC_2(&VAR_7->reqs, VAR_10, VAR_3, VAR_3 + 1,
    VAR_2);
 else
  VAR_12 = FUNC_2(&VAR_7->reqs, VAR_10, 0, VAR_3, VAR_2);
 VAR_10->tc.tag = VAR_12;
 FUNC_14(&VAR_7->lock);
 FUNC_4();
 if (VAR_12 < 0)
  goto free;
 FUNC_12(&VAR_10->refcount.refcount, 2);

 return VAR_10;

free:
 FUNC_9(&VAR_10->tc);
 FUNC_9(&VAR_10->rc);
free_req:
 FUNC_7(VAR_6, VAR_10);
 return FUNC_0(-VAR_0);
}
