
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {TYPE_1__* qu; int * dgram; } ;
typedef TYPE_2__ parseinfo ;
typedef int byte ;
typedef scalar_t__ adns_status ;
struct TYPE_9__ {int serial; int rname; int mname; } ;
typedef TYPE_3__ adns_rr_soa ;
struct TYPE_7__ {int flags; } ;


 int FUNC_0 (int,int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_1 (TYPE_2__ const*,int*,int,int *,int ) ;
 scalar_t__ FUNC_2 (TYPE_2__ const*,int*,int,int *) ;
 int VAR_3 ;

__attribute__((used)) static adns_status FUNC_3(const parseinfo *VAR_4, int VAR_5, int VAR_6, void *VAR_7) {
  adns_rr_soa *VAR_8= VAR_7;
  const byte *VAR_9= VAR_4->dgram;
  adns_status VAR_10;
  int VAR_11, VAR_12, VAR_13;

  VAR_10= FUNC_1(VAR_4, &VAR_5, VAR_6, &VAR_8->mname,
   VAR_4->qu->flags & VAR_0 ? VAR_3 : 0);
  if (VAR_10) return VAR_10;

  VAR_10= FUNC_2(VAR_4, &VAR_5, VAR_6, &VAR_8->rname);
  if (VAR_10) return VAR_10;

  if (VAR_5+20 != VAR_6) return VAR_1;

  for (VAR_13=0; VAR_13<5; VAR_13++) {
    FUNC_0(VAR_5,VAR_11);
    FUNC_0(VAR_5,VAR_12);
    (&VAR_8->serial)[VAR_13]= (VAR_11<<16) | VAR_12;
  }

  return VAR_2;
}
