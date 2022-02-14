
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
 int FUNC_2 (int *,int ) ;
 int VAR_2 ;
 struct p9_req_t* FUNC_3 (struct p9_client*,int ,char*,int ,char const*,int,int ) ;
 int FUNC_4 (int ,char*,int ,...) ;
 int FUNC_5 (struct p9_client*,struct p9_req_t*) ;
 int FUNC_6 (int *,int ,char*,struct p9_qid*) ;
 int FUNC_7 (struct p9_client*,int *) ;

int FUNC_8(struct p9_fid *VAR_3, const char *VAR_4, int VAR_5,
    kgid_t VAR_6, struct p9_qid *VAR_7)
{
 int VAR_8;
 struct p9_client *VAR_9;
 struct p9_req_t *VAR_10;

 VAR_8 = 0;
 VAR_9 = VAR_3->clnt;
 FUNC_4(VAR_0, ">>> TMKDIR fid %d name %s mode %d gid %d\n",
   VAR_3->fid, VAR_4, VAR_5, FUNC_2(&VAR_2, VAR_6));
 VAR_10 = FUNC_3(VAR_9, VAR_1, "dsdg", VAR_3->fid, VAR_4, VAR_5,
  VAR_6);
 if (FUNC_0(VAR_10))
  return FUNC_1(VAR_10);

 VAR_8 = FUNC_6(&VAR_10->rc, VAR_9->proto_version, "Q", VAR_7);
 if (VAR_8) {
  FUNC_7(VAR_9, &VAR_10->rc);
  goto error;
 }
 FUNC_4(VAR_0, "<<< RMKDIR qid %x.%llx.%x\n", VAR_7->type,
    (unsigned long long)VAR_7->path, VAR_7->version);

error:
 FUNC_5(VAR_9, VAR_10);
 return VAR_8;

}
