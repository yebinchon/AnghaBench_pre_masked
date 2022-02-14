
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ host; } ;
typedef TYPE_1__ php_url ;


 size_t FUNC_0 (scalar_t__) ;
 char* FUNC_1 (scalar_t__) ;
 char* FUNC_2 (char const*,size_t,int) ;
 int FUNC_3 (TYPE_1__*) ;
 TYPE_1__* FUNC_4 (char const*,size_t) ;

__attribute__((used)) static char *FUNC_5(const char *VAR_0,
  size_t VAR_1, int VAR_2)
{
 php_url *VAR_3;

 if (!VAR_0) {
  return ((void*)0);
 }

 VAR_3 = FUNC_4(VAR_0, VAR_1);
 if (!VAR_3) {
  return ((void*)0);
 }

 if (VAR_3->host) {
  const char * VAR_4 = FUNC_1(VAR_3->host);
  char * VAR_5 = ((void*)0);
  size_t VAR_6 = FUNC_0(VAR_3->host);


  while (VAR_6 && VAR_4[VAR_6-1] == '.') {
   --VAR_6;
  }

  if (VAR_6) {
   VAR_5 = FUNC_2(VAR_4, VAR_6, VAR_2);
  }

  FUNC_3(VAR_3);
  return VAR_5;
 }

 FUNC_3(VAR_3);
 return ((void*)0);
}
