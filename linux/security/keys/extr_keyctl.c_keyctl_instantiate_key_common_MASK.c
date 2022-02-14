
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct request_key_auth {TYPE_2__* target_key; } ;
struct TYPE_3__ {struct request_key_auth** data; } ;
struct key {TYPE_1__ payload; } ;
struct iov_iter {int dummy; } ;
struct cred {struct key* request_key_auth; } ;
typedef scalar_t__ key_serial_t ;
struct TYPE_4__ {scalar_t__ serial; } ;


 long VAR_0 ;
 long VAR_1 ;
 long VAR_2 ;
 long VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (void*,size_t,struct iov_iter*) ;
 struct cred* FUNC_1 () ;
 long FUNC_2 (scalar_t__,struct request_key_auth*,struct key**) ;
 size_t FUNC_3 (struct iov_iter*) ;
 int FUNC_4 (char*,scalar_t__,size_t,scalar_t__) ;
 long FUNC_5 (TYPE_2__*,void*,size_t,struct key*,struct key*) ;
 int FUNC_6 (struct key*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (void*) ;
 void* FUNC_9 (size_t,int ) ;
 int FUNC_10 (void*,size_t) ;

long FUNC_11(key_serial_t VAR_5,
       struct iov_iter *VAR_6,
       key_serial_t VAR_7)
{
 const struct cred *VAR_8 = FUNC_1();
 struct request_key_auth *VAR_9;
 struct key *VAR_10, *VAR_11;
 size_t VAR_12 = VAR_6 ? FUNC_3(VAR_6) : 0;
 void *VAR_13;
 long VAR_14;

 FUNC_4("%d,,%zu,%d", VAR_5, VAR_12, VAR_7);

 if (!VAR_12)
  VAR_6 = ((void*)0);

 VAR_14 = -VAR_1;
 if (VAR_12 > 1024 * 1024 - 1)
  goto error;



 VAR_14 = -VAR_3;
 VAR_10 = VAR_8->request_key_auth;
 if (!VAR_10)
  goto error;

 VAR_9 = VAR_10->payload.data[0];
 if (VAR_9->target_key->serial != VAR_5)
  goto error;


 VAR_13 = ((void*)0);

 if (VAR_6) {
  VAR_14 = -VAR_2;
  VAR_13 = FUNC_9(VAR_12, VAR_4);
  if (!VAR_13)
   goto error;

  VAR_14 = -VAR_0;
  if (!FUNC_0(VAR_13, VAR_12, VAR_6))
   goto error2;
 }



 VAR_14 = FUNC_2(VAR_7, VAR_9, &VAR_11);
 if (VAR_14 < 0)
  goto error2;


 VAR_14 = FUNC_5(VAR_9->target_key, VAR_13, VAR_12,
           VAR_11, VAR_10);

 FUNC_6(VAR_11);



 if (VAR_14 == 0)
  FUNC_7(((void*)0));

error2:
 if (VAR_13) {
  FUNC_10(VAR_13, VAR_12);
  FUNC_8(VAR_13);
 }
error:
 return VAR_14;
}
