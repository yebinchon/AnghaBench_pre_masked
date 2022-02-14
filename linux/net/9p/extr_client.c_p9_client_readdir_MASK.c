
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
typedef int u32 ;
struct p9_req_t {int rc; } ;
struct p9_fid {int iounit; int fid; struct p9_client* clnt; } ;
struct p9_client {int msize; int proto_version; TYPE_1__* trans_mod; } ;
struct kvec {char* iov_base; int iov_len; } ;
struct iov_iter {int dummy; } ;
struct TYPE_2__ {scalar_t__ zc_request; } ;


 scalar_t__ FUNC_0 (struct p9_req_t*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct p9_req_t*) ;
 int VAR_3 ;
 int FUNC_2 (struct iov_iter*,int ,struct kvec*,int,int) ;
 int FUNC_3 (char*,char*,int) ;
 struct p9_req_t* FUNC_4 (struct p9_client*,int ,char*,int ,scalar_t__,int) ;
 struct p9_req_t* FUNC_5 (struct p9_client*,int ,struct iov_iter*,int *,int,int ,int,char*,int ,scalar_t__,int) ;
 int FUNC_6 (int ,char*,int,...) ;
 int FUNC_7 (struct p9_client*,struct p9_req_t*) ;
 int FUNC_8 (int *,int ,char*,int*,char**) ;
 int FUNC_9 (char*,int,int) ;
 int FUNC_10 (struct p9_client*,int *) ;

int FUNC_11(struct p9_fid *VAR_4, char *VAR_5, u32 VAR_6, u64 VAR_7)
{
 int VAR_8, VAR_9, VAR_10 = 0;
 struct p9_client *VAR_11;
 struct p9_req_t *VAR_12;
 char *VAR_13;
 struct kvec VAR_14 = {.iov_base = VAR_5, .iov_len = VAR_6};
 struct iov_iter VAR_15;

 FUNC_2(&VAR_15, VAR_3, &VAR_14, 1, VAR_6);

 FUNC_6(VAR_0, ">>> TREADDIR fid %d offset %llu count %d\n",
    VAR_4->fid, (unsigned long long) VAR_7, VAR_6);

 VAR_8 = 0;
 VAR_11 = VAR_4->clnt;

 VAR_9 = VAR_4->iounit;
 if (!VAR_9 || VAR_9 > VAR_11->msize-VAR_1)
  VAR_9 = VAR_11->msize - VAR_1;

 if (VAR_6 < VAR_9)
  VAR_9 = VAR_6;


 if (VAR_11->trans_mod->zc_request && VAR_9 > 1024) {




  VAR_12 = FUNC_5(VAR_11, VAR_2, &VAR_15, ((void*)0), VAR_9, 0,
           11, "dqd", VAR_4->fid, VAR_7, VAR_9);
 } else {
  VAR_10 = 1;
  VAR_12 = FUNC_4(VAR_11, VAR_2, "dqd", VAR_4->fid,
        VAR_7, VAR_9);
 }
 if (FUNC_0(VAR_12)) {
  VAR_8 = FUNC_1(VAR_12);
  goto error;
 }

 VAR_8 = FUNC_8(&VAR_12->rc, VAR_11->proto_version, "D", &VAR_6, &VAR_13);
 if (VAR_8) {
  FUNC_10(VAR_11, &VAR_12->rc);
  goto free_and_error;
 }
 if (VAR_9 < VAR_6) {
  FUNC_9("bogus RREADDIR count (%d > %d)\n", VAR_6, VAR_9);
  VAR_6 = VAR_9;
 }

 FUNC_6(VAR_0, "<<< RREADDIR count %d\n", VAR_6);

 if (VAR_10)
  FUNC_3(VAR_5, VAR_13, VAR_6);

 FUNC_7(VAR_11, VAR_12);
 return VAR_6;

free_and_error:
 FUNC_7(VAR_11, VAR_12);
error:
 return VAR_8;
}
