
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * type; } ;
struct keyring_search_context {TYPE_1__ index_key; } ;
struct key_user {int dummy; } ;
struct key {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct key* FUNC_0 (int) ;
 int FUNC_1 (struct keyring_search_context*,struct key*,unsigned long,struct key_user*,struct key**) ;
 int FUNC_2 (struct key**) ;
 int FUNC_3 (struct key*,char const*,size_t,void*,struct key*) ;
 int FUNC_4 () ;
 int FUNC_5 (char*) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (struct key*,int ,int *,int *) ;
 int VAR_3 ;
 int FUNC_8 (struct key*) ;
 int FUNC_9 (struct key*) ;
 int VAR_4 ;
 struct key_user* FUNC_10 (int ) ;
 int FUNC_11 (struct key_user*) ;
 int FUNC_12 (char*,int) ;

__attribute__((used)) static struct key *FUNC_13(struct keyring_search_context *VAR_5,
       const char *VAR_6,
       size_t VAR_7,
       void *VAR_8,
       struct key *VAR_9,
       unsigned long VAR_10)
{
 struct key_user *VAR_11;
 struct key *VAR_12;
 int VAR_13;

 FUNC_6("");

 if (VAR_5->index_key.type == &VAR_4)
  return FUNC_0(-VAR_2);

 VAR_13 = FUNC_2(&VAR_9);
 if (VAR_13)
  goto error;

 VAR_11 = FUNC_10(FUNC_4());
 if (!VAR_11) {
  VAR_13 = -VAR_1;
  goto error_put_dest_keyring;
 }

 VAR_13 = FUNC_1(VAR_5, VAR_9, VAR_10, VAR_11, &VAR_12);
 FUNC_11(VAR_11);

 if (VAR_13 == 0) {
  VAR_13 = FUNC_3(VAR_12, VAR_6, VAR_7, VAR_8,
        VAR_9);
  if (VAR_13 < 0) {
   FUNC_5("cons failed");
   goto construction_failed;
  }
 } else if (VAR_13 == -VAR_0) {
  VAR_13 = 0;
 } else {
  goto error_put_dest_keyring;
 }

 FUNC_8(VAR_9);
 FUNC_12(" = key %d", FUNC_9(VAR_12));
 return VAR_12;

construction_failed:
 FUNC_7(VAR_12, VAR_3, ((void*)0), ((void*)0));
 FUNC_8(VAR_12);
error_put_dest_keyring:
 FUNC_8(VAR_9);
error:
 FUNC_12(" = %d", VAR_13);
 return FUNC_0(VAR_13);
}
