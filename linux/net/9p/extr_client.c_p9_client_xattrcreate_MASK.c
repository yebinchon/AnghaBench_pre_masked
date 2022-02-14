
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct p9_req_t {int dummy; } ;
struct p9_fid {int fid; struct p9_client* clnt; } ;
struct p9_client {int dummy; } ;


 scalar_t__ FUNC_0 (struct p9_req_t*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct p9_req_t*) ;
 struct p9_req_t* FUNC_2 (struct p9_client*,int ,char*,int ,char const*,scalar_t__,int) ;
 int FUNC_3 (int ,char*,int ,...) ;
 int FUNC_4 (struct p9_client*,struct p9_req_t*) ;

int FUNC_5(struct p9_fid *VAR_2, const char *VAR_3,
   u64 VAR_4, int VAR_5)
{
 int VAR_6;
 struct p9_req_t *VAR_7;
 struct p9_client *VAR_8;

 FUNC_3(VAR_0,
  ">>> TXATTRCREATE fid %d name  %s size %lld flag %d\n",
  VAR_2->fid, VAR_3, (long long)VAR_4, VAR_5);
 VAR_6 = 0;
 VAR_8 = VAR_2->clnt;
 VAR_7 = FUNC_2(VAR_8, VAR_1, "dsqd",
   VAR_2->fid, VAR_3, VAR_4, VAR_5);
 if (FUNC_0(VAR_7)) {
  VAR_6 = FUNC_1(VAR_7);
  goto error;
 }
 FUNC_3(VAR_0, "<<< RXATTRCREATE fid %d\n", VAR_2->fid);
 FUNC_4(VAR_8, VAR_7);
error:
 return VAR_6;
}
