
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


typedef TYPE_1__* adns_state ;
typedef int adns_initflags ;
struct TYPE_8__ {int configerrno; } ;
typedef int FILE ;


 int FUNC_0 (TYPE_1__*,int ,int ) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__**,int ,int *) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*,char const*,char*) ;

int FUNC_5(adns_state *VAR_1, adns_initflags VAR_2,
       FILE *VAR_3, const char *VAR_4) {
  adns_state VAR_5;
  int VAR_6;

  VAR_6= FUNC_2(&VAR_5, VAR_2, VAR_3); if (VAR_6) return VAR_6;

  FUNC_4(VAR_5,VAR_4,"<supplied configuration text>");
  if (VAR_5->configerrno) {
    VAR_6= VAR_5->configerrno;
    FUNC_1(VAR_5);
    return VAR_6;
  }

  VAR_6= FUNC_3(VAR_5); if (VAR_6) return VAR_6;
  FUNC_0(VAR_5,0,VAR_0);
  *VAR_1= VAR_5;
  return 0;
}
