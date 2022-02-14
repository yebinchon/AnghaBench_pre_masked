
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ size; } ;
struct p9_req_t {TYPE_1__ rc; } ;
struct p9_client {scalar_t__ msize; int proto_version; } ;
typedef scalar_t__ int8_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ,char*,int,...) ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (struct p9_client*) ;
 scalar_t__ FUNC_4 (struct p9_client*) ;
 int FUNC_5 (TYPE_1__*,int *,scalar_t__*,int *,int ) ;
 int FUNC_6 (TYPE_1__*,int ,char*,...) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (struct p9_client*,TYPE_1__*) ;

__attribute__((used)) static int FUNC_9(struct p9_client *VAR_5, struct p9_req_t *VAR_6)
{
 int8_t VAR_7;
 int VAR_8;
 int VAR_9;

 VAR_8 = FUNC_5(&VAR_6->rc, ((void*)0), &VAR_7, ((void*)0), 0);
 if (VAR_6->rc.size >= VAR_5->msize) {
  FUNC_1(VAR_2,
    "requested packet size too big: %d\n",
    VAR_6->rc.size);
  return -VAR_0;
 }




 FUNC_8(VAR_5, &VAR_6->rc);
 if (VAR_8) {
  FUNC_1(VAR_2, "couldn't parse header %d\n", VAR_8);
  return VAR_8;
 }
 if (VAR_7 != VAR_3 && VAR_7 != VAR_4)
  return 0;

 if (!FUNC_3(VAR_5)) {
  char *VAR_10;
  VAR_8 = FUNC_6(&VAR_6->rc, VAR_5->proto_version, "s?d",
      &VAR_10, &VAR_9);
  if (VAR_8)
   goto out_err;

  if (FUNC_4(VAR_5) && VAR_9 < 512)
   VAR_8 = -VAR_9;

  if (!VAR_8) {
   VAR_8 = FUNC_2(VAR_10, FUNC_7(VAR_10));

   FUNC_1(VAR_1, "<<< RERROR (%d) %s\n",
     -VAR_9, VAR_10);
  }
  FUNC_0(VAR_10);
 } else {
  VAR_8 = FUNC_6(&VAR_6->rc, VAR_5->proto_version, "d", &VAR_9);
  VAR_8 = -VAR_9;

  FUNC_1(VAR_1, "<<< RLERROR (%d)\n", -VAR_9);
 }

 return VAR_8;

out_err:
 FUNC_1(VAR_2, "couldn't parse error%d\n", VAR_8);

 return VAR_8;
}
