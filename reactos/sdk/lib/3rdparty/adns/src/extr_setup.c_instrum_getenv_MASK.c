
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int adns_state ;


 int FUNC_0 (int ,int,int ,char*,char const*,...) ;
 char* FUNC_1 (char const*) ;

__attribute__((used)) static const char *FUNC_2(adns_state VAR_0, const char *VAR_1) {
  const char *VAR_2;

  VAR_2= FUNC_1(VAR_1);
  if (!VAR_2) FUNC_0(VAR_0,-1,0,"environment variable %s not set",VAR_1);
  else FUNC_0(VAR_0,-1,0,"environment variable %s set to `%s'",VAR_1,VAR_2);
  return VAR_2;
}
