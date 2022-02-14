
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int * dgram; } ;
typedef TYPE_1__ parseinfo ;
typedef int byte ;
typedef scalar_t__ adns_status ;
struct TYPE_6__ {int i; int ha; } ;
typedef TYPE_2__ adns_rr_inthostaddr ;


 int FUNC_0 (int,int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_1 (TYPE_1__ const*,int*,int,int *) ;

__attribute__((used)) static adns_status FUNC_2(const parseinfo *VAR_2, int VAR_3, int VAR_4, void *VAR_5) {
  const byte *VAR_6= VAR_2->dgram;
  adns_rr_inthostaddr *VAR_7= VAR_5;
  adns_status VAR_8;
  int VAR_9;

  if (VAR_3+2 > VAR_4) return VAR_0;
  FUNC_0(VAR_3,VAR_9);
  VAR_7->i= VAR_9;
  VAR_8= FUNC_1(VAR_2, &VAR_3, VAR_4, &VAR_7->ha);
  if (VAR_8) return VAR_8;

  if (VAR_3 != VAR_4) return VAR_0;
  return VAR_1;
}
