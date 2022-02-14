
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int vbuf ;
typedef int adns_status ;
struct TYPE_8__ {int sa_family; } ;
struct TYPE_6__ {int sin_family; int sin_addr; } ;
struct TYPE_7__ {TYPE_3__ sa; TYPE_1__ inet; } ;
struct TYPE_9__ {TYPE_2__ addr; } ;
typedef TYPE_4__ adns_rr_addr ;



 int FUNC_0 (char const*) ;
 int VAR_0 ;
 int FUNC_1 (char const*) ;
 char* FUNC_2 (int ) ;
 int FUNC_3 (char*,char*,int) ;

__attribute__((used)) static adns_status FUNC_4(vbuf *VAR_1, const adns_rr_addr *VAR_2) {
  const char *VAR_3;
  static char VAR_4[30];

  switch (VAR_2->addr.inet.sin_family) {
  case 128:
    FUNC_0("INET ");
    VAR_3= FUNC_2(VAR_2->addr.inet.sin_addr); FUNC_1(VAR_3);
    FUNC_0(VAR_3);
    break;
  default:
    FUNC_3(VAR_4,"AF=%u",VAR_2->addr.sa.sa_family);
    FUNC_0(VAR_4);
    break;
  }
  return VAR_0;
}
