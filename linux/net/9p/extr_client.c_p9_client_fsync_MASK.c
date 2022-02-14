
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct p9_req_t {int dummy; } ;
struct p9_fid {int fid; struct p9_client* clnt; } ;
struct p9_client {int dummy; } ;


 scalar_t__ FUNC_0 (struct p9_req_t*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct p9_req_t*) ;
 struct p9_req_t* FUNC_2 (struct p9_client*,int ,char*,int ,int) ;
 int FUNC_3 (int ,char*,int ,...) ;
 int FUNC_4 (struct p9_client*,struct p9_req_t*) ;

int FUNC_5(struct p9_fid *VAR_2, int VAR_3)
{
 int VAR_4;
 struct p9_client *VAR_5;
 struct p9_req_t *VAR_6;

 FUNC_3(VAR_0, ">>> TFSYNC fid %d datasync:%d\n",
   VAR_2->fid, VAR_3);
 VAR_4 = 0;
 VAR_5 = VAR_2->clnt;

 VAR_6 = FUNC_2(VAR_5, VAR_1, "dd", VAR_2->fid, VAR_3);
 if (FUNC_0(VAR_6)) {
  VAR_4 = FUNC_1(VAR_6);
  goto error;
 }

 FUNC_3(VAR_0, "<<< RFSYNC fid %d\n", VAR_2->fid);

 FUNC_4(VAR_5, VAR_6);

error:
 return VAR_4;
}
