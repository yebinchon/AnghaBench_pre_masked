
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
typedef int tmp ;
struct sockaddr_in6 {scalar_t__ sin6_scope_id; int sin6_addr; int sin6_family; int sin6_port; int sin6_flowinfo; } ;
struct sockaddr {int dummy; } ;


 int FUNC_0 (int ,int *,char*,int) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 size_t FUNC_3 (char*,size_t,char*,scalar_t__,...) ;

__attribute__((used)) static size_t FUNC_4(struct sockaddr *VAR_0, char *VAR_1, size_t VAR_2)
{
 struct sockaddr_in6 *VAR_3 = (struct sockaddr_in6 *)VAR_0;
 u32 VAR_4 = FUNC_1(VAR_3->sin6_flowinfo);
 char VAR_5[512];
 size_t VAR_6 = FUNC_3(VAR_1, VAR_2, ", port: %d, addr: %s", FUNC_2(VAR_3->sin6_port),
       FUNC_0(VAR_3->sin6_family, &VAR_3->sin6_addr, VAR_5, sizeof(VAR_5)));
 if (VAR_4 != 0)
  VAR_6 += FUNC_3(VAR_1 + VAR_6, VAR_2 - VAR_6, ", flowinfo: %lu", VAR_4);
 if (VAR_3->sin6_scope_id != 0)
  VAR_6 += FUNC_3(VAR_1 + VAR_6, VAR_2 - VAR_6, ", scope_id: %lu", VAR_3->sin6_scope_id);

 return VAR_6;
}
