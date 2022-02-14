
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint16_t ;
struct sockaddr_storage {int dummy; } ;
struct sockaddr_in6 {int sin6_family; void* sin6_port; int sin6_addr; } ;
struct TYPE_2__ {int s_addr; } ;
struct sockaddr_in {int sin_family; void* sin_port; TYPE_1__ sin_addr; } ;
struct sockaddr {int dummy; } ;




 int VAR_0 ;
 int FUNC_0 (int,int ,char*,int) ;
 int FUNC_1 (int ) ;
 void* FUNC_2 (int ) ;
 int VAR_1 ;
 struct sockaddr_storage* FUNC_3 (int) ;
 int FUNC_4 (struct sockaddr_storage*,int ,int) ;

__attribute__((used)) static struct sockaddr *FUNC_5(int VAR_2, uint16_t VAR_3)
{
 struct sockaddr_storage *VAR_4;
 struct sockaddr_in *VAR_5;
 struct sockaddr_in6 *VAR_6;

 VAR_4 = FUNC_3(sizeof(struct sockaddr_storage));
 FUNC_4(VAR_4, 0, sizeof(struct sockaddr_storage));

 switch (VAR_2) {
 case 129:
  VAR_5 = (struct sockaddr_in *)VAR_4;
  VAR_5->sin_family = 129;
  VAR_5->sin_addr.s_addr = FUNC_1(VAR_0);
  VAR_5->sin_port = FUNC_2(VAR_3);
  break;
 case 128:
  VAR_6 = (struct sockaddr_in6 *)VAR_4;
  VAR_6->sin6_family = 128;
  VAR_6->sin6_addr = VAR_1;
  VAR_6->sin6_port = FUNC_2(VAR_3);
  break;
 default:
  FUNC_0(1, 0, "Unsupported family %d", VAR_2);
 }
 return (struct sockaddr *)VAR_4;
}
