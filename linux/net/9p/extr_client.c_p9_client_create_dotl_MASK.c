
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct p9_req_t {int rc; } ;
struct p9_qid {int version; scalar_t__ path; int type; } ;
struct p9_fid {int mode; int iounit; int fid; struct p9_client* clnt; } ;
struct p9_client {int proto_version; } ;
typedef int kgid_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct p9_req_t*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct p9_req_t*) ;
 int FUNC_2 (int *,int ) ;
 int VAR_3 ;
 struct p9_req_t* FUNC_3 (struct p9_client*,int ,char*,int ,char const*,int,int,int ) ;
 int FUNC_4 (int ,char*,int ,...) ;
 int FUNC_5 (struct p9_client*,struct p9_req_t*) ;
 int FUNC_6 (int *,int ,char*,struct p9_qid*,int*) ;
 int FUNC_7 (struct p9_client*,int *) ;

int FUNC_8(struct p9_fid *VAR_4, const char *VAR_5, u32 VAR_6, u32 VAR_7,
  kgid_t VAR_8, struct p9_qid *VAR_9)
{
 int VAR_10 = 0;
 struct p9_client *VAR_11;
 struct p9_req_t *VAR_12;
 int VAR_13;

 FUNC_4(VAR_1,
   ">>> TLCREATE fid %d name %s flags %d mode %d gid %d\n",
   VAR_4->fid, VAR_5, VAR_6, VAR_7,
    FUNC_2(&VAR_3, VAR_8));
 VAR_11 = VAR_4->clnt;

 if (VAR_4->mode != -1)
  return -VAR_0;

 VAR_12 = FUNC_3(VAR_11, VAR_2, "dsddg", VAR_4->fid, VAR_5, VAR_6,
   VAR_7, VAR_8);
 if (FUNC_0(VAR_12)) {
  VAR_10 = FUNC_1(VAR_12);
  goto error;
 }

 VAR_10 = FUNC_6(&VAR_12->rc, VAR_11->proto_version, "Qd", VAR_9, &VAR_13);
 if (VAR_10) {
  FUNC_7(VAR_11, &VAR_12->rc);
  goto free_and_error;
 }

 FUNC_4(VAR_1, "<<< RLCREATE qid %x.%llx.%x iounit %x\n",
   VAR_9->type,
   (unsigned long long)VAR_9->path,
   VAR_9->version, VAR_13);

 VAR_4->mode = VAR_7;
 VAR_4->iounit = VAR_13;

free_and_error:
 FUNC_5(VAR_11, VAR_12);
error:
 return VAR_10;
}
