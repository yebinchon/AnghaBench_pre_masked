
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct request_key_auth {scalar_t__ op; struct key* target_key; } ;
struct key {int serial; int flags; } ;
struct cred {struct key* session_keyring; TYPE_2__* process_keyring; TYPE_1__* thread_keyring; int fsgid; int fsuid; } ;
typedef int key_serial_t ;
struct TYPE_4__ {int serial; } ;
struct TYPE_3__ {int serial; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct key*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct key*) ;
 int VAR_6 ;
 int FUNC_2 (char const*,char**,char**,struct key*,int ) ;
 int FUNC_3 (struct key*,int) ;
 struct cred* FUNC_4 () ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int *,int ) ;
 struct cred* FUNC_7 () ;
 struct request_key_auth* FUNC_8 (struct key*) ;
 int VAR_7 ;
 int FUNC_9 (char*,int) ;
 int FUNC_10 (char*,int,int,scalar_t__) ;
 int FUNC_11 (struct key*,struct key*) ;
 int FUNC_12 (struct key*) ;
 scalar_t__ FUNC_13 (struct key*) ;
 struct key* FUNC_14 (char*,int ,int ,struct cred const*,int,int ,int *,int *) ;
 int FUNC_15 (char*,int) ;
 int FUNC_16 (int *,struct key**) ;
 int FUNC_17 (struct cred const*) ;
 int FUNC_18 (char*,char*,int) ;
 scalar_t__ FUNC_19 (int ,int *) ;

__attribute__((used)) static int FUNC_20(struct key *VAR_8, void *VAR_9)
{
 static char const VAR_10[] = "/sbin/request-key";
 struct request_key_auth *VAR_11 = FUNC_8(VAR_8);
 const struct cred *VAR_12 = FUNC_4();
 key_serial_t VAR_13, VAR_14;
 struct key *VAR_15 = VAR_11->target_key, *VAR_16, *VAR_17, *VAR_18;
 char *VAR_19[9], *VAR_20[3], VAR_21[12], VAR_22[12];
 char VAR_23[12], VAR_24[3][12];
 char VAR_25[20];
 int VAR_26, VAR_27;

 FUNC_10("{%d},{%d},%s", VAR_15->serial, VAR_8->serial, VAR_11->op);

 VAR_26 = FUNC_16(((void*)0), &VAR_18);
 if (VAR_26 < 0)
  goto error_us;


 FUNC_18(VAR_25, "_req.%u", VAR_15->serial);

 VAR_12 = FUNC_7();
 VAR_16 = FUNC_14(VAR_25, VAR_12->fsuid, VAR_12->fsgid, VAR_12,
    VAR_3 | VAR_5 | VAR_4,
    VAR_1, ((void*)0), ((void*)0));
 FUNC_17(VAR_12);
 if (FUNC_0(VAR_16)) {
  VAR_26 = FUNC_1(VAR_16);
  goto error_alloc;
 }


 VAR_26 = FUNC_11(VAR_16, VAR_8);
 if (VAR_26 < 0)
  goto error_link;


 FUNC_18(VAR_21, "%d", FUNC_6(&VAR_7, VAR_12->fsuid));
 FUNC_18(VAR_22, "%d", FUNC_5(&VAR_7, VAR_12->fsgid));


 FUNC_18(VAR_23, "%d", VAR_15->serial);


 FUNC_18(VAR_24[0], "%d",
  VAR_12->thread_keyring ? VAR_12->thread_keyring->serial : 0);

 VAR_13 = 0;
 if (VAR_12->process_keyring)
  VAR_13 = VAR_12->process_keyring->serial;
 FUNC_18(VAR_24[1], "%d", VAR_13);

 VAR_17 = VAR_12->session_keyring;
 if (!VAR_17)
  VAR_17 = VAR_18;
 VAR_14 = VAR_17->serial;

 FUNC_18(VAR_24[2], "%d", VAR_14);


 VAR_27 = 0;
 VAR_20[VAR_27++] = "HOME=/";
 VAR_20[VAR_27++] = "PATH=/sbin:/bin:/usr/sbin:/usr/bin";
 VAR_20[VAR_27] = ((void*)0);


 VAR_27 = 0;
 VAR_19[VAR_27++] = (char *)VAR_10;
 VAR_19[VAR_27++] = (char *)VAR_11->op;
 VAR_19[VAR_27++] = VAR_23;
 VAR_19[VAR_27++] = VAR_21;
 VAR_19[VAR_27++] = VAR_22;
 VAR_19[VAR_27++] = VAR_24[0];
 VAR_19[VAR_27++] = VAR_24[1];
 VAR_19[VAR_27++] = VAR_24[2];
 VAR_19[VAR_27] = ((void*)0);


 VAR_26 = FUNC_2(VAR_10, VAR_19, VAR_20, VAR_16,
           VAR_6);
 FUNC_9("usermode -> 0x%x", VAR_26);
 if (VAR_26 >= 0) {

  if (FUNC_19(VAR_2, &VAR_15->flags) ||
      FUNC_13(VAR_15) < 0)
   VAR_26 = -VAR_0;
  else


   VAR_26 = 0;
 }

error_link:
 FUNC_12(VAR_16);

error_alloc:
 FUNC_12(VAR_18);
error_us:
 FUNC_3(VAR_8, VAR_26);
 FUNC_15(" = %d", VAR_26);
 return VAR_26;
}
