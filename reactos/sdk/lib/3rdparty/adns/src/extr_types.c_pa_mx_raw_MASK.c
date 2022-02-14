
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {TYPE_1__* qu; int * dgram; } ;
typedef TYPE_2__ parseinfo ;
typedef int byte ;
typedef scalar_t__ adns_status ;
struct TYPE_8__ {int i; int str; } ;
typedef TYPE_3__ adns_rr_intstr ;
struct TYPE_6__ {int flags; } ;


 int FUNC_0 (int,int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_1 (TYPE_2__ const*,int*,int,int *,int ) ;
 int VAR_3 ;

__attribute__((used)) static adns_status FUNC_2(const parseinfo *VAR_4, int VAR_5, int VAR_6, void *VAR_7) {
  const byte *VAR_8= VAR_4->dgram;
  adns_rr_intstr *VAR_9= VAR_7;
  adns_status VAR_10;
  int VAR_11;

  if (VAR_5+2 > VAR_6) return VAR_1;
  FUNC_0(VAR_5,VAR_11);
  VAR_9->i= VAR_11;
  VAR_10= FUNC_1(VAR_4, &VAR_5, VAR_6, &VAR_9->str,
   VAR_4->qu->flags & VAR_0 ? VAR_3 : 0);
  if (VAR_10) return VAR_10;

  if (VAR_5 != VAR_6) return VAR_1;
  return VAR_2;
}
