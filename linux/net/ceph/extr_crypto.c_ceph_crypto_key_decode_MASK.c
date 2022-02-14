
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct ceph_crypto_key {int len; int created; void* type; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (void**) ;
 int FUNC_1 (void**,int *,int) ;
 int FUNC_2 (void**,void*,int,int ) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (struct ceph_crypto_key*,void*) ;

int FUNC_5(struct ceph_crypto_key *VAR_2, void **VAR_3, void *VAR_4)
{
 int VAR_5;

 FUNC_2(VAR_3, VAR_4, 2*sizeof(u16) + sizeof(VAR_2->created), VAR_1);
 VAR_2->type = FUNC_0(VAR_3);
 FUNC_1(VAR_3, &VAR_2->created, sizeof(VAR_2->created));
 VAR_2->len = FUNC_0(VAR_3);
 FUNC_2(VAR_3, VAR_4, VAR_2->len, VAR_1);
 VAR_5 = FUNC_4(VAR_2, *VAR_3);
 *VAR_3 += VAR_2->len;
 return VAR_5;

bad:
 FUNC_3("failed to decode crypto key\n");
 return -VAR_0;
}
