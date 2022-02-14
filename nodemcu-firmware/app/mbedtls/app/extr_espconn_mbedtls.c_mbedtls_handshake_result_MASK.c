
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_8__ ;
typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int vrfy_buf ;
typedef TYPE_6__* pmbedtls_msg ;
struct TYPE_17__ {scalar_t__ state; } ;
struct TYPE_12__ {int flag; } ;
struct TYPE_13__ {TYPE_3__ cert_ca_sector; } ;
struct TYPE_10__ {int flag; } ;
struct TYPE_11__ {TYPE_1__ cert_ca_sector; } ;
struct TYPE_16__ {TYPE_4__ server; TYPE_2__ client; } ;
struct TYPE_14__ {int fd; } ;
struct TYPE_15__ {int verify_result; TYPE_8__ ssl; TYPE_5__ listen_fd; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_8__*) ;
 int FUNC_1 (char*,int,char*,int) ;
 int FUNC_2 (char*,int ,int) ;
 int FUNC_3 (char*,char*) ;
 TYPE_7__ VAR_1 ;

__attribute__((used)) static bool FUNC_4(const pmbedtls_msg VAR_2)
{
 if (VAR_2 == ((void*)0))
  return 0;

 if (VAR_2->ssl.state == VAR_0) {
  int VAR_3 = 0;
  if (VAR_2->listen_fd.fd == -1)
   VAR_3 = VAR_1.client.cert_ca_sector.flag;
  else
   VAR_3 = VAR_1.server.cert_ca_sector.flag;

  if (VAR_3 == 1){
   VAR_3 = FUNC_0(&VAR_2->ssl);
   if (VAR_3 != 0) {
    char VAR_4[512];
    FUNC_2(VAR_4, 0, sizeof(VAR_4)-1);
    FUNC_1(VAR_4, sizeof(VAR_4), "!", VAR_3);
    FUNC_3("%s\n", VAR_4);
    VAR_2->verify_result = VAR_3;
    return 0;
   } else
    return 1;
  } else
   return 1;
 }else
  return 0;
}
