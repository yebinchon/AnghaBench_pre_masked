
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct p9_req_t {int rc; } ;
struct p9_fid {int iounit; int fid; struct p9_client* clnt; } ;
struct p9_client {int msize; int proto_version; TYPE_1__* trans_mod; } ;
struct iov_iter {int dummy; } ;
struct TYPE_2__ {scalar_t__ zc_request; } ;


 scalar_t__ FUNC_0 (struct p9_req_t*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct p9_req_t*) ;
 int FUNC_2 (struct iov_iter*,int) ;
 int FUNC_3 (struct iov_iter*) ;
 struct p9_req_t* FUNC_4 (struct p9_client*,int ,char*,int ,scalar_t__,int,struct iov_iter*) ;
 struct p9_req_t* FUNC_5 (struct p9_client*,int ,int *,struct iov_iter*,int ,int,int ,char*,int ,scalar_t__,int) ;
 int FUNC_6 (int ,char*,int,...) ;
 int FUNC_7 (struct p9_client*,struct p9_req_t*) ;
 int FUNC_8 (int *,int ,char*,int*) ;
 int FUNC_9 (char*,int,int) ;
 int FUNC_10 (struct p9_client*,int *) ;

int
FUNC_11(struct p9_fid *VAR_4, u64 VAR_5, struct iov_iter *VAR_6, int *VAR_7)
{
 struct p9_client *VAR_8 = VAR_4->clnt;
 struct p9_req_t *VAR_9;
 int VAR_10 = 0;
 *VAR_7 = 0;

 FUNC_6(VAR_0, ">>> TWRITE fid %d offset %llu count %zd\n",
    VAR_4->fid, (unsigned long long) VAR_5,
    FUNC_3(VAR_6));

 while (FUNC_3(VAR_6)) {
  int VAR_11 = FUNC_3(VAR_6);
  int VAR_12 = VAR_4->iounit;
  if (!VAR_12 || VAR_12 > VAR_8->msize-VAR_1)
   VAR_12 = VAR_8->msize - VAR_1;

  if (VAR_11 < VAR_12)
   VAR_12 = VAR_11;


  if (VAR_8->trans_mod->zc_request && VAR_12 > 1024) {
   VAR_9 = FUNC_5(VAR_8, VAR_2, ((void*)0), VAR_6, 0,
            VAR_12, VAR_3, "dqd",
            VAR_4->fid, VAR_5, VAR_12);
  } else {
   VAR_9 = FUNC_4(VAR_8, VAR_2, "dqV", VAR_4->fid,
          VAR_5, VAR_12, VAR_6);
  }
  if (FUNC_0(VAR_9)) {
   *VAR_7 = FUNC_1(VAR_9);
   break;
  }

  *VAR_7 = FUNC_8(&VAR_9->rc, VAR_8->proto_version, "d", &VAR_11);
  if (*VAR_7) {
   FUNC_10(VAR_8, &VAR_9->rc);
   FUNC_7(VAR_8, VAR_9);
   break;
  }
  if (VAR_12 < VAR_11) {
   FUNC_9("bogus RWRITE count (%d > %d)\n", VAR_11, VAR_12);
   VAR_11 = VAR_12;
  }

  FUNC_6(VAR_0, "<<< RWRITE count %d\n", VAR_11);

  FUNC_7(VAR_8, VAR_9);
  FUNC_2(VAR_6, VAR_11);
  VAR_10 += VAR_11;
  VAR_5 += VAR_11;
 }
 return VAR_10;
}
