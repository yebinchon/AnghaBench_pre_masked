
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_storage {int dummy; } ;
struct sockaddr_in6 {int sin6_addr; void* sin6_port; void* sin6_family; int sin_addr; void* sin_port; void* sin_family; } ;
struct sockaddr_in {int sin6_addr; void* sin6_port; void* sin6_family; int sin_addr; void* sin_port; void* sin_family; } ;


 void* VAR_0 ;
 void* VAR_1 ;


 int VAR_2 ;
 int FUNC_0 (int,int ,char*,...) ;
 void* FUNC_1 (int ) ;
 int FUNC_2 (void*,char const*,int *) ;
 int FUNC_3 (struct sockaddr_in6*,int ,int) ;

__attribute__((used)) static void FUNC_4(int VAR_3, const char *VAR_4,
      struct sockaddr_storage *VAR_5)
{
 struct sockaddr_in6 *VAR_6 = (void *) VAR_5;
 struct sockaddr_in *VAR_7 = (void *) VAR_5;

 switch (VAR_3) {
 case 129:
  FUNC_3(VAR_7, 0, sizeof(*VAR_7));
  VAR_7->sin_family = VAR_0;
  VAR_7->sin_port = FUNC_1(VAR_2);
  if (VAR_4 &&
      FUNC_2(VAR_0, VAR_4, &(VAR_7->sin_addr)) != 1)
   FUNC_0(1, 0, "ipv4 parse error: %s", VAR_4);
  break;
 case 128:
  FUNC_3(VAR_6, 0, sizeof(*VAR_6));
  VAR_6->sin6_family = VAR_1;
  VAR_6->sin6_port = FUNC_1(VAR_2);
  if (VAR_4 &&
      FUNC_2(VAR_1, VAR_4, &(VAR_6->sin6_addr)) != 1)
   FUNC_0(1, 0, "ipv6 parse error: %s", VAR_4);
  break;
 default:
  FUNC_0(1, 0, "illegal domain");
 }
}
