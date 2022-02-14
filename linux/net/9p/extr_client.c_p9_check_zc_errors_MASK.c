
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int size; int offset; char* sdata; } ;
struct p9_req_t {TYPE_1__ rc; } ;
struct p9_client {int proto_version; } ;
struct iov_iter {int dummy; } ;
typedef scalar_t__ int8_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (char*,int,struct iov_iter*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ,char*,int,...) ;
 int FUNC_3 (char*,int ) ;
 int FUNC_4 (struct p9_client*) ;
 scalar_t__ FUNC_5 (struct p9_client*) ;
 int FUNC_6 (TYPE_1__*,int *,scalar_t__*,int *,int ) ;
 int FUNC_7 (TYPE_1__*,int ,char*,...) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (struct p9_client*,TYPE_1__*) ;

__attribute__((used)) static int FUNC_10(struct p9_client *VAR_6, struct p9_req_t *VAR_7,
         struct iov_iter *VAR_8, int VAR_9)
{
 int VAR_10;
 int VAR_11;
 int8_t VAR_12;
 char *VAR_13 = ((void*)0);

 VAR_10 = FUNC_6(&VAR_7->rc, ((void*)0), &VAR_12, ((void*)0), 0);




 FUNC_9(VAR_6, &VAR_7->rc);
 if (VAR_10) {
  FUNC_2(VAR_2, "couldn't parse header %d\n", VAR_10);
  return VAR_10;
 }

 if (VAR_12 != VAR_3 && VAR_12 != VAR_4)
  return 0;

 if (!FUNC_4(VAR_6)) {

  int VAR_14;

  int VAR_15 = VAR_9 - 7;

  VAR_14 = VAR_7->rc.size - VAR_7->rc.offset;
  if (VAR_14 > (VAR_5 - 7)) {
   VAR_10 = -VAR_0;
   goto out_err;
  }

  VAR_13 = &VAR_7->rc.sdata[VAR_7->rc.offset];
  if (VAR_14 > VAR_15) {

   if (!FUNC_0(VAR_13 + VAR_15,
          VAR_14 - VAR_15, VAR_8)) {
    VAR_10 = -VAR_0;
    goto out_err;
   }
  }
  VAR_13 = ((void*)0);
  VAR_10 = FUNC_7(&VAR_7->rc, VAR_6->proto_version, "s?d",
      &VAR_13, &VAR_11);
  if (VAR_10)
   goto out_err;

  if (FUNC_5(VAR_6) && VAR_11 < 512)
   VAR_10 = -VAR_11;

  if (!VAR_10) {
   VAR_10 = FUNC_3(VAR_13, FUNC_8(VAR_13));

   FUNC_2(VAR_1, "<<< RERROR (%d) %s\n",
     -VAR_11, VAR_13);
  }
  FUNC_1(VAR_13);
 } else {
  VAR_10 = FUNC_7(&VAR_7->rc, VAR_6->proto_version, "d", &VAR_11);
  VAR_10 = -VAR_11;

  FUNC_2(VAR_1, "<<< RLERROR (%d)\n", -VAR_11);
 }
 return VAR_10;

out_err:
 FUNC_2(VAR_2, "couldn't parse error%d\n", VAR_10);
 return VAR_10;
}
