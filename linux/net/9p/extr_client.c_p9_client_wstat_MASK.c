
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int version; scalar_t__ path; int type; } ;
struct p9_wstat {int size; int n_muid; int n_gid; int n_uid; int extension; int muid; int gid; int uid; int name; scalar_t__ length; int mtime; int atime; int mode; TYPE_1__ qid; int dev; int type; } ;
struct p9_req_t {int dummy; } ;
struct p9_fid {int fid; struct p9_client* clnt; } ;
struct p9_client {int proto_version; } ;


 scalar_t__ FUNC_0 (struct p9_req_t*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct p9_req_t*) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int ) ;
 int VAR_2 ;
 struct p9_req_t* FUNC_4 (struct p9_client*,int ,char*,int ,int ,struct p9_wstat*) ;
 int FUNC_5 (struct p9_wstat*,int ) ;
 int FUNC_6 (int ,char*,int ,...) ;
 int FUNC_7 (struct p9_client*,struct p9_req_t*) ;

int FUNC_8(struct p9_fid *VAR_3, struct p9_wstat *VAR_4)
{
 int VAR_5;
 struct p9_req_t *VAR_6;
 struct p9_client *VAR_7;

 VAR_5 = 0;
 VAR_7 = VAR_3->clnt;
 VAR_4->size = FUNC_5(VAR_4, VAR_7->proto_version);
 FUNC_6(VAR_0, ">>> TWSTAT fid %d\n", VAR_3->fid);
 FUNC_6(VAR_0,
  "     sz=%x type=%x dev=%x qid=%x.%llx.%x\n"
  "     mode=%8.8x atime=%8.8x mtime=%8.8x length=%llx\n"
  "     name=%s uid=%s gid=%s muid=%s extension=(%s)\n"
  "     uid=%d gid=%d n_muid=%d\n",
  VAR_4->size, VAR_4->type, VAR_4->dev, VAR_4->qid.type,
  (unsigned long long)VAR_4->qid.path, VAR_4->qid.version, VAR_4->mode,
  VAR_4->atime, VAR_4->mtime, (unsigned long long)VAR_4->length,
  VAR_4->name, VAR_4->uid, VAR_4->gid, VAR_4->muid, VAR_4->extension,
  FUNC_3(&VAR_2, VAR_4->n_uid),
  FUNC_2(&VAR_2, VAR_4->n_gid),
  FUNC_3(&VAR_2, VAR_4->n_muid));

 VAR_6 = FUNC_4(VAR_7, VAR_1, "dwS", VAR_3->fid, VAR_4->size+2, VAR_4);
 if (FUNC_0(VAR_6)) {
  VAR_5 = FUNC_1(VAR_6);
  goto error;
 }

 FUNC_6(VAR_0, "<<< RWSTAT fid %d\n", VAR_3->fid);

 FUNC_7(VAR_7, VAR_6);
error:
 return VAR_5;
}
