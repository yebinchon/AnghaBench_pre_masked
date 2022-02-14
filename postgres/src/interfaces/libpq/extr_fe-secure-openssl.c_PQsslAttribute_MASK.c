
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int sslbits_str ;
struct TYPE_3__ {int * ssl; } ;
typedef TYPE_1__ PGconn ;


 char const* FUNC_0 (int *) ;
 int FUNC_1 (int *,int*) ;
 scalar_t__ FUNC_2 (int *) ;
 char const* FUNC_3 (int *) ;
 int FUNC_4 (char*,int,char*,int) ;
 scalar_t__ FUNC_5 (char const*,char*) ;

const char *
FUNC_6(PGconn *VAR_0, const char *VAR_1)
{
 if (!VAR_0)
  return ((void*)0);
 if (VAR_0->ssl == ((void*)0))
  return ((void*)0);

 if (FUNC_5(VAR_1, "library") == 0)
  return "OpenSSL";

 if (FUNC_5(VAR_1, "key_bits") == 0)
 {
  static char VAR_2[12];
  int VAR_3;

  FUNC_1(VAR_0->ssl, &VAR_3);
  FUNC_4(VAR_2, sizeof(VAR_2), "%d", VAR_3);
  return VAR_2;
 }

 if (FUNC_5(VAR_1, "cipher") == 0)
  return FUNC_0(VAR_0->ssl);

 if (FUNC_5(VAR_1, "compression") == 0)
  return FUNC_2(VAR_0->ssl) ? "on" : "off";

 if (FUNC_5(VAR_1, "protocol") == 0)
  return FUNC_3(VAR_0->ssl);

 return ((void*)0);
}
