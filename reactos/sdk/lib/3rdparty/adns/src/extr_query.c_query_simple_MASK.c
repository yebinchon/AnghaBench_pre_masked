
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int vbuf ;
typedef int typeinfo ;
struct timeval {int dummy; } ;
typedef scalar_t__ adns_status ;
typedef int adns_state ;
typedef int adns_queryflags ;
typedef TYPE_1__* adns_query ;
struct TYPE_6__ {int vb; } ;


 scalar_t__ FUNC_0 (int ,int *,int*,char const*,int,int const*,int) ;
 int FUNC_1 (TYPE_1__*,scalar_t__) ;
 int FUNC_2 (int ,TYPE_1__*,struct timeval) ;
 int FUNC_3 (int *) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_4 (int ,TYPE_1__*,int const*,int *,int,int,struct timeval) ;

__attribute__((used)) static void FUNC_5(adns_state VAR_2, adns_query VAR_3,
    const char *VAR_4, int VAR_5,
    const typeinfo *VAR_6, adns_queryflags VAR_7,
    struct timeval VAR_8) {
  vbuf VAR_9;
  int VAR_10;
  adns_status VAR_11;

  VAR_11= FUNC_0(VAR_2,&VAR_3->vb,&VAR_10, VAR_4,VAR_5, VAR_6,VAR_7);
  if (VAR_11) {
    if (VAR_11 == VAR_1 && (VAR_7 & VAR_0)) {
      FUNC_2(VAR_2,VAR_3,VAR_8);
      return;
    } else {
      FUNC_1(VAR_3,VAR_11);
      return;
    }
  }

  VAR_9= VAR_3->vb;
  FUNC_3(&VAR_3->vb);
  FUNC_4(VAR_2,VAR_3, VAR_6,&VAR_9,VAR_10, VAR_7,VAR_8);
}
