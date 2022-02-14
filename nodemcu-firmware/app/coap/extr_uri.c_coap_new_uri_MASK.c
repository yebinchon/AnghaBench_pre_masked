
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int coap_uri_t ;


 char* FUNC_0 (unsigned char*) ;
 scalar_t__ FUNC_1 (char*,unsigned int,int *) ;
 int FUNC_2 (unsigned char*) ;
 scalar_t__ FUNC_3 (unsigned int) ;
 int FUNC_4 (char*,unsigned char const*,unsigned int) ;

coap_uri_t * FUNC_5(const unsigned char *VAR_0, unsigned int VAR_1) {
  unsigned char *VAR_2;

  VAR_2 = (unsigned char *)FUNC_3(VAR_1 + 1 + sizeof(coap_uri_t));

  if (!VAR_2)
    return ((void*)0);

  FUNC_4(FUNC_0(VAR_2), VAR_0, VAR_1);
  FUNC_0(VAR_2)[VAR_1] = '\0';

  if (FUNC_1(FUNC_0(VAR_2), VAR_1, (coap_uri_t *)VAR_2) < 0) {
    FUNC_2(VAR_2);
    return ((void*)0);
  }
  return (coap_uri_t *)VAR_2;
}
