
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct ceph_crypto_key** data; } ;
struct key {TYPE_1__ payload; } ;
struct ceph_crypto_key {int dummy; } ;


 int FUNC_0 (struct ceph_crypto_key*) ;
 int FUNC_1 (struct ceph_crypto_key*) ;

__attribute__((used)) static void FUNC_2(struct key *VAR_0)
{
 struct ceph_crypto_key *VAR_1 = VAR_0->payload.data[0];

 FUNC_0(VAR_1);
 FUNC_1(VAR_1);
}
