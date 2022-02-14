
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char u8 ;
struct seg6_hmac_info {int hmackeyid; } ;
struct ipv6_sr_hdr {int first_segment; char* segments; int flags; } ;
typedef char in6_addr ;
typedef char __be32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct seg6_hmac_info*,char*,int,char*,int) ;
 char FUNC_1 (int ) ;
 int VAR_4 ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (char*,char*,int) ;
 int FUNC_5 (char*,int ,int) ;
 char* FUNC_6 (int ) ;

int FUNC_7(struct seg6_hmac_info *VAR_5, struct ipv6_sr_hdr *VAR_6,
        struct in6_addr *VAR_7, u8 *VAR_8)
{
 __be32 VAR_9 = FUNC_1(VAR_5->hmackeyid);
 u8 VAR_10[VAR_2];
 int VAR_11, VAR_12, VAR_13, VAR_14;
 char *VAR_15, *VAR_16;






 VAR_11 = 16 + 1 + 1 + 4 + (VAR_6->first_segment + 1) * 16;


 if (VAR_11 >= VAR_3)
  return -VAR_0;
 FUNC_2();
 VAR_15 = FUNC_6(VAR_4);
 VAR_16 = VAR_15;


 FUNC_4(VAR_16, VAR_7, 16);
 VAR_16 += 16;


 *VAR_16++ = VAR_6->first_segment;


 *VAR_16++ = VAR_6->flags;


 FUNC_4(VAR_16, &VAR_9, 4);
 VAR_16 += 4;


 for (VAR_12 = 0; VAR_12 < VAR_6->first_segment + 1; VAR_12++) {
  FUNC_4(VAR_16, VAR_6->segments + VAR_12, 16);
  VAR_16 += 16;
 }

 VAR_13 = FUNC_0(VAR_5, VAR_15, VAR_11, VAR_10,
      VAR_2);
 FUNC_3();

 if (VAR_13 < 0)
  return VAR_13;

 VAR_14 = VAR_1;
 if (VAR_14 > VAR_13)
  VAR_14 = VAR_13;

 FUNC_5(VAR_8, 0, VAR_1);
 FUNC_4(VAR_8, VAR_10, VAR_14);

 return 0;
}
