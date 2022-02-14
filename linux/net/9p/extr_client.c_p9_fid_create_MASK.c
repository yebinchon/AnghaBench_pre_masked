
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct p9_qid {int dummy; } ;
struct p9_fid {int mode; scalar_t__ fid; int * rdir; struct p9_client* clnt; int uid; int qid; } ;
struct p9_client {int lock; int fids; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 () ;
 int FUNC_1 (int *,struct p9_fid*,scalar_t__*,scalar_t__,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 () ;
 int FUNC_4 (struct p9_fid*) ;
 struct p9_fid* FUNC_5 (int,int ) ;
 int FUNC_6 (int *,int ,int) ;
 int FUNC_7 (int ,char*,struct p9_client*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static struct p9_fid *FUNC_10(struct p9_client *VAR_4)
{
 int VAR_5;
 struct p9_fid *VAR_6;

 FUNC_7(VAR_2, "clnt %p\n", VAR_4);
 VAR_6 = FUNC_5(sizeof(struct p9_fid), VAR_0);
 if (!VAR_6)
  return ((void*)0);

 FUNC_6(&VAR_6->qid, 0, sizeof(struct p9_qid));
 VAR_6->mode = -1;
 VAR_6->uid = FUNC_0();
 VAR_6->clnt = VAR_4;
 VAR_6->rdir = ((void*)0);
 VAR_6->fid = 0;

 FUNC_2(VAR_0);
 FUNC_8(&VAR_4->lock);
 VAR_5 = FUNC_1(&VAR_4->fids, VAR_6, &VAR_6->fid, VAR_3 - 1,
       VAR_1);
 FUNC_9(&VAR_4->lock);
 FUNC_3();

 if (!VAR_5)
  return VAR_6;

 FUNC_4(VAR_6);
 return ((void*)0);
}
