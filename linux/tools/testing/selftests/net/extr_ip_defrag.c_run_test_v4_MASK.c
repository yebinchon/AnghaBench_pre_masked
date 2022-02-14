
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_in {int sin_addr; int sin_port; int sin_family; int member_0; } ;
typedef int addr ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (void*,int,int) ;

__attribute__((used)) static void FUNC_2(void)
{
 struct sockaddr_in VAR_3 = {0};

 VAR_3.sin_family = VAR_0;
 VAR_3.sin_port = FUNC_0(VAR_2);
 VAR_3.sin_addr = VAR_1;

 FUNC_1((void *)&VAR_3, sizeof(VAR_3), 0 );
}
