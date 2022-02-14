
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct in_addr {int dummy; } ;
typedef int adns_state ;


 int FUNC_0 (int ,struct in_addr) ;
 int FUNC_1 (int ,int,int ,char*,int ) ;
 int FUNC_2 (int ,char const*,int,char*,char const*) ;
 int FUNC_3 (char const*,struct in_addr*) ;
 int FUNC_4 (struct in_addr) ;

__attribute__((used)) static void FUNC_5(adns_state VAR_0, const char *VAR_1, int VAR_2, const char *VAR_3) {
  struct in_addr VAR_4;

  if (!FUNC_3(VAR_3,&VAR_4)) {
    FUNC_2(VAR_0,VAR_1,VAR_2,"invalid nameserver address `%s'",VAR_3);
    return;
  }
  FUNC_1(VAR_0,-1,0,"using nameserver %s",FUNC_4(VAR_4));
  FUNC_0(VAR_0,VAR_4);
}
