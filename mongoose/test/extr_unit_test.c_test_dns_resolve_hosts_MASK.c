
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int s_addr; } ;
struct TYPE_4__ {TYPE_1__ sin_addr; } ;
union socket_address {TYPE_2__ sin; } ;
typedef int sa ;
typedef int in_addr_t ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (union socket_address*,int ,int) ;
 int FUNC_3 (char*,union socket_address*) ;

__attribute__((used)) static const char *FUNC_4(void) {
  union socket_address VAR_0;
  in_addr_t VAR_1 = FUNC_1("127.0.0.1");

  FUNC_2(&VAR_0, 0, sizeof(VAR_0));
  FUNC_0(FUNC_3("localhost", &VAR_0), 0);
  FUNC_0(VAR_0.sin.sin_addr.s_addr, VAR_1);
  FUNC_0(FUNC_3("does_not,exist!in_host*file", &VAR_0), -1);

  return ((void*)0);
}
