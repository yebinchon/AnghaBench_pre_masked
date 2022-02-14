
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint16_t ;
struct p9_req_t {int rc; } ;
struct p9_qid {size_t type; unsigned char const* const version; scalar_t__ path; } ;
struct p9_fid {size_t fid; int qid; int uid; struct p9_client* clnt; } ;
struct p9_client {int proto_version; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct p9_fid* FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct p9_req_t*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (struct p9_req_t*) ;
 int FUNC_3 (struct p9_qid*) ;
 int FUNC_4 (int *,struct p9_qid*,int) ;
 int FUNC_5 (struct p9_fid*) ;
 struct p9_req_t* FUNC_6 (struct p9_client*,int ,char*,size_t,size_t,size_t,unsigned char const* const*) ;
 int FUNC_7 (int ,char*,size_t,...) ;
 struct p9_fid* FUNC_8 (struct p9_client*) ;
 int FUNC_9 (struct p9_fid*) ;
 int FUNC_10 (struct p9_client*,struct p9_req_t*) ;
 int FUNC_11 (int *,int ,char*,size_t*,struct p9_qid**) ;
 int FUNC_12 (struct p9_client*,int *) ;

struct p9_fid *FUNC_13(struct p9_fid *VAR_4, uint16_t VAR_5,
  const unsigned char * const *VAR_6, int VAR_7)
{
 int VAR_8;
 struct p9_client *VAR_9;
 struct p9_fid *VAR_10;
 struct p9_qid *VAR_11;
 struct p9_req_t *VAR_12;
 uint16_t VAR_13, VAR_14;

 VAR_8 = 0;
 VAR_11 = ((void*)0);
 VAR_9 = VAR_4->clnt;
 if (VAR_7) {
  VAR_10 = FUNC_8(VAR_9);
  if (!VAR_10) {
   VAR_8 = -VAR_1;
   goto error;
  }

  VAR_10->uid = VAR_4->uid;
 } else
  VAR_10 = VAR_4;


 FUNC_7(VAR_2, ">>> TWALK fids %d,%d nwname %ud wname[0] %s\n",
   VAR_4->fid, VAR_10->fid, VAR_5, VAR_6 ? VAR_6[0] : ((void*)0));

 VAR_12 = FUNC_6(VAR_9, VAR_3, "ddT", VAR_4->fid, VAR_10->fid,
        VAR_5, VAR_6);
 if (FUNC_1(VAR_12)) {
  VAR_8 = FUNC_2(VAR_12);
  goto error;
 }

 VAR_8 = FUNC_11(&VAR_12->rc, VAR_9->proto_version, "R", &VAR_13, &VAR_11);
 if (VAR_8) {
  FUNC_12(VAR_9, &VAR_12->rc);
  FUNC_10(VAR_9, VAR_12);
  goto clunk_fid;
 }
 FUNC_10(VAR_9, VAR_12);

 FUNC_7(VAR_2, "<<< RWALK nwqid %d:\n", VAR_13);

 if (VAR_13 != VAR_5) {
  VAR_8 = -VAR_0;
  goto clunk_fid;
 }

 for (VAR_14 = 0; VAR_14 < VAR_13; VAR_14++)
  FUNC_7(VAR_2, "<<<     [%d] %x.%llx.%x\n",
   VAR_14, VAR_11[VAR_14].type,
   (unsigned long long)VAR_11[VAR_14].path,
   VAR_11[VAR_14].version);

 if (VAR_5)
  FUNC_4(&VAR_10->qid, &VAR_11[VAR_13 - 1], sizeof(struct p9_qid));
 else
  VAR_10->qid = VAR_4->qid;

 FUNC_3(VAR_11);
 return VAR_10;

clunk_fid:
 FUNC_3(VAR_11);
 FUNC_5(VAR_10);
 VAR_10 = ((void*)0);

error:
 if (VAR_10 && (VAR_10 != VAR_4))
  FUNC_9(VAR_10);

 return FUNC_0(VAR_8);
}
