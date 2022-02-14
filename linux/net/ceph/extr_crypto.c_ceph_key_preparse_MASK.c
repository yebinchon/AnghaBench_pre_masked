
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct ceph_crypto_key** data; } ;
struct key_preparsed_payload {size_t datalen; size_t quotalen; TYPE_1__ payload; scalar_t__ data; } ;
struct ceph_crypto_key {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ceph_crypto_key*,void**,char*) ;
 int FUNC_1 (struct ceph_crypto_key*) ;
 struct ceph_crypto_key* FUNC_2 (int,int ) ;

__attribute__((used)) static int FUNC_3(struct key_preparsed_payload *VAR_3)
{
 struct ceph_crypto_key *VAR_4;
 size_t VAR_5 = VAR_3->datalen;
 int VAR_6;
 void *VAR_7;

 VAR_6 = -VAR_0;
 if (VAR_5 <= 0 || VAR_5 > 32767 || !VAR_3->data)
  goto err;

 VAR_6 = -VAR_1;
 VAR_4 = FUNC_2(sizeof(*VAR_4), VAR_2);
 if (!VAR_4)
  goto err;


 VAR_7 = (void *)VAR_3->data;
 VAR_6 = FUNC_0(VAR_4, &VAR_7, (char*)VAR_3->data+VAR_5);
 if (VAR_6 < 0)
  goto err_ckey;

 VAR_3->payload.data[0] = VAR_4;
 VAR_3->quotalen = VAR_5;
 return 0;

err_ckey:
 FUNC_1(VAR_4);
err:
 return VAR_6;
}
