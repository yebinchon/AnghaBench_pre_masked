
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zval ;
typedef int zend_string ;
struct sockaddr_un {char* sun_path; } ;
typedef int ser_context ;


 size_t FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,char*,...) ;
 int FUNC_3 (char**,int ,size_t) ;
 int FUNC_4 (int *) ;
 int * FUNC_5 (int *,int **) ;

__attribute__((used)) static void FUNC_6(const zval *VAR_0, char *VAR_1, ser_context *VAR_2)
{
 zend_string *VAR_3, *VAR_4;
 struct sockaddr_un *VAR_5 = (struct sockaddr_un*)VAR_1;

 VAR_3 = FUNC_5((zval *) VAR_0, &VAR_4);




 if (FUNC_0(VAR_3) == 0) {
  FUNC_2(VAR_2, "%s", "the path is cannot be empty");
  FUNC_4(VAR_4);
  return;
 }
 if (FUNC_0(VAR_3) >= sizeof(VAR_5->sun_path)) {
  FUNC_2(VAR_2, "the path is too long, the maximum permitted "
    "length is %zd", sizeof(VAR_5->sun_path) - 1);
  FUNC_4(VAR_4);
  return;
 }

 FUNC_3(&VAR_5->sun_path, FUNC_1(VAR_3), FUNC_0(VAR_3));
 VAR_5->sun_path[FUNC_0(VAR_3)] = '\0';

 FUNC_4(VAR_4);
}
