
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zval ;
struct sockaddr_un {int sun_path; } ;
typedef int res_context ;


 int FUNC_0 (int *,int ,int) ;
 int FUNC_1 (int *,char*) ;
 char* FUNC_2 (int *,char,int) ;

__attribute__((used)) static void FUNC_3(const char *VAR_0, zval *VAR_1, res_context *VAR_2) {
 struct sockaddr_un *VAR_3 = (struct sockaddr_un*)VAR_0;
 char *VAR_4;

 VAR_4 = FUNC_2(&VAR_3->sun_path, '\0', sizeof(VAR_3->sun_path));
 if (VAR_4 == ((void*)0)) {
  FUNC_1(VAR_2, "could not find a NUL in the path");
  return;
 }

 FUNC_0(VAR_1, VAR_3->sun_path, VAR_4 - (char*)&VAR_3->sun_path);
}
