
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct p9_req_t {int rc; } ;
struct p9_getlock {int client_id; int proc_id; int length; int start; int type; } ;
struct p9_fid {int fid; struct p9_client* clnt; } ;
struct p9_client {int proto_version; } ;


 scalar_t__ FUNC_0 (struct p9_req_t*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct p9_req_t*) ;
 struct p9_req_t* FUNC_2 (struct p9_client*,int ,char*,int ,int ,int ,int ,int ,int ) ;
 int FUNC_3 (int ,char*,int ,int ,int ,int ,int ,...) ;
 int FUNC_4 (struct p9_client*,struct p9_req_t*) ;
 int FUNC_5 (int *,int ,char*,int *,int *,int *,int *,int *) ;
 int FUNC_6 (struct p9_client*,int *) ;

int FUNC_7(struct p9_fid *VAR_2, struct p9_getlock *VAR_3)
{
 int VAR_4;
 struct p9_client *VAR_5;
 struct p9_req_t *VAR_6;

 VAR_4 = 0;
 VAR_5 = VAR_2->clnt;
 FUNC_3(VAR_0, ">>> TGETLOCK fid %d, type %i start %lld "
  "length %lld proc_id %d client_id %s\n", VAR_2->fid, VAR_3->type,
  VAR_3->start, VAR_3->length, VAR_3->proc_id, VAR_3->client_id);

 VAR_6 = FUNC_2(VAR_5, VAR_1, "dbqqds", VAR_2->fid, VAR_3->type,
  VAR_3->start, VAR_3->length, VAR_3->proc_id, VAR_3->client_id);

 if (FUNC_0(VAR_6))
  return FUNC_1(VAR_6);

 VAR_4 = FUNC_5(&VAR_6->rc, VAR_5->proto_version, "bqqds", &VAR_3->type,
     &VAR_3->start, &VAR_3->length, &VAR_3->proc_id,
     &VAR_3->client_id);
 if (VAR_4) {
  FUNC_6(VAR_5, &VAR_6->rc);
  goto error;
 }
 FUNC_3(VAR_0, "<<< RGETLOCK type %i start %lld length %lld "
  "proc_id %d client_id %s\n", VAR_3->type, VAR_3->start,
  VAR_3->length, VAR_3->proc_id, VAR_3->client_id);
error:
 FUNC_4(VAR_5, VAR_6);
 return VAR_4;
}
