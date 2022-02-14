
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcp_sock {int advmss; } ;
struct sock {int dummy; } ;
struct dst_entry {int dummy; } ;
typedef int __u16 ;


 struct dst_entry* FUNC_0 (struct sock*) ;
 unsigned int FUNC_1 (struct dst_entry const*) ;
 struct tcp_sock* FUNC_2 (struct sock*) ;

__attribute__((used)) static __u16 FUNC_3(struct sock *VAR_0)
{
 struct tcp_sock *VAR_1 = FUNC_2(VAR_0);
 const struct dst_entry *VAR_2 = FUNC_0(VAR_0);
 int VAR_3 = VAR_1->advmss;

 if (VAR_2) {
  unsigned int VAR_4 = FUNC_1(VAR_2);

  if (VAR_4 < VAR_3) {
   VAR_3 = VAR_4;
   VAR_1->advmss = VAR_3;
  }
 }

 return (__u16)VAR_3;
}
