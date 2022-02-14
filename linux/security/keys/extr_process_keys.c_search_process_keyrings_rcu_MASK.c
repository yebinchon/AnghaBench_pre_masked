
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct request_key_auth {struct cred const* cred; } ;
struct TYPE_4__ {int * type; } ;
struct keyring_search_context {struct cred const* cred; TYPE_1__ index_key; } ;
typedef struct cred {TYPE_3__* request_key_auth; } const cred ;
typedef scalar_t__ key_ref_t ;
struct TYPE_5__ {struct request_key_auth** data; } ;
struct TYPE_6__ {TYPE_2__ payload; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__) ;
 struct cred const* FUNC_2 () ;
 int VAR_2 ;
 scalar_t__ FUNC_3 (TYPE_3__*) ;
 scalar_t__ FUNC_4 (struct keyring_search_context*) ;

key_ref_t FUNC_5(struct keyring_search_context *VAR_3)
{
 struct request_key_auth *VAR_4;
 key_ref_t VAR_5, VAR_6 = FUNC_0(-VAR_0), VAR_7;

 VAR_5 = FUNC_4(VAR_3);
 if (!FUNC_1(VAR_5))
  goto found;
 VAR_7 = VAR_5;





 if (VAR_3->cred->request_key_auth &&
     VAR_3->cred == FUNC_2() &&
     VAR_3->index_key.type != &VAR_2
     ) {
  const struct cred *VAR_8 = VAR_3->cred;

  if (FUNC_3(VAR_8->request_key_auth) == 0) {
   VAR_4 = VAR_3->cred->request_key_auth->payload.data[0];


   VAR_3->cred = VAR_4->cred;
   VAR_5 = FUNC_4(VAR_3);
   VAR_3->cred = VAR_8;

   if (!FUNC_1(VAR_5))
    goto found;
   VAR_6 = VAR_5;
  }
 }


 if (VAR_7 == FUNC_0(-VAR_1) || VAR_6 == FUNC_0(-VAR_1))
  VAR_5 = FUNC_0(-VAR_1);
 else if (VAR_7 == FUNC_0(-VAR_0))
  VAR_5 = VAR_6;
 else
  VAR_5 = VAR_7;

found:
 return VAR_5;
}
