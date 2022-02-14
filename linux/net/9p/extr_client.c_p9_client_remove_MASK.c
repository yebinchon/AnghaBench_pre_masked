
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct p9_req_t {int dummy; } ;
struct p9_fid {int fid; struct p9_client* clnt; } ;
struct p9_client {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct p9_req_t*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct p9_req_t*) ;
 int FUNC_2 (struct p9_fid*) ;
 struct p9_req_t* FUNC_3 (struct p9_client*,int ,char*,int ) ;
 int FUNC_4 (int ,char*,int ) ;
 int FUNC_5 (struct p9_fid*) ;
 int FUNC_6 (struct p9_client*,struct p9_req_t*) ;

int FUNC_7(struct p9_fid *VAR_3)
{
 int VAR_4;
 struct p9_client *VAR_5;
 struct p9_req_t *VAR_6;

 FUNC_4(VAR_1, ">>> TREMOVE fid %d\n", VAR_3->fid);
 VAR_4 = 0;
 VAR_5 = VAR_3->clnt;

 VAR_6 = FUNC_3(VAR_5, VAR_2, "d", VAR_3->fid);
 if (FUNC_0(VAR_6)) {
  VAR_4 = FUNC_1(VAR_6);
  goto error;
 }

 FUNC_4(VAR_1, "<<< RREMOVE fid %d\n", VAR_3->fid);

 FUNC_6(VAR_5, VAR_6);
error:
 if (VAR_4 == -VAR_0)
  FUNC_2(VAR_3);
 else
  FUNC_5(VAR_3);
 return VAR_4;
}
