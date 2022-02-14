
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct p9_req_t {int rc; } ;
struct p9_fid {char* fid; struct p9_client* clnt; } ;
struct p9_client {int proto_version; } ;


 scalar_t__ FUNC_0 (struct p9_req_t*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct p9_req_t*) ;
 struct p9_req_t* FUNC_2 (struct p9_client*,int ,char*,char*) ;
 int FUNC_3 (int ,char*,char*) ;
 int FUNC_4 (struct p9_client*,struct p9_req_t*) ;
 int FUNC_5 (int *,int ,char*,char**) ;
 int FUNC_6 (struct p9_client*,int *) ;

int FUNC_7(struct p9_fid *VAR_2, char **VAR_3)
{
 int VAR_4;
 struct p9_client *VAR_5;
 struct p9_req_t *VAR_6;

 VAR_4 = 0;
 VAR_5 = VAR_2->clnt;
 FUNC_3(VAR_0, ">>> TREADLINK fid %d\n", VAR_2->fid);

 VAR_6 = FUNC_2(VAR_5, VAR_1, "d", VAR_2->fid);
 if (FUNC_0(VAR_6))
  return FUNC_1(VAR_6);

 VAR_4 = FUNC_5(&VAR_6->rc, VAR_5->proto_version, "s", VAR_3);
 if (VAR_4) {
  FUNC_6(VAR_5, &VAR_6->rc);
  goto error;
 }
 FUNC_3(VAR_0, "<<< RREADLINK target %s\n", *VAR_3);
error:
 FUNC_4(VAR_5, VAR_6);
 return VAR_4;
}
