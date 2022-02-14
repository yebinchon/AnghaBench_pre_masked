
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct in_addr {int dummy; } ;
struct TYPE_3__ {scalar_t__ dgram; } ;
typedef TYPE_1__ parseinfo ;
typedef int adns_status ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct in_addr*,scalar_t__,int) ;

__attribute__((used)) static adns_status FUNC_1(const parseinfo *VAR_2, int VAR_3, int VAR_4, void *VAR_5) {
  struct in_addr *VAR_6= VAR_5;

  if (VAR_4-VAR_3 != 4) return VAR_0;
  FUNC_0(VAR_6, VAR_2->dgram + VAR_3, 4);
  return VAR_1;
}
