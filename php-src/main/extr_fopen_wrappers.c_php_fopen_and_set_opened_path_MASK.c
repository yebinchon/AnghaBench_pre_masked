
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zend_string ;
typedef int FILE ;


 int VAR_0 ;
 int * FUNC_0 (char const*,char const*) ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (char const*,int *,int *,int ,int ) ;
 scalar_t__ FUNC_3 (char*) ;
 int FUNC_4 (char*) ;
 int * FUNC_5 (char*,int ,int ) ;

__attribute__((used)) static FILE *FUNC_6(const char *VAR_1, const char *VAR_2, zend_string **VAR_3)
{
 FILE *VAR_4;

 if (FUNC_3((char *)VAR_1)) {
  return ((void*)0);
 }
 VAR_4 = FUNC_0(VAR_1, VAR_2);
 if (VAR_4 && VAR_3) {

  char *VAR_5 = FUNC_2(VAR_1, ((void*)0), ((void*)0), 0, VAR_0);
  if (VAR_5) {
   *VAR_3 = FUNC_5(VAR_5, FUNC_4(VAR_5), 0);
   FUNC_1(VAR_5);
  }
 }
 return VAR_4;
}
