
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct sockaddr_storage {int dummy; } ;
struct TYPE_2__ {int s_addr; } ;
struct sockaddr_in {int sin_port; int sin_family; TYPE_1__ sin_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (char const*,int,int *,char,int *) ;
 int FUNC_2 (char const*) ;

__attribute__((used)) static int FUNC_3(const char *VAR_3, u16 VAR_4,
  struct sockaddr_storage *VAR_5)
{
 struct sockaddr_in *VAR_6 = (struct sockaddr_in *)VAR_5;
 int VAR_7 = FUNC_2(VAR_3);

 if (VAR_7 > VAR_2)
  return -VAR_1;

 if (FUNC_1(VAR_3, VAR_7, (u8 *)&VAR_6->sin_addr.s_addr,
       '\n', ((void*)0)) == 0)
  return -VAR_1;

 VAR_6->sin_family = VAR_0;
 VAR_6->sin_port = FUNC_0(VAR_4);

 return 0;
}
