
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stinfo {scalar_t__ stmax; } ;
typedef scalar_t__ adns_status ;


 struct stinfo const* VAR_0 ;

__attribute__((used)) static int FUNC_0(const void *VAR_1, const void *VAR_2) {
  const adns_status *VAR_3= VAR_1;
  const struct stinfo *VAR_4= VAR_2;

  adns_status VAR_5, VAR_6, VAR_7;

  VAR_5= *VAR_3;
  VAR_6= (VAR_4==VAR_0) ? 0 : VAR_4[-1].stmax+1;
  VAR_7= VAR_4->stmax;

  return VAR_5 < VAR_6 ? -1 : VAR_5 > VAR_7 ? 1 : 0;
}
