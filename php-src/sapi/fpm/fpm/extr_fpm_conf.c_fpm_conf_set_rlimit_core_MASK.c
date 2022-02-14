
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zval ;


 char* FUNC_0 (int *) ;
 char* FUNC_1 (int *,void**,int ) ;
 int FUNC_2 (char*,char*) ;

__attribute__((used)) static char *FUNC_3(zval *VAR_0, void **VAR_1, intptr_t VAR_2)
{
 char *VAR_3 = FUNC_0(VAR_0);
 int *VAR_4 = (int *) ((char *) *VAR_1 + VAR_2);

 if (!FUNC_2(VAR_3, "unlimited")) {
  *VAR_4 = -1;
 } else {
  int VAR_5;
  void *VAR_6 = &VAR_5;
  char *VAR_7;

  VAR_7 = FUNC_1(VAR_0, &VAR_6, 0);

  if (VAR_7) {
   return VAR_7;
  }

  if (VAR_5 < 0) {
   return "must be greater than zero or 'unlimited'";
  }

  *VAR_4 = VAR_5;
 }

 return ((void*)0);
}
