
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int sk_rx_dst; } ;
struct dst_entry {int dummy; } ;


 scalar_t__ FUNC_0 (struct dst_entry*) ;
 int FUNC_1 (struct dst_entry*) ;
 struct dst_entry* FUNC_2 (int *,struct dst_entry*) ;

bool FUNC_3(struct sock *VAR_0, struct dst_entry *VAR_1)
{
 struct dst_entry *VAR_2;

 if (FUNC_0(VAR_1)) {
  VAR_2 = FUNC_2(&VAR_0->sk_rx_dst, VAR_1);
  FUNC_1(VAR_2);
  return VAR_2 != VAR_1;
 }
 return 0;
}
