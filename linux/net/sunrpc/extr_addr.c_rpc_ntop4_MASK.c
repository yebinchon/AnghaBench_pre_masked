
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_in {int sin_addr; } ;
struct sockaddr {int dummy; } ;


 int FUNC_0 (char*,size_t const,char*,int *) ;

__attribute__((used)) static int FUNC_1(const struct sockaddr *VAR_0,
       char *VAR_1, const size_t VAR_2)
{
 const struct sockaddr_in *VAR_3 = (struct sockaddr_in *)VAR_0;

 return FUNC_0(VAR_1, VAR_2, "%pI4", &VAR_3->sin_addr);
}
