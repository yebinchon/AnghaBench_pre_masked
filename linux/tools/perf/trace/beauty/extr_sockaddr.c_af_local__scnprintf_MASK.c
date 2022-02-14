
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_un {int sun_path; } ;
struct sockaddr {int dummy; } ;


 size_t FUNC_0 (char*,size_t,char*,int ) ;

__attribute__((used)) static size_t FUNC_1(struct sockaddr *VAR_0, char *VAR_1, size_t VAR_2)
{
 struct sockaddr_un *VAR_3 = (struct sockaddr_un *)VAR_0;
 return FUNC_0(VAR_1, VAR_2, ", path: %s", VAR_3->sun_path);
}
