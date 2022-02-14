
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {struct net_device* dev; } ;
struct net_device {int hard_header_len; } ;
struct dn_ifaddr {int ifa_local; } ;
typedef int __le16 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct sk_buff* FUNC_0 (int *,int,int ) ;
 int FUNC_1 (char*,int ) ;
 int VAR_3 ;
 int FUNC_2 (struct sk_buff*,int ,char*) ;
 int FUNC_3 (struct sk_buff*,int ) ;
 unsigned char* FUNC_4 (struct sk_buff*,int) ;

__attribute__((used)) static void FUNC_5(struct net_device *VAR_4, struct dn_ifaddr *VAR_5)
{
 int VAR_6 = 16;
 int VAR_7 = VAR_4->hard_header_len + 2 + 4 + VAR_6;
 struct sk_buff *VAR_8 = FUNC_0(((void*)0), VAR_7, VAR_2);
 int VAR_9;
 unsigned char *VAR_10;
 char VAR_11[VAR_1];

 if (VAR_8 == ((void*)0))
  return ;

 VAR_8->dev = VAR_4;
 FUNC_3(VAR_8, VAR_4->hard_header_len);
 VAR_10 = FUNC_4(VAR_8, 2 + 4 + VAR_6);

 *VAR_10++ = VAR_0;
 *((__le16 *)VAR_10) = VAR_5->ifa_local;
 VAR_10 += 2;
 *VAR_10++ = VAR_6;

 for(VAR_9 = 0; VAR_9 < VAR_6; VAR_9++)
  *VAR_10++ = 0252;

 FUNC_1(VAR_11, VAR_5->ifa_local);
 FUNC_2(VAR_8, VAR_3, VAR_11);
}
