
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int qu; int * dgram; } ;
typedef TYPE_1__ parseinfo ;
typedef int byte ;
typedef scalar_t__ adns_status ;
struct TYPE_7__ {int i; scalar_t__ str; } ;
typedef TYPE_2__ adns_rr_intstr ;


 int FUNC_0 (int,int) ;
 int VAR_0 ;
 TYPE_2__* FUNC_1 (int ,int) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (TYPE_1__ const*,int*,int,int*,scalar_t__*) ;

__attribute__((used)) static adns_status FUNC_4(const parseinfo *VAR_3, int VAR_4, int VAR_5, void *VAR_6) {
  adns_rr_intstr **VAR_7= VAR_6, *VAR_8, *VAR_9;
  const byte *VAR_10= VAR_3->dgram;
  int VAR_11, VAR_12, VAR_13, VAR_14;
  adns_status VAR_15;

  VAR_14= VAR_4;
  if (VAR_4 >= VAR_5) return VAR_1;
  VAR_12= 0;
  while (VAR_4 < VAR_5) {
    FUNC_0(VAR_4,VAR_13);
    VAR_4+= VAR_13;
    VAR_12++;
  }
  if (VAR_4 != VAR_5 || !VAR_12) return VAR_1;

  VAR_8= FUNC_1(VAR_3->qu,sizeof(*VAR_8)*(VAR_12+1));
  if (!VAR_8) VAR_0;

  for (VAR_4=VAR_14, VAR_11=0, VAR_9=VAR_8; VAR_11<VAR_12; VAR_11++, VAR_9++) {
    VAR_15= FUNC_3(VAR_3, &VAR_4, VAR_5, &VAR_9->i, &VAR_9->str);
    if (VAR_15) return VAR_15;
  }
  FUNC_2(VAR_4 == VAR_5);

  VAR_9->i= -1;
  VAR_9->str= 0;

  *VAR_7= VAR_8;
  return VAR_2;
}
