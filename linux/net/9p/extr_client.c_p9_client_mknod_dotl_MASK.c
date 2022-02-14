
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct p9_req_t {int rc; } ;
struct p9_qid {int version; scalar_t__ path; int type; } ;
struct p9_fid {int fid; struct p9_client* clnt; } ;
struct p9_client {int proto_version; } ;
typedef int kgid_t ;
typedef int dev_t ;


 scalar_t__ FUNC_0 (struct p9_req_t*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (struct p9_req_t*) ;
 struct p9_req_t* FUNC_4 (struct p9_client*,int ,char*,int ,char const*,int,int ,int ,int ) ;
 int FUNC_5 (int ,char*,int ,...) ;
 int FUNC_6 (struct p9_client*,struct p9_req_t*) ;
 int FUNC_7 (int *,int ,char*,struct p9_qid*) ;
 int FUNC_8 (struct p9_client*,int *) ;

int FUNC_9(struct p9_fid *VAR_2, const char *VAR_3, int VAR_4,
   dev_t VAR_5, kgid_t VAR_6, struct p9_qid *VAR_7)
{
 int VAR_8;
 struct p9_client *VAR_9;
 struct p9_req_t *VAR_10;

 VAR_8 = 0;
 VAR_9 = VAR_2->clnt;
 FUNC_5(VAR_0, ">>> TMKNOD fid %d name %s mode %d major %d "
  "minor %d\n", VAR_2->fid, VAR_3, VAR_4, FUNC_1(VAR_5), FUNC_2(VAR_5));
 VAR_10 = FUNC_4(VAR_9, VAR_1, "dsdddg", VAR_2->fid, VAR_3, VAR_4,
  FUNC_1(VAR_5), FUNC_2(VAR_5), VAR_6);
 if (FUNC_0(VAR_10))
  return FUNC_3(VAR_10);

 VAR_8 = FUNC_7(&VAR_10->rc, VAR_9->proto_version, "Q", VAR_7);
 if (VAR_8) {
  FUNC_8(VAR_9, &VAR_10->rc);
  goto error;
 }
 FUNC_5(VAR_0, "<<< RMKNOD qid %x.%llx.%x\n", VAR_7->type,
    (unsigned long long)VAR_7->path, VAR_7->version);

error:
 FUNC_6(VAR_9, VAR_10);
 return VAR_8;

}
