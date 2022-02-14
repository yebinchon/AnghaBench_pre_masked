
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct trusted_key_payload {size_t key_len; int * key; } ;
struct TYPE_2__ {struct trusted_key_payload** data; } ;
struct key {TYPE_1__ payload; int sem; } ;


 scalar_t__ FUNC_0 (struct key*) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 struct key* FUNC_2 (int *,char const*,int *) ;

struct key *FUNC_3(const char *VAR_1,
    const u8 **VAR_2, size_t *VAR_3)
{
 struct trusted_key_payload *VAR_4;
 struct key *VAR_5;

 VAR_5 = FUNC_2(&VAR_0, VAR_1, ((void*)0));
 if (FUNC_0(VAR_5))
  goto error;

 FUNC_1(&VAR_5->sem);
 VAR_4 = VAR_5->payload.data[0];
 *VAR_2 = VAR_4->key;
 *VAR_3 = VAR_4->key_len;
error:
 return VAR_5;
}
