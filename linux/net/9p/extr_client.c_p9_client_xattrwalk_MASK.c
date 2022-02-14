
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct p9_req_t {int rc; } ;
struct p9_fid {int fid; struct p9_client* clnt; } ;
struct p9_client {int proto_version; } ;


 int VAR_0 ;
 struct p9_fid* FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct p9_req_t*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (struct p9_req_t*) ;
 int FUNC_3 (struct p9_fid*) ;
 struct p9_req_t* FUNC_4 (struct p9_client*,int ,char*,int ,int ,char const*) ;
 int FUNC_5 (int ,char*,int ,int ,...) ;
 struct p9_fid* FUNC_6 (struct p9_client*) ;
 int FUNC_7 (struct p9_fid*) ;
 int FUNC_8 (struct p9_client*,struct p9_req_t*) ;
 int FUNC_9 (int *,int ,char*,int *) ;
 int FUNC_10 (struct p9_client*,int *) ;

struct p9_fid *FUNC_11(struct p9_fid *VAR_3,
    const char *VAR_4, u64 *VAR_5)
{
 int VAR_6;
 struct p9_req_t *VAR_7;
 struct p9_client *VAR_8;
 struct p9_fid *VAR_9;

 VAR_6 = 0;
 VAR_8 = VAR_3->clnt;
 VAR_9 = FUNC_6(VAR_8);
 if (!VAR_9) {
  VAR_6 = -VAR_0;
  goto error;
 }
 FUNC_5(VAR_1,
  ">>> TXATTRWALK file_fid %d, attr_fid %d name %s\n",
  VAR_3->fid, VAR_9->fid, VAR_4);

 VAR_7 = FUNC_4(VAR_8, VAR_2, "dds",
   VAR_3->fid, VAR_9->fid, VAR_4);
 if (FUNC_1(VAR_7)) {
  VAR_6 = FUNC_2(VAR_7);
  goto error;
 }
 VAR_6 = FUNC_9(&VAR_7->rc, VAR_8->proto_version, "q", VAR_5);
 if (VAR_6) {
  FUNC_10(VAR_8, &VAR_7->rc);
  FUNC_8(VAR_8, VAR_7);
  goto clunk_fid;
 }
 FUNC_8(VAR_8, VAR_7);
 FUNC_5(VAR_1, "<<<  RXATTRWALK fid %d size %llu\n",
  VAR_9->fid, *VAR_5);
 return VAR_9;
clunk_fid:
 FUNC_3(VAR_9);
 VAR_9 = ((void*)0);
error:
 if (VAR_9 && (VAR_9 != VAR_3))
  FUNC_7(VAR_9);

 return FUNC_0(VAR_6);
}
