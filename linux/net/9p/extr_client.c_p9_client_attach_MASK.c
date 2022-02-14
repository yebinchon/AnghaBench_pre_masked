
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct p9_req_t {int rc; } ;
struct p9_qid {int version; scalar_t__ path; int type; } ;
struct p9_fid {int fid; int qid; int uid; } ;
struct p9_client {int proto_version; } ;
typedef int kuid_t ;


 int VAR_0 ;
 struct p9_fid* FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct p9_req_t*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (struct p9_req_t*) ;
 int FUNC_3 (int *,struct p9_qid*,int) ;
 struct p9_req_t* FUNC_4 (struct p9_client*,int ,char*,int,int,char const*,char const*,int ) ;
 int FUNC_5 (int ,char*,int,...) ;
 struct p9_fid* FUNC_6 (struct p9_client*) ;
 int FUNC_7 (struct p9_fid*) ;
 int FUNC_8 (struct p9_client*,struct p9_req_t*) ;
 int FUNC_9 (int *,int ,char*,struct p9_qid*) ;
 int FUNC_10 (struct p9_client*,int *) ;

struct p9_fid *FUNC_11(struct p9_client *VAR_4, struct p9_fid *VAR_5,
 const char *VAR_6, kuid_t VAR_7, const char *VAR_8)
{
 int VAR_9 = 0;
 struct p9_req_t *VAR_10;
 struct p9_fid *VAR_11;
 struct p9_qid VAR_12;


 FUNC_5(VAR_1, ">>> TATTACH afid %d uname %s aname %s\n",
   VAR_5 ? VAR_5->fid : -1, VAR_6, VAR_8);
 VAR_11 = FUNC_6(VAR_4);
 if (!VAR_11) {
  VAR_9 = -VAR_0;
  goto error;
 }
 VAR_11->uid = VAR_7;

 VAR_10 = FUNC_4(VAR_4, VAR_3, "ddss?u", VAR_11->fid,
   VAR_5 ? VAR_5->fid : VAR_2, VAR_6, VAR_8, VAR_7);
 if (FUNC_1(VAR_10)) {
  VAR_9 = FUNC_2(VAR_10);
  goto error;
 }

 VAR_9 = FUNC_9(&VAR_10->rc, VAR_4->proto_version, "Q", &VAR_12);
 if (VAR_9) {
  FUNC_10(VAR_4, &VAR_10->rc);
  FUNC_8(VAR_4, VAR_10);
  goto error;
 }

 FUNC_5(VAR_1, "<<< RATTACH qid %x.%llx.%x\n",
   VAR_12.type, (unsigned long long)VAR_12.path, VAR_12.version);

 FUNC_3(&VAR_11->qid, &VAR_12, sizeof(struct p9_qid));

 FUNC_8(VAR_4, VAR_10);
 return VAR_11;

error:
 if (VAR_11)
  FUNC_7(VAR_11);
 return FUNC_0(VAR_9);
}
