
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint16_t ;
struct sockaddr_in6 {int sin6_addr; } ;
struct TYPE_2__ {int s_addr; } ;
struct sockaddr_in {TYPE_1__ sin_addr; } ;
struct sockaddr {int dummy; } ;




 int VAR_0 ;
 int FUNC_0 (int,int ,char*,int) ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 struct sockaddr* FUNC_2 (int,int ) ;

__attribute__((used)) static struct sockaddr *FUNC_3(int VAR_2, uint16_t VAR_3)
{
 struct sockaddr *VAR_4 = FUNC_2(VAR_2, VAR_3);
 struct sockaddr_in *VAR_5;
 struct sockaddr_in6 *VAR_6;

 switch (VAR_2) {
 case 129:
  VAR_5 = (struct sockaddr_in *)VAR_4;
  VAR_5->sin_addr.s_addr = FUNC_1(VAR_0);
  break;
 case 128:
  VAR_6 = (struct sockaddr_in6 *)VAR_4;
  VAR_6->sin6_addr = VAR_1;
  break;
 default:
  FUNC_0(1, 0, "Unsupported family %d", VAR_2);
 }
 return VAR_4;
}
