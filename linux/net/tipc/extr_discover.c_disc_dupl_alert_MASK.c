
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tipc_media_addr {int dummy; } ;
struct tipc_bearer {int name; } ;
typedef int media_addr_str ;


 int FUNC_0 (char*,int ,char*,int ) ;
 int FUNC_1 (char*,int,struct tipc_media_addr*) ;

__attribute__((used)) static void FUNC_2(struct tipc_bearer *VAR_0, u32 VAR_1,
       struct tipc_media_addr *VAR_2)
{
 char VAR_3[64];

 FUNC_1(VAR_3, sizeof(VAR_3),
          VAR_2);
 FUNC_0("Duplicate %x using %s seen on <%s>\n", VAR_1,
  VAR_3, VAR_0->name);
}
