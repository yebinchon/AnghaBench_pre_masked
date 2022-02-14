
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct udp_media_addr {int dummy; } ;
struct tipc_media_addr {int dummy; } ;
struct tipc_bearer {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 char VAR_3 ;
 int FUNC_0 (struct tipc_media_addr*,struct udp_media_addr*) ;

__attribute__((used)) static int FUNC_1(struct tipc_bearer *VAR_4, struct tipc_media_addr *VAR_5,
        char *VAR_6)
{
 struct udp_media_addr *VAR_7;

 VAR_7 = (struct udp_media_addr *) (VAR_6 + VAR_1);
 if (VAR_6[VAR_2] != VAR_3)
  return -VAR_0;
 FUNC_0(VAR_5, VAR_7);
 return 0;
}
