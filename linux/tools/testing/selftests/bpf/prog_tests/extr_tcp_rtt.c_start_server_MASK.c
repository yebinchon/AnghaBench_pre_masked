
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int s_addr; } ;
struct sockaddr_in {TYPE_1__ sin_addr; int sin_family; } ;
struct sockaddr {int dummy; } ;
typedef int addr ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int,struct sockaddr const*,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_5(void)
{
 struct sockaddr_in VAR_3 = {
  .sin_family = VAR_0,
  .sin_addr.s_addr = FUNC_2(VAR_1),
 };
 int VAR_4;

 VAR_4 = FUNC_4(VAR_0, VAR_2, 0);
 if (VAR_4 < 0) {
  FUNC_3("Failed to create server socket");
  return -1;
 }

 if (FUNC_0(VAR_4, (const struct sockaddr *)&VAR_3, sizeof(VAR_3)) < 0) {
  FUNC_3("Failed to bind socket");
  FUNC_1(VAR_4);
  return -1;
 }

 return VAR_4;
}
