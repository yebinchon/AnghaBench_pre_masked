
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct p9_req_t {int rc; } ;
struct p9_fid {int iounit; int fid; struct p9_client* clnt; } ;
struct p9_client {int msize; int proto_version; TYPE_1__* trans_mod; } ;
struct iov_iter {int dummy; } ;
struct TYPE_2__ {scalar_t__ zc_request; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct p9_req_t*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct p9_req_t*) ;
 int FUNC_2 (char*,int,struct iov_iter*) ;
 int FUNC_3 (struct iov_iter*,int) ;
 int FUNC_4 (struct iov_iter*) ;
 struct p9_req_t* FUNC_5 (struct p9_client*,int ,char*,int ,int,int) ;
 struct p9_req_t* FUNC_6 (struct p9_client*,int ,struct iov_iter*,int *,int,int ,int,char*,int ,int,int) ;
 int FUNC_7 (int ,char*,int,...) ;
 int FUNC_8 (struct p9_client*,struct p9_req_t*) ;
 int FUNC_9 (int *,int ,char*,int*,char**) ;
 int FUNC_10 (char*,int,int) ;
 int FUNC_11 (struct p9_client*,int *) ;

int
FUNC_12(struct p9_fid *VAR_4, u64 VAR_5, struct iov_iter *VAR_6, int *VAR_7)
{
 struct p9_client *VAR_8 = VAR_4->clnt;
 struct p9_req_t *VAR_9;
 int VAR_10 = 0;
 *VAR_7 = 0;

 FUNC_7(VAR_1, ">>> TREAD fid %d offset %llu %d\n",
     VAR_4->fid, (unsigned long long) VAR_5, (int)FUNC_4(VAR_6));

 while (FUNC_4(VAR_6)) {
  int VAR_11 = FUNC_4(VAR_6);
  int VAR_12, VAR_13 = 0;
  char *VAR_14;

  VAR_12 = VAR_4->iounit;
  if (!VAR_12 || VAR_12 > VAR_8->msize-VAR_2)
   VAR_12 = VAR_8->msize - VAR_2;

  if (VAR_11 < VAR_12)
   VAR_12 = VAR_11;


  if (VAR_8->trans_mod->zc_request && VAR_12 > 1024) {




   VAR_9 = FUNC_6(VAR_8, VAR_3, VAR_6, ((void*)0), VAR_12,
            0, 11, "dqd", VAR_4->fid,
            VAR_5, VAR_12);
  } else {
   VAR_13 = 1;
   VAR_9 = FUNC_5(VAR_8, VAR_3, "dqd", VAR_4->fid, VAR_5,
         VAR_12);
  }
  if (FUNC_0(VAR_9)) {
   *VAR_7 = FUNC_1(VAR_9);
   break;
  }

  *VAR_7 = FUNC_9(&VAR_9->rc, VAR_8->proto_version,
       "D", &VAR_11, &VAR_14);
  if (*VAR_7) {
   FUNC_11(VAR_8, &VAR_9->rc);
   FUNC_8(VAR_8, VAR_9);
   break;
  }
  if (VAR_12 < VAR_11) {
   FUNC_10("bogus RREAD count (%d > %d)\n", VAR_11, VAR_12);
   VAR_11 = VAR_12;
  }

  FUNC_7(VAR_1, "<<< RREAD count %d\n", VAR_11);
  if (!VAR_11) {
   FUNC_8(VAR_8, VAR_9);
   break;
  }

  if (VAR_13) {
   int VAR_15 = FUNC_2(VAR_14, VAR_11, VAR_6);
   VAR_10 += VAR_15;
   VAR_5 += VAR_15;
   if (VAR_15 != VAR_11) {
    *VAR_7 = -VAR_0;
    FUNC_8(VAR_8, VAR_9);
    break;
   }
  } else {
   FUNC_3(VAR_6, VAR_11);
   VAR_10 += VAR_11;
   VAR_5 += VAR_11;
  }
  FUNC_8(VAR_8, VAR_9);
 }
 return VAR_10;
}
