
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mbedtls_pk_context ;
typedef scalar_t__ mbedtls_ecp_group_id ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (char const*) ;
 int FUNC_2 (int ,char*,char*) ;
 int FUNC_3 (int *,int,unsigned int,int,scalar_t__,int) ;
 int FUNC_4 (int *) ;
 int VAR_2 ;
 int FUNC_5 (char*,char*) ;
 int FUNC_6 (int *,char*,int) ;

int FUNC_7(bool VAR_3, char **VAR_4)
{
 mbedtls_pk_context VAR_5;
 unsigned int VAR_6 = 512;
 int VAR_7 = 65537;
 char *VAR_8 = ((void*)0);
 bool VAR_9 = 1;
 mbedtls_ecp_group_id VAR_10 = VAR_1;

 while (*VAR_4 && **VAR_4 == '-') {
  if (!FUNC_5(*VAR_4, "-out") && VAR_4[1]) {
   VAR_8 = VAR_4[1];
   VAR_4++;
  } else if (!FUNC_5(*VAR_4, "-3")) {
   VAR_7 = 3;
  } else if (!FUNC_5(*VAR_4, "-der")) {
   VAR_9 = 0;
  }
  VAR_4++;
 }

 if (*VAR_4 && VAR_3) {
  VAR_6 = (unsigned int)FUNC_0(*VAR_4);
 } else if (*VAR_4) {
  VAR_10 = FUNC_1((const char *)*VAR_4);
  if (VAR_10 == VAR_0) {
   FUNC_2(VAR_2, "error: invalid curve name: %s\n", *VAR_4);
   return 1;
  }
 }

 FUNC_3(&VAR_5, VAR_3, VAR_6, VAR_7, VAR_10, VAR_9);
 FUNC_6(&VAR_5, VAR_8, VAR_9);

 FUNC_4(&VAR_5);

 return 0;
}
