
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct p9_rstatfs {scalar_t__ namelen; int fsid; int ffree; int files; int bavail; int bfree; int blocks; scalar_t__ bsize; scalar_t__ type; } ;
struct p9_req_t {int rc; } ;
struct p9_fid {int fid; struct p9_client* clnt; } ;
struct p9_client {int proto_version; } ;


 scalar_t__ FUNC_0 (struct p9_req_t*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct p9_req_t*) ;
 struct p9_req_t* FUNC_2 (struct p9_client*,int ,char*,int ) ;
 int FUNC_3 (int ,char*,int ,...) ;
 int FUNC_4 (struct p9_client*,struct p9_req_t*) ;
 int FUNC_5 (int *,int ,char*,scalar_t__*,scalar_t__*,int *,int *,int *,int *,int *,int *,scalar_t__*) ;
 int FUNC_6 (struct p9_client*,int *) ;

int FUNC_7(struct p9_fid *VAR_2, struct p9_rstatfs *VAR_3)
{
 int VAR_4;
 struct p9_req_t *VAR_5;
 struct p9_client *VAR_6;

 VAR_4 = 0;
 VAR_6 = VAR_2->clnt;

 FUNC_3(VAR_0, ">>> TSTATFS fid %d\n", VAR_2->fid);

 VAR_5 = FUNC_2(VAR_6, VAR_1, "d", VAR_2->fid);
 if (FUNC_0(VAR_5)) {
  VAR_4 = FUNC_1(VAR_5);
  goto error;
 }

 VAR_4 = FUNC_5(&VAR_5->rc, VAR_6->proto_version, "ddqqqqqqd", &VAR_3->type,
     &VAR_3->bsize, &VAR_3->blocks, &VAR_3->bfree, &VAR_3->bavail,
     &VAR_3->files, &VAR_3->ffree, &VAR_3->fsid, &VAR_3->namelen);
 if (VAR_4) {
  FUNC_6(VAR_6, &VAR_5->rc);
  FUNC_4(VAR_6, VAR_5);
  goto error;
 }

 FUNC_3(VAR_0, "<<< RSTATFS fid %d type 0x%lx bsize %ld "
  "blocks %llu bfree %llu bavail %llu files %llu ffree %llu "
  "fsid %llu namelen %ld\n",
  VAR_2->fid, (long unsigned int)VAR_3->type, (long int)VAR_3->bsize,
  VAR_3->blocks, VAR_3->bfree, VAR_3->bavail, VAR_3->files, VAR_3->ffree,
  VAR_3->fsid, (long int)VAR_3->namelen);

 FUNC_4(VAR_6, VAR_5);
error:
 return VAR_4;
}
