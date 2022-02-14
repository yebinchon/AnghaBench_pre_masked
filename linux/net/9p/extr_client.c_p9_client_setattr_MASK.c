
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct p9_req_t {int dummy; } ;
struct p9_iattr_dotl {int mtime_nsec; int mtime_sec; int atime_nsec; int atime_sec; int size; int gid; int uid; int mode; int valid; } ;
struct p9_fid {int fid; struct p9_client* clnt; } ;
struct p9_client {int dummy; } ;


 scalar_t__ FUNC_0 (struct p9_req_t*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct p9_req_t*) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int ) ;
 int VAR_2 ;
 struct p9_req_t* FUNC_4 (struct p9_client*,int ,char*,int ,struct p9_iattr_dotl*) ;
 int FUNC_5 (int ,char*,int ,...) ;
 int FUNC_6 (struct p9_client*,struct p9_req_t*) ;

int FUNC_7(struct p9_fid *VAR_3, struct p9_iattr_dotl *VAR_4)
{
 int VAR_5;
 struct p9_req_t *VAR_6;
 struct p9_client *VAR_7;

 VAR_5 = 0;
 VAR_7 = VAR_3->clnt;
 FUNC_5(VAR_0, ">>> TSETATTR fid %d\n", VAR_3->fid);
 FUNC_5(VAR_0,
  "    valid=%x mode=%x uid=%d gid=%d size=%lld\n"
  "    atime_sec=%lld atime_nsec=%lld\n"
  "    mtime_sec=%lld mtime_nsec=%lld\n",
  VAR_4->valid, VAR_4->mode,
  FUNC_3(&VAR_2, VAR_4->uid),
  FUNC_2(&VAR_2, VAR_4->gid),
  VAR_4->size, VAR_4->atime_sec, VAR_4->atime_nsec,
  VAR_4->mtime_sec, VAR_4->mtime_nsec);

 VAR_6 = FUNC_4(VAR_7, VAR_1, "dI", VAR_3->fid, VAR_4);

 if (FUNC_0(VAR_6)) {
  VAR_5 = FUNC_1(VAR_6);
  goto error;
 }
 FUNC_5(VAR_0, "<<< RSETATTR fid %d\n", VAR_3->fid);
 FUNC_6(VAR_7, VAR_6);
error:
 return VAR_5;
}
