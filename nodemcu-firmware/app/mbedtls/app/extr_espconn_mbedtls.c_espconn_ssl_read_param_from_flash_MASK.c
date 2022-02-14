
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


typedef int uint32 ;
typedef scalar_t__ uint16 ;
struct TYPE_16__ {int auth_level; int auth_type; } ;
typedef TYPE_7__ mbedtls_auth_info ;
typedef scalar_t__ int32 ;
struct TYPE_14__ {int sector; } ;
struct TYPE_13__ {int sector; } ;
struct TYPE_15__ {TYPE_5__ cert_req_sector; TYPE_4__ cert_ca_sector; } ;
struct TYPE_11__ {int sector; } ;
struct TYPE_10__ {int sector; } ;
struct TYPE_12__ {TYPE_2__ cert_req_sector; TYPE_1__ cert_ca_sector; } ;
struct TYPE_17__ {TYPE_6__ server; TYPE_3__ client; } ;






 scalar_t__ VAR_0 ;

 int FUNC_0 (scalar_t__,void*,scalar_t__) ;
 TYPE_8__ VAR_1 ;

__attribute__((used)) static bool FUNC_1(void *VAR_2, uint16 VAR_3, int32 VAR_4, mbedtls_auth_info *VAR_5)
{
 if (VAR_2 == ((void*)0) || (VAR_3 + VAR_4) > VAR_0) {
  return 0;
 }

 uint32 VAR_6 = 0x3B;
 switch (VAR_5->auth_level) {
  case 130:
   switch (VAR_5->auth_type) {
    case 132:
     VAR_6 = VAR_1.client.cert_ca_sector.sector;
     break;
    case 131:
    case 129:
     VAR_6 = VAR_1.client.cert_req_sector.sector;
     break;
    default:
     return 0;
   }
   break;
  case 128:
   switch (VAR_5->auth_type) {
    case 132:
     VAR_6 = VAR_1.server.cert_ca_sector.sector;
     break;
    case 131:
    case 129:
     VAR_6 = VAR_1.server.cert_req_sector.sector;
     break;
    default:
     return 0;
   }
   break;
  default:
   return 0;
   break;
 }

 FUNC_0(VAR_6 * 4096 + VAR_4, VAR_2, VAR_3);

 return 1;
}
