
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct request_key_auth {TYPE_2__* target_key; } ;
struct TYPE_3__ {struct request_key_auth** data; } ;
struct key {TYPE_1__ payload; } ;
struct cred {struct key* request_key_auth; } ;
typedef scalar_t__ key_serial_t ;
struct TYPE_4__ {scalar_t__ serial; } ;


 long VAR_0 ;
 long VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 struct cred* FUNC_0 () ;
 long FUNC_1 (scalar_t__,struct request_key_auth*,struct key**) ;
 int FUNC_2 (char*,scalar_t__,unsigned int,unsigned int,scalar_t__) ;
 int FUNC_3 (struct key*) ;
 long FUNC_4 (TYPE_2__*,unsigned int,unsigned int,struct key*,struct key*) ;
 int FUNC_5 (int *) ;

long FUNC_6(key_serial_t VAR_7, unsigned VAR_8, unsigned VAR_9,
         key_serial_t VAR_10)
{
 const struct cred *VAR_11 = FUNC_0();
 struct request_key_auth *VAR_12;
 struct key *VAR_13, *VAR_14;
 long VAR_15;

 FUNC_2("%d,%u,%u,%d", VAR_7, VAR_8, VAR_9, VAR_10);


 if (VAR_9 <= 0 ||
     VAR_9 >= VAR_6 ||
     VAR_9 == VAR_4 ||
     VAR_9 == VAR_3 ||
     VAR_9 == VAR_2 ||
     VAR_9 == VAR_5)
  return -VAR_0;



 VAR_15 = -VAR_1;
 VAR_13 = VAR_11->request_key_auth;
 if (!VAR_13)
  goto error;

 VAR_12 = VAR_13->payload.data[0];
 if (VAR_12->target_key->serial != VAR_7)
  goto error;



 VAR_15 = FUNC_1(VAR_10, VAR_12, &VAR_14);
 if (VAR_15 < 0)
  goto error;


 VAR_15 = FUNC_4(VAR_12->target_key, VAR_8, VAR_9,
      VAR_14, VAR_13);

 FUNC_3(VAR_14);



 if (VAR_15 == 0)
  FUNC_5(((void*)0));

error:
 return VAR_15;
}
