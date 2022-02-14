
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tmp ;
struct sockaddr_in {int sin_addr; int sin_family; int sin_port; } ;
struct sockaddr {int dummy; } ;


 int FUNC_0 (int ,int *,char*,int) ;
 int FUNC_1 (int ) ;
 size_t FUNC_2 (char*,size_t,char*,int ,int ) ;

__attribute__((used)) static size_t FUNC_3(struct sockaddr *VAR_0, char *VAR_1, size_t VAR_2)
{
 struct sockaddr_in *VAR_3 = (struct sockaddr_in *)VAR_0;
 char VAR_4[16];
 return FUNC_2(VAR_1, VAR_2, ", port: %d, addr: %s", FUNC_1(VAR_3->sin_port),
    FUNC_0(VAR_3->sin_family, &VAR_3->sin_addr, VAR_4, sizeof(VAR_4)));
}
