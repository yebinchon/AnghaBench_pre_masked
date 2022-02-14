
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_in6 {int sin6_addr; int sin6_family; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct sockaddr_in6*,int ,int) ;

__attribute__((used)) static void FUNC_1(struct sockaddr_in6 *VAR_2)
{
 FUNC_0(VAR_2, 0, sizeof(*VAR_2));
 VAR_2->sin6_family = VAR_0;
 VAR_2->sin6_addr = VAR_1;
}
