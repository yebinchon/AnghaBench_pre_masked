
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct p9_req_t {int rc; } ;
struct p9_qid {int version; scalar_t__ path; int type; } ;
struct p9_fid {int mode; int iounit; int fid; struct p9_client* clnt; } ;
struct p9_client {int proto_version; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct p9_req_t*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct p9_req_t*) ;
 struct p9_req_t* FUNC_2 (struct p9_client*,int ,char*,int ,char const*,int ,int,char*) ;
 int FUNC_3 (int ,char*,int ,...) ;
 int FUNC_4 (struct p9_client*,struct p9_req_t*) ;
 int FUNC_5 (int *,int ,char*,struct p9_qid*,int*) ;
 int FUNC_6 (struct p9_client*,int *) ;

int FUNC_7(struct p9_fid *VAR_3, const char *VAR_4, u32 VAR_5, int VAR_6,
       char *VAR_7)
{
 int VAR_8;
 struct p9_client *VAR_9;
 struct p9_req_t *VAR_10;
 struct p9_qid VAR_11;
 int VAR_12;

 FUNC_3(VAR_1, ">>> TCREATE fid %d name %s perm %d mode %d\n",
      VAR_3->fid, VAR_4, VAR_5, VAR_6);
 VAR_8 = 0;
 VAR_9 = VAR_3->clnt;

 if (VAR_3->mode != -1)
  return -VAR_0;

 VAR_10 = FUNC_2(VAR_9, VAR_2, "dsdb?s", VAR_3->fid, VAR_4, VAR_5,
    VAR_6, VAR_7);
 if (FUNC_0(VAR_10)) {
  VAR_8 = FUNC_1(VAR_10);
  goto error;
 }

 VAR_8 = FUNC_5(&VAR_10->rc, VAR_9->proto_version, "Qd", &VAR_11, &VAR_12);
 if (VAR_8) {
  FUNC_6(VAR_9, &VAR_10->rc);
  goto free_and_error;
 }

 FUNC_3(VAR_1, "<<< RCREATE qid %x.%llx.%x iounit %x\n",
    VAR_11.type,
    (unsigned long long)VAR_11.path,
    VAR_11.version, VAR_12);

 VAR_3->mode = VAR_6;
 VAR_3->iounit = VAR_12;

free_and_error:
 FUNC_4(VAR_9, VAR_10);
error:
 return VAR_8;
}
