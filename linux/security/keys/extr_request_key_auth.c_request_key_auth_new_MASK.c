
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct request_key_auth {size_t callout_len; void* dest_keyring; void* target_key; int pid; struct cred const* cred; int op; int callout_info; } ;
struct key {int serial; int usage; } ;
struct cred {int fsgid; int fsuid; TYPE_2__* request_key_auth; } ;
struct TYPE_6__ {int pid; } ;
struct TYPE_4__ {struct request_key_auth** data; } ;
struct TYPE_5__ {int sem; TYPE_1__ payload; int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct key* FUNC_0 (int) ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (struct key*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_2 (struct key*) ;
 TYPE_3__* VAR_10 ;
 struct cred* FUNC_3 () ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct request_key_auth*) ;
 void* FUNC_6 (struct cred const*) ;
 int FUNC_7 (char*,int) ;
 struct key* FUNC_8 (int *,char*,int ,int ,struct cred const*,int,int ,int *) ;
 void* FUNC_9 (struct key*) ;
 int FUNC_10 (struct key*,struct request_key_auth*,int ,int *,int *) ;
 int FUNC_11 (struct key*) ;
 int VAR_11 ;
 int FUNC_12 (char*,int,...) ;
 int FUNC_13 (void const*,size_t,int ) ;
 struct request_key_auth* FUNC_14 (int,int ) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (char*,char*,int) ;
 int FUNC_17 (int ,char const*,int) ;
 scalar_t__ FUNC_18 (int ,int *) ;
 int FUNC_19 (int *) ;

struct key *FUNC_20(struct key *VAR_12, const char *VAR_13,
     const void *VAR_14, size_t VAR_15,
     struct key *VAR_16)
{
 struct request_key_auth *VAR_17, *VAR_18;
 const struct cred *VAR_19 = FUNC_3();
 struct key *VAR_20 = ((void*)0);
 char VAR_21[20];
 int VAR_22 = -VAR_1;

 FUNC_7("%d,", VAR_12->serial);


 VAR_17 = FUNC_14(sizeof(*VAR_17), VAR_2);
 if (!VAR_17)
  goto error;
 VAR_17->callout_info = FUNC_13(VAR_14, VAR_15, VAR_2);
 if (!VAR_17->callout_info)
  goto error_free_rka;
 VAR_17->callout_len = VAR_15;
 FUNC_17(VAR_17->op, VAR_13, sizeof(VAR_17->op));



 if (VAR_19->request_key_auth) {

  FUNC_4(&VAR_19->request_key_auth->sem);



  if (FUNC_18(VAR_4,
        &VAR_19->request_key_auth->flags)) {
   FUNC_19(&VAR_19->request_key_auth->sem);
   VAR_22 = -VAR_0;
   goto error_free_rka;
  }

  VAR_18 = VAR_19->request_key_auth->payload.data[0];
  VAR_17->cred = FUNC_6(VAR_18->cred);
  VAR_17->pid = VAR_18->pid;

  FUNC_19(&VAR_19->request_key_auth->sem);
 }
 else {

  VAR_17->cred = FUNC_6(VAR_19);
  VAR_17->pid = VAR_10->pid;
 }

 VAR_17->target_key = FUNC_9(VAR_12);
 VAR_17->dest_keyring = FUNC_9(VAR_16);


 FUNC_16(VAR_21, "%x", VAR_12->serial);

 VAR_20 = FUNC_8(&VAR_11, VAR_21,
       VAR_19->fsuid, VAR_19->fsgid, VAR_19,
       VAR_8 | VAR_6 | VAR_7 | VAR_5 |
       VAR_9, VAR_3, ((void*)0));
 if (FUNC_1(VAR_20)) {
  VAR_22 = FUNC_2(VAR_20);
  goto error_free_rka;
 }


 VAR_22 = FUNC_10(VAR_20, VAR_17, 0, ((void*)0), ((void*)0));
 if (VAR_22 < 0)
  goto error_put_authkey;

 FUNC_12(" = {%d,%d}", VAR_20->serial, FUNC_15(&VAR_20->usage));
 return VAR_20;

error_put_authkey:
 FUNC_11(VAR_20);
error_free_rka:
 FUNC_5(VAR_17);
error:
 FUNC_12("= %d", VAR_22);
 return FUNC_0(VAR_22);
}
