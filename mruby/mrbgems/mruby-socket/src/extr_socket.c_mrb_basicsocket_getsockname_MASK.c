
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_storage {int dummy; } ;
struct sockaddr {int dummy; } ;
typedef int ss ;
typedef int socklen_t ;
typedef int mrb_value ;
typedef int mrb_state ;


 scalar_t__ FUNC_0 (int ,struct sockaddr*,int*) ;
 int FUNC_1 (int *,char*,int) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (int *,int ) ;

__attribute__((used)) static mrb_value
FUNC_4(mrb_state *VAR_0, mrb_value VAR_1)
{
  struct sockaddr_storage VAR_2;
  socklen_t VAR_3;

  VAR_3 = sizeof(VAR_2);
  if (FUNC_0(FUNC_3(VAR_0, VAR_1), (struct sockaddr *)&VAR_2, &VAR_3) != 0)
    FUNC_2(VAR_0, "getsockname");

  return FUNC_1(VAR_0, (char*)&VAR_2, VAR_3);
}
