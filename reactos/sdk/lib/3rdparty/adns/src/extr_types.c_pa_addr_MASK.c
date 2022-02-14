
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int * dgram; } ;
typedef TYPE_2__ parseinfo ;
typedef int byte ;
typedef int adns_status ;
struct TYPE_6__ {int sin_addr; int sin_family; } ;
struct TYPE_9__ {TYPE_1__ inet; } ;
struct TYPE_8__ {int len; TYPE_5__ addr; } ;
typedef TYPE_3__ adns_rr_addr ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int const*,int) ;
 int FUNC_1 (TYPE_5__*,int ,int) ;

__attribute__((used)) static adns_status FUNC_2(const parseinfo *VAR_3, int VAR_4, int VAR_5, void *VAR_6) {
  adns_rr_addr *VAR_7= VAR_6;
  const byte *VAR_8= VAR_3->dgram;

  if (VAR_5-VAR_4 != 4) return VAR_1;
  VAR_7->len= sizeof(VAR_7->addr.inet);
  FUNC_1(&VAR_7->addr,0,sizeof(VAR_7->addr.inet));
  VAR_7->addr.inet.sin_family= VAR_0;
  FUNC_0(&VAR_7->addr.inet.sin_addr,VAR_8+VAR_4,4);
  return VAR_2;
}
