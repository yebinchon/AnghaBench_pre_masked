
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_6__ {int* octet; } ;
typedef TYPE_2__ ip_type4 ;
struct TYPE_5__ {TYPE_2__ v4; } ;
struct TYPE_7__ {TYPE_1__ addr; } ;


 TYPE_4__ VAR_0 ;
 int VAR_1 ;

ip_type4 FUNC_0(uint32_t VAR_2) {
 ip_type4 VAR_3;
 VAR_2++;
 if(VAR_2 > 0xFFFFFF)
  return VAR_0.addr.v4;
 VAR_3.octet[0] = VAR_1 & 0xFF;
 VAR_3.octet[1] = (VAR_2 & 0xFF0000) >> 16;
 VAR_3.octet[2] = (VAR_2 & 0xFF00) >> 8;
 VAR_3.octet[3] = VAR_2 & 0xFF;
 return VAR_3;
}
