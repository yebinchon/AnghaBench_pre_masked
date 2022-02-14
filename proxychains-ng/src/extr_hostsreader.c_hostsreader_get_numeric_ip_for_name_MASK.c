
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct in_addr {int s_addr; } ;
struct TYPE_6__ {int octet; } ;
typedef TYPE_2__ ip_type4 ;
struct TYPE_5__ {TYPE_2__ v4; } ;
struct TYPE_7__ {TYPE_1__ addr; } ;


 char* FUNC_0 (char const*,char*,int) ;
 int FUNC_1 (char*,struct in_addr*) ;
 TYPE_3__ VAR_0 ;
 int FUNC_2 (int ,int *,int) ;

ip_type4 FUNC_3(const char* VAR_1) {
 char *VAR_2;
 char VAR_3[320];
 if((VAR_2 = FUNC_0(VAR_1, VAR_3, sizeof VAR_3))) {
  struct in_addr VAR_4;
  FUNC_1(VAR_2, &VAR_4);
  ip_type4 VAR_5;
  FUNC_2(VAR_5.octet, &VAR_4.s_addr, 4);
  return VAR_5;
 } else return VAR_0.addr.v4;
}
