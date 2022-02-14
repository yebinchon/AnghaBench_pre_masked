
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sockaddr_storage {int dummy; } ;
struct TYPE_2__ {int s_addr; } ;
struct sockaddr_in6 {void* sin6_port; int sin6_addr; int sin6_family; void* sin_port; TYPE_1__ sin_addr; int sin_family; } ;
struct sockaddr_in {void* sin6_port; int sin6_addr; int sin6_family; void* sin_port; TYPE_1__ sin_addr; int sin_family; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;


 int FUNC_0 (int,int ,char*) ;
 int FUNC_1 (int ) ;
 void* FUNC_2 (int ) ;
 int VAR_3 ;
 int FUNC_3 (struct sockaddr_in6*,int ,int) ;
 int VAR_4 ;

__attribute__((used)) static void FUNC_4(int VAR_5, struct sockaddr_storage *VAR_6)
{
 struct sockaddr_in6 *VAR_7 = (void *) VAR_6;
 struct sockaddr_in *VAR_8 = (void *) VAR_6;

 switch (VAR_5) {
 case 129:
  FUNC_3(VAR_8, 0, sizeof(*VAR_8));
  VAR_8->sin_family = VAR_0;
  VAR_8->sin_addr.s_addr = FUNC_1(VAR_2);
  VAR_8->sin_port = FUNC_2(VAR_4);
  break;
 case 128:
  FUNC_3(VAR_7, 0, sizeof(*VAR_7));
  VAR_7->sin6_family = VAR_1;
  VAR_7->sin6_addr = VAR_3;
  VAR_7->sin6_port = FUNC_2(VAR_4);
  break;
 default:
  FUNC_0(1, 0, "illegal family");
 }
}
