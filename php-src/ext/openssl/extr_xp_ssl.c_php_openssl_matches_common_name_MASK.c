
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zend_bool ;
typedef int buf ;
typedef int X509_NAME ;
typedef int X509 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ,char*,int) ;
 int * FUNC_1 (int *) ;
 int FUNC_2 (int *,int ,char*,...) ;
 scalar_t__ FUNC_3 (char const*,char*) ;
 size_t FUNC_4 (char*) ;

__attribute__((used)) static zend_bool FUNC_5(X509 *VAR_2, const char *VAR_3)
{
 char VAR_4[1024];
 X509_NAME *VAR_5;
 zend_bool VAR_6 = 0;
 int VAR_7;

 VAR_5 = FUNC_1(VAR_2);
 VAR_7 = FUNC_0(VAR_5, VAR_1, VAR_4, sizeof(VAR_4));

 if (VAR_7 == -1) {
  FUNC_2(((void*)0), VAR_0, "Unable to locate peer certificate CN");
 } else if ((size_t)VAR_7 != FUNC_4(VAR_4)) {
  FUNC_2(((void*)0), VAR_0, "Peer certificate CN=`%.*s' is malformed", VAR_7, VAR_4);
 } else if (FUNC_3(VAR_3, VAR_4)) {
  VAR_6 = 1;
 } else {
  FUNC_2(((void*)0), VAR_0,
   "Peer certificate CN=`%.*s' did not match expected CN=`%s'",
   VAR_7, VAR_4, VAR_3);
 }

 return VAR_6;
}
