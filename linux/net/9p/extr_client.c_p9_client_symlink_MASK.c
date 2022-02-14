
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct p9_req_t {int rc; } ;
struct p9_qid {int version; scalar_t__ path; int type; } ;
struct p9_fid {int fid; struct p9_client* clnt; } ;
struct p9_client {int proto_version; } ;
typedef int kgid_t ;


 scalar_t__ FUNC_0 (struct p9_req_t*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct p9_req_t*) ;
 struct p9_req_t* FUNC_2 (struct p9_client*,int ,char*,int ,char const*,char const*,int ) ;
 int FUNC_3 (int ,char*,int ,...) ;
 int FUNC_4 (struct p9_client*,struct p9_req_t*) ;
 int FUNC_5 (int *,int ,char*,struct p9_qid*) ;
 int FUNC_6 (struct p9_client*,int *) ;

int FUNC_7(struct p9_fid *VAR_2, const char *VAR_3,
  const char *VAR_4, kgid_t VAR_5, struct p9_qid *VAR_6)
{
 int VAR_7 = 0;
 struct p9_client *VAR_8;
 struct p9_req_t *VAR_9;

 FUNC_3(VAR_0, ">>> TSYMLINK dfid %d name %s  symtgt %s\n",
   VAR_2->fid, VAR_3, VAR_4);
 VAR_8 = VAR_2->clnt;

 VAR_9 = FUNC_2(VAR_8, VAR_1, "dssg", VAR_2->fid, VAR_3, VAR_4,
   VAR_5);
 if (FUNC_0(VAR_9)) {
  VAR_7 = FUNC_1(VAR_9);
  goto error;
 }

 VAR_7 = FUNC_5(&VAR_9->rc, VAR_8->proto_version, "Q", VAR_6);
 if (VAR_7) {
  FUNC_6(VAR_8, &VAR_9->rc);
  goto free_and_error;
 }

 FUNC_3(VAR_0, "<<< RSYMLINK qid %x.%llx.%x\n",
   VAR_6->type, (unsigned long long)VAR_6->path, VAR_6->version);

free_and_error:
 FUNC_4(VAR_8, VAR_9);
error:
 return VAR_7;
}
