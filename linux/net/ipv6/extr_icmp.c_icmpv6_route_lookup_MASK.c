
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int dummy; } ;
struct sk_buff {int dummy; } ;
struct net {int dummy; } ;
struct flowi6 {int daddr; } ;
struct dst_entry {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct dst_entry* FUNC_0 (int) ;
 int FUNC_1 (struct dst_entry*) ;
 int FUNC_2 (struct dst_entry*) ;
 int VAR_3 ;
 int FUNC_3 (struct dst_entry*) ;
 int FUNC_4 (struct flowi6*) ;
 int FUNC_5 (struct net*,struct sock*,struct dst_entry**,struct flowi6*) ;
 scalar_t__ FUNC_6 (struct dst_entry*,int *) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (struct sk_buff*,int ,int ) ;
 struct dst_entry* FUNC_9 (struct net*,struct dst_entry*,int ,struct sock*,int ) ;

__attribute__((used)) static struct dst_entry *FUNC_10(struct net *VAR_4,
          struct sk_buff *VAR_5,
          struct sock *VAR_6,
          struct flowi6 *VAR_7)
{
 struct dst_entry *VAR_8, *VAR_9;
 struct flowi6 VAR_10;
 int VAR_11;

 VAR_11 = FUNC_5(VAR_4, VAR_6, &VAR_8, VAR_7);
 if (VAR_11)
  return FUNC_0(VAR_11);





 if (FUNC_6(VAR_8, &VAR_7->daddr)) {
  FUNC_7("icmp6_send: acast source\n");
  FUNC_3(VAR_8);
  return FUNC_0(-VAR_1);
 }


 VAR_9 = VAR_8;

 VAR_8 = FUNC_9(VAR_4, VAR_8, FUNC_4(VAR_7), VAR_6, 0);
 if (!FUNC_1(VAR_8)) {
  if (VAR_8 != VAR_9)
   return VAR_8;
 } else {
  if (FUNC_2(VAR_8) == -VAR_2)
   VAR_8 = ((void*)0);
  else
   return VAR_8;
 }

 VAR_11 = FUNC_8(VAR_5, FUNC_4(&VAR_10), VAR_0);
 if (VAR_11)
  goto relookup_failed;

 VAR_11 = FUNC_5(VAR_4, VAR_6, &VAR_9, &VAR_10);
 if (VAR_11)
  goto relookup_failed;

 VAR_9 = FUNC_9(VAR_4, VAR_9, FUNC_4(&VAR_10), VAR_6, VAR_3);
 if (!FUNC_1(VAR_9)) {
  FUNC_3(VAR_8);
  VAR_8 = VAR_9;
 } else {
  VAR_11 = FUNC_2(VAR_9);
  if (VAR_11 == -VAR_2) {
   FUNC_3(VAR_8);
   return VAR_9;
  } else
   goto relookup_failed;
 }

relookup_failed:
 if (VAR_8)
  return VAR_8;
 return FUNC_0(VAR_11);
}
