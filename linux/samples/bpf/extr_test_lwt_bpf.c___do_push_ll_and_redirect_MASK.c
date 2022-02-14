
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct ethhdr {int h_dest; int h_source; int h_proto; } ;
struct __sk_buff {int dummy; } ;
typedef int ehdr ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (struct __sk_buff*,int,int ) ;
 int FUNC_3 (struct __sk_buff*,int ,struct ethhdr*,int,int ) ;
 int FUNC_4 (int *,int *,int) ;
 int FUNC_5 (char*,int) ;

__attribute__((used)) static inline int FUNC_6(struct __sk_buff *VAR_5)
{
 uint64_t VAR_6 = VAR_4, VAR_7 = VAR_2;
 int VAR_8, VAR_9 = VAR_1;
 struct ethhdr VAR_10;

 VAR_8 = FUNC_2(VAR_5, 14, 0);
 if (VAR_8 < 0) {
  FUNC_5("skb_change_head() failed: %d\n", VAR_8);
 }

 VAR_10.h_proto = FUNC_0(VAR_3);
 FUNC_4(&VAR_10.h_source, &VAR_6, 6);
 FUNC_4(&VAR_10.h_dest, &VAR_7, 6);

 VAR_8 = FUNC_3(VAR_5, 0, &VAR_10, sizeof(VAR_10), 0);
 if (VAR_8 < 0) {
  FUNC_5("skb_store_bytes() failed: %d\n", VAR_8);
  return VAR_0;
 }

 return FUNC_1(VAR_9, 0);
}
