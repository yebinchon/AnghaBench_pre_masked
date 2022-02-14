
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sctp_hash_cmp_arg {int paddr; int lport; int net; } ;
typedef int __u32 ;


 int FUNC_0 (int ,int ,int ,int ) ;

__attribute__((used)) static inline __u32 FUNC_1(const void *VAR_0, u32 VAR_1, u32 VAR_2)
{
 const struct sctp_hash_cmp_arg *VAR_3 = VAR_0;

 return FUNC_0(VAR_3->net, VAR_3->lport, VAR_3->paddr, VAR_2);
}
