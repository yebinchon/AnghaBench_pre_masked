
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inet_sock {int uc_ttl; } ;
struct dst_entry {int dummy; } ;


 int FUNC_0 (struct dst_entry*) ;

__attribute__((used)) static inline int FUNC_1(struct inet_sock *VAR_0, struct dst_entry *VAR_1)
{
 int VAR_2 = VAR_0->uc_ttl;

 if (VAR_2 < 0)
  VAR_2 = FUNC_0(VAR_1);
 return VAR_2;
}
