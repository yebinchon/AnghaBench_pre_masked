
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr {int sa_family; } ;
typedef int socklen_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int,struct sockaddr*,int ) ;
 int VAR_1 ;
 int FUNC_1 (int,int ,char*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_4(struct sockaddr *VAR_2, socklen_t VAR_3)
{
 int VAR_4;

 VAR_4 = FUNC_3(VAR_2->sa_family, VAR_0, 0);
 if (VAR_4 == -1)
  FUNC_1(1, VAR_1, "socket t");

 if (FUNC_0(VAR_4, VAR_2, VAR_3))
  FUNC_1(1, VAR_1, "connect");

 FUNC_2(VAR_4);

 return VAR_4;
}
