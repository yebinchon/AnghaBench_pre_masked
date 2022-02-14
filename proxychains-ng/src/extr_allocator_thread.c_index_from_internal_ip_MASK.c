
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_3__ {int* octet; } ;
typedef TYPE_1__ ip_type4 ;


 int FUNC_0 () ;

uint32_t FUNC_1(ip_type4 VAR_0) {
 FUNC_0();
 ip_type4 VAR_1 = VAR_0;
 uint32_t VAR_2;
 VAR_2 = VAR_1.octet[3] + (VAR_1.octet[2] << 8) + (VAR_1.octet[1] << 16);
 VAR_2 -= 1;
 return VAR_2;
}
