
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ceph_x_encrypt_header {int struct_v; int magic; } ;
struct ceph_crypto_key {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct ceph_crypto_key*,int,void*,int,int,int*) ;
 int FUNC_1 (void**,int) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct ceph_crypto_key *VAR_1, void *VAR_2,
     int VAR_3, int VAR_4)
{
 struct ceph_x_encrypt_header *VAR_5 = VAR_2 + sizeof(u32);
 int VAR_6;
 int VAR_7;

 VAR_5->struct_v = 1;
 VAR_5->magic = FUNC_2(VAR_0);

 VAR_7 = FUNC_0(VAR_1, 1, VAR_2 + sizeof(u32), VAR_3 - sizeof(u32),
    VAR_4 + sizeof(struct ceph_x_encrypt_header),
    &VAR_6);
 if (VAR_7)
  return VAR_7;

 FUNC_1(&VAR_2, VAR_6);
 return sizeof(u32) + VAR_6;
}
